/********************************************************************************
** Form generated from reading UI file 'Profile.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_9;
    QTableView *tableView;
    QGraphicsView *graphicsView_3;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QStringLiteral("Profile"));
        Profile->resize(1025, 640);
        Profile->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 50, 861, 192));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 10, 75, 31));
        pushButton_2->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));
        pushButton_2->setFlat(true);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(0, 240, 1031, 91));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 270, 134, 36));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(21);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setContextMenuPolicy(Qt::PreventContextMenu);
        pushButton->setAcceptDrops(true);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QStringLiteral("font: 75 12pt \"Segoe Print\";"));
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 350, 116, 41));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Print\";"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(470, 360, 113, 21));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(610, 360, 75, 23));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 410, 871, 192));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 0, 1024, 600));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        Profile->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        graphicsView->raise();
        pushButton_2->raise();
        graphicsView_2->raise();
        pushButton->raise();
        label->raise();
        lineEdit->raise();
        pushButton_9->raise();
        tableView->raise();

        retranslateUi(Profile);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Profile, SLOT(logout()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), Profile, SLOT(search()));
        QObject::connect(pushButton, SIGNAL(clicked()), Profile, SLOT(goHome()));

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QApplication::translate("Profile", "Participant Profile", 0));
        pushButton_2->setText(QApplication::translate("Profile", "LOGOUT", 0));
        pushButton->setText(QApplication::translate("Profile", "HOME SCREEN", 0));
        label->setText(QApplication::translate("Profile", "Participant ID", 0));
        pushButton_9->setText(QApplication::translate("Profile", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
