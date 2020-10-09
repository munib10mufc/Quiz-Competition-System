/********************************************************************************
** Form generated from reading UI file 'resulttable.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTTABLE_H
#define UI_RESULTTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultTable
{
public:
    QTableView *resultTable;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ResultTable)
    {
        if (ResultTable->objectName().isEmpty())
            ResultTable->setObjectName(QStringLiteral("ResultTable"));
        ResultTable->resize(1024, 600);
        resultTable = new QTableView(ResultTable);
        resultTable->setObjectName(QStringLiteral("resultTable"));
        resultTable->setGeometry(QRect(400, 390, 256, 192));
        graphicsView_2 = new QGraphicsView(ResultTable);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(-10, 240, 1041, 91));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        graphicsView_3 = new QGraphicsView(ResultTable);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setEnabled(false);
        graphicsView_3->setGeometry(QRect(0, 0, 1024, 645));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        graphicsView = new QGraphicsView(ResultTable);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 50, 851, 192));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        pushButton_7 = new QPushButton(ResultTable);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(480, 260, 75, 36));
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
        pushButton_3 = new QPushButton(ResultTable);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(890, 10, 75, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));
        pushButton_3->setFlat(true);
        graphicsView_3->raise();
        graphicsView_2->raise();
        pushButton_3->raise();
        pushButton_7->raise();
        graphicsView->raise();
        resultTable->raise();

        retranslateUi(ResultTable);
        QObject::connect(pushButton_3, SIGNAL(clicked()), ResultTable, SLOT(logout()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), ResultTable, SLOT(goHome()));

        QMetaObject::connectSlotsByName(ResultTable);
    } // setupUi

    void retranslateUi(QWidget *ResultTable)
    {
        ResultTable->setWindowTitle(QApplication::translate("ResultTable", "ResultTable", 0));
        pushButton_7->setText(QApplication::translate("ResultTable", "HOME", 0));
        pushButton_3->setText(QApplication::translate("ResultTable", "LOGOUT", 0));
    } // retranslateUi

};

namespace Ui {
    class ResultTable: public Ui_ResultTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTTABLE_H
