/********************************************************************************
** Form generated from reading UI file 'showschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSCHEDULE_H
#define UI_SHOWSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showschedule
{
public:
    QTableView *scheduletable;

    void setupUi(QWidget *showschedule)
    {
        if (showschedule->objectName().isEmpty())
            showschedule->setObjectName(QStringLiteral("showschedule"));
        showschedule->resize(581, 329);
        showschedule->setStyleSheet(QStringLiteral(""));
        scheduletable = new QTableView(showschedule);
        scheduletable->setObjectName(QStringLiteral("scheduletable"));
        scheduletable->setGeometry(QRect(20, 10, 541, 301));

        retranslateUi(showschedule);

        QMetaObject::connectSlotsByName(showschedule);
    } // setupUi

    void retranslateUi(QWidget *showschedule)
    {
        showschedule->setWindowTitle(QApplication::translate("showschedule", "showschedule", 0));
    } // retranslateUi

};

namespace Ui {
    class showschedule: public Ui_showschedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSCHEDULE_H
