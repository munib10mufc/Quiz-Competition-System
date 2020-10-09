/********************************************************************************
** Form generated from reading UI file 'RemoveParticipant.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPARTICIPANT_H
#define UI_REMOVEPARTICIPANT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveParticipant
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView_2;
    QLineEdit *lineEdit;
    QGraphicsView *graphicsView_3;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *RemoveParticipant)
    {
        if (RemoveParticipant->objectName().isEmpty())
            RemoveParticipant->setObjectName(QStringLiteral("RemoveParticipant"));
        RemoveParticipant->resize(1024, 639);
        RemoveParticipant->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(RemoveParticipant);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(70, 40, 861, 192));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 260, 134, 36));
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(890, 10, 75, 31));
        pushButton_2->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));
        pushButton_2->setFlat(true);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(0, 230, 1031, 91));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(430, 390, 113, 20));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 0, 1021, 641));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 390, 65, 13));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 390, 75, 23));
        RemoveParticipant->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        graphicsView_2->raise();
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        label->raise();
        pushButton_3->raise();

        retranslateUi(RemoveParticipant);
        QObject::connect(pushButton_2, SIGNAL(clicked()), RemoveParticipant, SLOT(logout()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), RemoveParticipant, SLOT(search()));
        QObject::connect(pushButton, SIGNAL(clicked()), RemoveParticipant, SLOT(goHome()));

        QMetaObject::connectSlotsByName(RemoveParticipant);
    } // setupUi

    void retranslateUi(QMainWindow *RemoveParticipant)
    {
        RemoveParticipant->setWindowTitle(QApplication::translate("RemoveParticipant", "Remove Participant", 0));
        pushButton->setText(QApplication::translate("RemoveParticipant", "HOME SCREEN", 0));
        pushButton_2->setText(QApplication::translate("RemoveParticipant", "LOGOUT", 0));
        label->setText(QApplication::translate("RemoveParticipant", "Participant ID", 0));
        pushButton_3->setText(QApplication::translate("RemoveParticipant", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveParticipant: public Ui_RemoveParticipant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPARTICIPANT_H
