/********************************************************************************
** Form generated from reading UI file 'createGroup.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_H
#define UI_CREATEGROUP_H

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

class Ui_createGroup
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView_3;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_7;
    QGraphicsView *graphicsView_2;
    QTableView *table;

    void setupUi(QMainWindow *createGroup)
    {
        if (createGroup->objectName().isEmpty())
            createGroup->setObjectName(QStringLiteral("createGroup"));
        createGroup->resize(1024, 625);
        centralWidget = new QWidget(createGroup);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setEnabled(false);
        graphicsView_3->setGeometry(QRect(0, -10, 1024, 645));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(890, 10, 75, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));
        pushButton_3->setFlat(true);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 50, 861, 192));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        pushButton_7 = new QPushButton(centralWidget);
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
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(-10, 240, 1041, 91));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        table = new QTableView(centralWidget);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(240, 350, 381, 251));
        createGroup->setCentralWidget(centralWidget);
        graphicsView_3->raise();
        graphicsView_2->raise();
        pushButton_7->raise();
        pushButton_3->raise();
        graphicsView->raise();
        table->raise();
        QWidget::setTabOrder(pushButton_7, pushButton_3);
        QWidget::setTabOrder(pushButton_3, graphicsView_2);
        QWidget::setTabOrder(graphicsView_2, graphicsView);
        QWidget::setTabOrder(graphicsView, graphicsView_3);

        retranslateUi(createGroup);
        QObject::connect(pushButton_7, SIGNAL(clicked()), createGroup, SLOT(buttonPressToHome()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), createGroup, SLOT(goHome()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), createGroup, SLOT(logout()));

        QMetaObject::connectSlotsByName(createGroup);
    } // setupUi

    void retranslateUi(QMainWindow *createGroup)
    {
        createGroup->setWindowTitle(QApplication::translate("createGroup", "Assign Project", 0));
        pushButton_3->setText(QApplication::translate("createGroup", "LOGOUT", 0));
        pushButton_7->setText(QApplication::translate("createGroup", "HOME", 0));
    } // retranslateUi

};

namespace Ui {
    class createGroup: public Ui_createGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_H
