/********************************************************************************
** Form generated from reading UI file 'firstpage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTPAGE_H
#define UI_FIRSTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstpageClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *addplace;
    QPushButton *okbutton;
    QPushButton *cancelbutton;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *firstpageClass)
    {
        if (firstpageClass->objectName().isEmpty())
            firstpageClass->setObjectName(QStringLiteral("firstpageClass"));
        firstpageClass->resize(556, 361);
        firstpageClass->setStyleSheet(QStringLiteral("background-image: url(:/firstpage/abcdef_small.jpg);"));
        centralWidget = new QWidget(firstpageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 251, 16));
        addplace = new QPushButton(centralWidget);
        addplace->setObjectName(QStringLiteral("addplace"));
        addplace->setGeometry(QRect(294, 130, 81, 23));
        okbutton = new QPushButton(centralWidget);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        okbutton->setGeometry(QRect(370, 310, 75, 23));
        cancelbutton = new QPushButton(centralWidget);
        cancelbutton->setObjectName(QStringLiteral("cancelbutton"));
        cancelbutton->setGeometry(QRect(460, 310, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 79, 61, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 130, 75, 23));
        firstpageClass->setCentralWidget(centralWidget);

        retranslateUi(firstpageClass);
        QObject::connect(addplace, SIGNAL(clicked()), firstpageClass, SLOT(buttonclick()));
        QObject::connect(okbutton, SIGNAL(clicked()), firstpageClass, SLOT(ok_click()));
        QObject::connect(cancelbutton, SIGNAL(clicked()), firstpageClass, SLOT(cancel_click()));
        QObject::connect(pushButton, SIGNAL(clicked()), firstpageClass, SLOT(create_click()));

        QMetaObject::connectSlotsByName(firstpageClass);
    } // setupUi

    void retranslateUi(QMainWindow *firstpageClass)
    {
        firstpageClass->setWindowTitle(QApplication::translate("firstpageClass", "firstpage", 0));
        label->setText(QApplication::translate("firstpageClass", "Enter the number of days of comptetion", 0));
        addplace->setText(QApplication::translate("firstpageClass", "Add Venue", 0));
        okbutton->setText(QApplication::translate("firstpageClass", "Next", 0));
        cancelbutton->setText(QApplication::translate("firstpageClass", "Cancel", 0));
        pushButton->setText(QApplication::translate("firstpageClass", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class firstpageClass: public Ui_firstpageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTPAGE_H
