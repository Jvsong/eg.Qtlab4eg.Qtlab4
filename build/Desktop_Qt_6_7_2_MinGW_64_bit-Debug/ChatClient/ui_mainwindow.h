/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QComboBox *privateTargetComboBox;
    QPushButton *privateSayButton;
    QPushButton *kickButton;
    QPushButton *pushButton_3;
    QPushButton *logoutButton;
    QWidget *loginPage;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *serverEdit;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(650, 426);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("#titleLabel{\n"
"background:white;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"padding:5px;\n"
"font:24pt\"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,255);\n"
"background-color:rgba(135,206,235,1);\n"
"}\n"
"\n"
"#mainFrame{\n"
"border:none;\n"
"background:white;\n"
"}\n"
"#loginFrame{\n"
"background: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #ddf,stop:1 #aaf);\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 25px;\n"
"}"));

        verticalLayout->addWidget(titleLabel);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        verticalLayout_3 = new QVBoxLayout(chatPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName("roomTextEdit");

        horizontalLayout->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(userListWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName("sayLineEdit");
        sayLineEdit->setMinimumSize(QSize(235, 0));
        sayLineEdit->setMaximumSize(QSize(320, 16777215));

        horizontalLayout_2->addWidget(sayLineEdit);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName("sayButton");
        sayButton->setMinimumSize(QSize(50, 0));
        sayButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(sayButton);

        privateTargetComboBox = new QComboBox(chatPage);
        privateTargetComboBox->setObjectName("privateTargetComboBox");

        horizontalLayout_2->addWidget(privateTargetComboBox);

        privateSayButton = new QPushButton(chatPage);
        privateSayButton->setObjectName("privateSayButton");
        privateSayButton->setMinimumSize(QSize(50, 0));
        privateSayButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(privateSayButton);

        kickButton = new QPushButton(chatPage);
        kickButton->setObjectName("kickButton");
        kickButton->setMinimumSize(QSize(50, 0));
        kickButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(kickButton);

        pushButton_3 = new QPushButton(chatPage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(50, 0));
        pushButton_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(pushButton_3);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setMinimumSize(QSize(50, 0));
        logoutButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout_3 = new QGridLayout(loginPage);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 71, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(109, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName("loginFrame");
        loginFrame->setStyleSheet(QString::fromUtf8("#loginFrame{\n"
"background: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #e6f7ff,stop:1 #b3e5fc);\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 25px;\n"
"}"));
        loginFrame->setFrameShape(QFrame::Shape::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(loginFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        serverEdit = new QLineEdit(loginFrame);
        serverEdit->setObjectName("serverEdit");

        gridLayout->addWidget(serverEdit, 0, 1, 1, 1);

        label_3 = new QLabel(loginFrame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        usernameEdit = new QLineEdit(loginFrame);
        usernameEdit->setObjectName("usernameEdit");

        gridLayout->addWidget(usernameEdit, 1, 1, 1, 1);

        passwordEdit = new QLineEdit(loginFrame);
        passwordEdit->setObjectName("passwordEdit");

        gridLayout->addWidget(passwordEdit, 2, 1, 1, 1);

        label = new QLabel(loginFrame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName("loginButton");

        verticalLayout_2->addWidget(loginButton);


        gridLayout_3->addWidget(loginFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(serverEdit, usernameEdit);
        QWidget::setTabOrder(usernameEdit, loginButton);
        QWidget::setTabOrder(loginButton, roomTextEdit);
        QWidget::setTabOrder(roomTextEdit, sayLineEdit);
        QWidget::setTabOrder(sayLineEdit, sayButton);
        QWidget::setTabOrder(sayButton, userListWidget);
        QWidget::setTabOrder(userListWidget, logoutButton);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\351\203\255\346\231\223\347\272\257\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        sayButton->setText(QCoreApplication::translate("MainWindow", "\347\276\244\345\217\221", nullptr));
        privateSayButton->setText(QCoreApplication::translate("MainWindow", "\347\247\201\350\201\212", nullptr));
        kickButton->setText(QCoreApplication::translate("MainWindow", "\350\270\242\345\207\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\347\246\201\350\250\200", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        serverEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260\357\274\232", nullptr));
        usernameEdit->setText(QCoreApplication::translate("MainWindow", "guo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
