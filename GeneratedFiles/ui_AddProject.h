/********************************************************************************
** Form generated from reading UI file 'AddProject.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROJECT_H
#define UI_ADDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProject
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_9;
    QGraphicsView *graphicsView_3;
    QLabel *label;

    void setupUi(QMainWindow *AddProject)
    {
        if (AddProject->objectName().isEmpty())
            AddProject->setObjectName(QStringLiteral("AddProject"));
        AddProject->resize(1022, 604);
        AddProject->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(AddProject);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(70, 40, 851, 192));
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
        lineEdit->setGeometry(QRect(440, 370, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(440, 420, 113, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 420, 90, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 470, 59, 13));
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(440, 470, 194, 22));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(430, 550, 75, 23));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 0, 1024, 641));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 370, 64, 13));
        AddProject->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        graphicsView_2->raise();
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_2->raise();
        label_3->raise();
        dateTimeEdit->raise();
        pushButton_9->raise();
        label->raise();

        retranslateUi(AddProject);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AddProject, SLOT(logout()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), AddProject, SLOT(addProject()));
        QObject::connect(pushButton, SIGNAL(clicked()), AddProject, SLOT(goHome()));

        QMetaObject::connectSlotsByName(AddProject);
    } // setupUi

    void retranslateUi(QMainWindow *AddProject)
    {
        AddProject->setWindowTitle(QApplication::translate("AddProject", "Add Project", 0));
        pushButton->setText(QApplication::translate("AddProject", "HOME SCREEN", 0));
        pushButton_2->setText(QApplication::translate("AddProject", "LOGOUT", 0));
        label_2->setText(QApplication::translate("AddProject", "Project Description", 0));
        label_3->setText(QApplication::translate("AddProject", "Project Time", 0));
        pushButton_9->setText(QApplication::translate("AddProject", "Submit", 0));
        label->setText(QApplication::translate("AddProject", "Project Name", 0));
    } // retranslateUi

};

namespace Ui {
    class AddProject: public Ui_AddProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJECT_H
