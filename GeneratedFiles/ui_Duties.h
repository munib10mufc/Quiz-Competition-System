/********************************************************************************
** Form generated from reading UI file 'Duties.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUTIES_H
#define UI_DUTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Duties
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton;
    QGraphicsView *graphicsView_3;
    QTableView *tableView;

    void setupUi(QMainWindow *Duties)
    {
        if (Duties->objectName().isEmpty())
            Duties->setObjectName(QStringLiteral("Duties"));
        Duties->resize(1025, 640);
        Duties->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(Duties);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 50, 851, 192));
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
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, -10, 1024, 640));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(300, 410, 411, 141));
        Duties->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        graphicsView->raise();
        pushButton_2->raise();
        graphicsView_2->raise();
        pushButton->raise();
        tableView->raise();

        retranslateUi(Duties);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Duties, SLOT(logout()));
        QObject::connect(pushButton, SIGNAL(clicked()), Duties, SLOT(goHome()));

        QMetaObject::connectSlotsByName(Duties);
    } // setupUi

    void retranslateUi(QMainWindow *Duties)
    {
        Duties->setWindowTitle(QApplication::translate("Duties", "Participant Profile", 0));
        pushButton_2->setText(QApplication::translate("Duties", "LOGOUT", 0));
        pushButton->setText(QApplication::translate("Duties", "HOME SCREEN", 0));
    } // retranslateUi

};

namespace Ui {
    class Duties: public Ui_Duties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUTIES_H
