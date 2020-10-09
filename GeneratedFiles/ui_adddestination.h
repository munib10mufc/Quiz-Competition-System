/********************************************************************************
** Form generated from reading UI file 'adddestination.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDESTINATION_H
#define UI_ADDDESTINATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adddestination
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *venueedit;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QTableView *placeview;
    QLabel *hiddenlabel;

    void setupUi(QWidget *adddestination)
    {
        if (adddestination->objectName().isEmpty())
            adddestination->setObjectName(QStringLiteral("adddestination"));
        adddestination->resize(450, 313);
        adddestination->setStyleSheet(QStringLiteral(""));
        label = new QLabel(adddestination);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 131, 16));
        label_2 = new QLabel(adddestination);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 171, 16));
        venueedit = new QLineEdit(adddestination);
        venueedit->setObjectName(QStringLiteral("venueedit"));
        venueedit->setGeometry(QRect(170, 30, 113, 20));
        okButton = new QPushButton(adddestination);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(220, 250, 75, 23));
        cancelButton = new QPushButton(adddestination);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(310, 250, 75, 23));
        label_4 = new QLabel(adddestination);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 60, 111, 16));
        lineEdit_2 = new QLineEdit(adddestination);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 60, 113, 20));
        pushButton = new QPushButton(adddestination);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 60, 75, 23));
        placeview = new QTableView(adddestination);
        placeview->setObjectName(QStringLiteral("placeview"));
        placeview->setGeometry(QRect(30, 110, 371, 131));
        hiddenlabel = new QLabel(adddestination);
        hiddenlabel->setObjectName(QStringLiteral("hiddenlabel"));
        hiddenlabel->setGeometry(QRect(160, 90, 241, 16));

        retranslateUi(adddestination);
        QObject::connect(okButton, SIGNAL(clicked()), adddestination, SLOT(ok_buttonclick()));
        QObject::connect(cancelButton, SIGNAL(clicked()), adddestination, SLOT(cancel_buttonclick()));
        QObject::connect(pushButton, SIGNAL(clicked()), adddestination, SLOT(add_buttonclick()));

        QMetaObject::connectSlotsByName(adddestination);
    } // setupUi

    void retranslateUi(QWidget *adddestination)
    {
        adddestination->setWindowTitle(QApplication::translate("adddestination", "adddestination", 0));
        label->setText(QApplication::translate("adddestination", "Enter venue to add", 0));
        label_2->setText(QApplication::translate("adddestination", "Existing Venues", 0));
        okButton->setText(QApplication::translate("adddestination", "OK", 0));
        cancelButton->setText(QApplication::translate("adddestination", "Cancel", 0));
        label_4->setText(QApplication::translate("adddestination", "Enter total capacity", 0));
        pushButton->setText(QApplication::translate("adddestination", "ADD", 0));
        hiddenlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adddestination: public Ui_adddestination {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDESTINATION_H
