/********************************************************************************
** Form generated from reading UI file 'addresult.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESULT_H
#define UI_ADDRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddResult
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *IDField;
    QLineEdit *pointsField;
    QLabel *resultSuccess;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;

    void setupUi(QWidget *AddResult)
    {
        if (AddResult->objectName().isEmpty())
            AddResult->setObjectName(QStringLiteral("AddResult"));
        AddResult->resize(1024, 600);
        pushButton = new QPushButton(AddResult);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 550, 75, 23));
        label = new QLabel(AddResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 450, 46, 13));
        label_2 = new QLabel(AddResult);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 490, 46, 13));
        IDField = new QLineEdit(AddResult);
        IDField->setObjectName(QStringLiteral("IDField"));
        IDField->setGeometry(QRect(450, 450, 141, 20));
        pointsField = new QLineEdit(AddResult);
        pointsField->setObjectName(QStringLiteral("pointsField"));
        pointsField->setGeometry(QRect(450, 490, 141, 20));
        resultSuccess = new QLabel(AddResult);
        resultSuccess->setObjectName(QStringLiteral("resultSuccess"));
        resultSuccess->setGeometry(QRect(130, 370, 281, 41));
        label_3 = new QLabel(AddResult);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 380, 111, 21));
        label_3->setStyleSheet(QLatin1String("font: 75 14pt \"Calibri Light\";\n"
"color: rgb(0, 0, 0);"));
        graphicsView = new QGraphicsView(AddResult);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 70, 851, 192));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        graphicsView_2 = new QGraphicsView(AddResult);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(-10, 260, 1041, 91));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        pushButton_7 = new QPushButton(AddResult);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(480, 280, 75, 36));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(21);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setContextMenuPolicy(Qt::PreventContextMenu);
        pushButton_7->setAcceptDrops(true);
        pushButton_7->setLayoutDirection(Qt::LeftToRight);
        pushButton_7->setStyleSheet(QStringLiteral("font: 75 12pt \"Segoe Print\";"));
        pushButton_7->setAutoDefault(false);
        pushButton_7->setDefault(false);
        pushButton_7->setFlat(true);
        pushButton_3 = new QPushButton(AddResult);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(920, 20, 75, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));
        pushButton_3->setFlat(true);
        graphicsView_3 = new QGraphicsView(AddResult);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(80, 70, 851, 191));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        graphicsView_4 = new QGraphicsView(AddResult);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(-10, 250, 1041, 101));
        graphicsView_4->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        graphicsView_5 = new QGraphicsView(AddResult);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        graphicsView_5->setEnabled(false);
        graphicsView_5->setGeometry(QRect(0, 0, 1024, 645));
        graphicsView_5->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        graphicsView_4->raise();
        graphicsView_5->raise();
        graphicsView->raise();
        graphicsView_2->raise();
        pushButton_3->raise();
        pushButton_7->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        IDField->raise();
        pointsField->raise();
        resultSuccess->raise();
        label_3->raise();
        graphicsView_3->raise();

        retranslateUi(AddResult);
        QObject::connect(pushButton, SIGNAL(clicked()), AddResult, SLOT(submitClicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), AddResult, SLOT(goHome()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), AddResult, SLOT(logout()));

        QMetaObject::connectSlotsByName(AddResult);
    } // setupUi

    void retranslateUi(QWidget *AddResult)
    {
        AddResult->setWindowTitle(QApplication::translate("AddResult", "AddResult", 0));
        pushButton->setText(QApplication::translate("AddResult", "Submit", 0));
        label->setText(QApplication::translate("AddResult", "Team ID", 0));
        label_2->setText(QApplication::translate("AddResult", "Points", 0));
        resultSuccess->setText(QString());
        label_3->setText(QApplication::translate("AddResult", "Add Result", 0));
        pushButton_7->setText(QApplication::translate("AddResult", "HOME", 0));
        pushButton_3->setText(QApplication::translate("AddResult", "LOGOUT", 0));
    } // retranslateUi

};

namespace Ui {
    class AddResult: public Ui_AddResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESULT_H
