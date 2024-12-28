#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <QObject>
#include<QTcpSocket>

class ChatClient : public QObject
{
    Q_OBJECT
public:
    explicit ChatClient(QObject *parent = nullptr);
    bool isAdmin() const {
        qDebug() << "Checking ChatClient admin status: " << m_isAdmin;
        return m_isAdmin;
    }
    void setAdminStatus(bool isAdmin){m_isAdmin = isAdmin;}
    bool m_isAdmin = false;

signals:
    void connected();
    void messageReceived(const QString &text);
    void jsonReceived(const QJsonObject &docObj);

private:
    QTcpSocket *m_clientSocket;


public slots:
    void onReadyRead();//收到消息
    void sendMessage(const QString &text, const QString &type="message", const QString &target="", bool isAdmin="");//传出去消息
    void connectToServer(const QHostAddress &address, quint16 port);
    void disconnectFromHost();

};

#endif // CHATCLIENT_H
