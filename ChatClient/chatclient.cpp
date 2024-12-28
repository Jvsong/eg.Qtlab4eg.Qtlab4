#include "chatclient.h"
#include <QDataStream>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>

ChatClient::ChatClient(QObject *parent)
    : QObject{parent}
{
    m_clientSocket=new QTcpSocket(this);
    connect(m_clientSocket, &QTcpSocket::connected, this, &ChatClient::connected);
    connect(m_clientSocket, &QTcpSocket::readyRead, this, &ChatClient::onReadyRead);
}

void ChatClient::onReadyRead()
{
    QByteArray jsonData;//存放读取到的数据
    QDataStream socketStream(m_clientSocket);
    socketStream.setVersion(QDataStream::Qt_6_7);

    for(;;){
        socketStream.startTransaction();//开始事务读数据
        socketStream >> jsonData;//从QDataStream中读取数据到jsonData,>>为写入数据

        if(socketStream.commitTransaction()){//事务提交成功

            QJsonParseError parseError;
            const QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData,&parseError);
            if(parseError.error == QJsonParseError::NoError){
                if(jsonDoc.isObject()){
                    emit jsonReceived(jsonDoc.object());
                }
            }
        }
        else{
            break;
        }
    }
}

void ChatClient::sendMessage(const QString &text, const QString &type, const QString &target, bool isAdmin)
{
    if(m_clientSocket->state() != QAbstractSocket::ConnectedState)//先判断当前m_serverSocket的状态是否为已连接状态
        return;

    if(!text.isEmpty() || type == "disconnect" || type == "kick"){
        QDataStream serverStream(m_clientSocket);
        serverStream.setVersion(QDataStream::Qt_6_7);

        QJsonObject message;
        message["type"]=type;
        message["text"]=text;
        if (type == "private" || type == "kick" ) {
            message["target"] = target;  // 如果是私聊消息，设置接收方用户名

        }

        // 如果是管理员且发送类型为message，添加管理员权限信息
        if (isAdmin && (type == "message" || type == "private" || type == "kick")) {
            message["is_admin"] = true;

        }
        serverStream <<QJsonDocument(message).toJson();//<<操作符将各种数据类型写入QDataStream

    }
}

void ChatClient::connectToServer(const QHostAddress &address, quint16 port)
{
    m_clientSocket->connectToHost(address,port);
}

void ChatClient::disconnectFromHost()
{
    // 构造表示断开连接的消息
    QJsonObject disconnectMsg;
    disconnectMsg["type"] = "disconnect";
    sendMessage("", "disconnect", "", false);  // 发送断开连接消息

    m_clientSocket->disconnectFromHost();
}
