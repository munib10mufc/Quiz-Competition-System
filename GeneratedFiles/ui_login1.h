/********************************************************************************
** Form generated from reading UI file 'login1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN1_H
#define UI_LOGIN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login1Class
{
public:
    QWidget *centralWidget;
    QLineEdit *userText_2;
    QLabel *userlabel_2;
    QLabel *passlabel_2;
    QLabel *label_2;
    QLineEdit *passText_2;
    QPushButton *login_2;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login1Class)
    {
        if (Login1Class->objectName().isEmpty())
            Login1Class->setObjectName(QStringLiteral("Login1Class"));
        Login1Class->resize(1024, 600);
        Login1Class->setStyleSheet(QStringLiteral("background-color: rgb(225, 255, 213);"));
        centralWidget = new QWidget(Login1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        userText_2 = new QLineEdit(centralWidget);
        userText_2->setObjectName(QStringLiteral("userText_2"));
        userText_2->setGeometry(QRect(440, 410, 231, 20));
        userText_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        userText_2->setMaxLength(15);
        userText_2->setEchoMode(QLineEdit::Normal);
        userText_2->setClearButtonEnabled(true);
        userlabel_2 = new QLabel(centralWidget);
        userlabel_2->setObjectName(QStringLiteral("userlabel_2"));
        userlabel_2->setGeometry(QRect(360, 410, 63, 16));
        QFont font;
        font.setPointSize(10);
        userlabel_2->setFont(font);
        userlabel_2->setAutoFillBackground(false);
        userlabel_2->setFrameShape(QFrame::NoFrame);
        userlabel_2->setFrameShadow(QFrame::Plain);
        userlabel_2->setLineWidth(4);
        userlabel_2->setTextFormat(Qt::RichText);
        userlabel_2->setScaledContents(false);
        passlabel_2 = new QLabel(centralWidget);
        passlabel_2->setObjectName(QStringLiteral("passlabel_2"));
        passlabel_2->setGeometry(QRect(370, 450, 55, 16));
        passlabel_2->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 330, 181, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Plantagenet Cherokee"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        passText_2 = new QLineEdit(centralWidget);
        passText_2->setObjectName(QStringLiteral("passText_2"));
        passText_2->setGeometry(QRect(440, 450, 231, 20));
        passText_2->setAutoFillBackground(false);
        passText_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        passText_2->setFrame(true);
        passText_2->setEchoMode(QLineEdit::Password);
        passText_2->setDragEnabled(false);
        passText_2->setClearButtonEnabled(true);
        login_2 = new QPushButton(centralWidget);
        login_2->setObjectName(QStringLiteral("login_2"));
        login_2->setGeometry(QRect(460, 520, 111, 23));
        login_2->setAutoDefault(true);
        login_2->setDefault(true);
        login_2->setFlat(false);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(90, 50, 851, 191));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        Login1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        Login1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Login1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login1Class->setStatusBar(statusBar);

        retranslateUi(Login1Class);
        QObject::connect(login_2, SIGNAL(clicked()), Login1Class, SLOT(home()));

        QMetaObject::connectSlotsByName(Login1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Login1Class)
    {
        Login1Class->setWindowTitle(QApplication::translate("Login1Class", "Login1", 0));
        userlabel_2->setText(QApplication::translate("Login1Class", "User Name", 0));
        passlabel_2->setText(QApplication::translate("Login1Class", "Password", 0));
        label_2->setText(QApplication::translate("Login1Class", "ADMIN LOGIN", 0));
        login_2->setText(QApplication::translate("Login1Class", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class Login1Class: public Ui_Login1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN1_H
