/********************************************************************************
** Form generated from reading UI file 'AddParticipant.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPARTICIPANT_H
#define UI_ADDPARTICIPANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddParticipant
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
    QPushButton *pushButton_9;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QCheckBox *checkBox;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLabel *label_10;
    QLabel *label_12;
    QGraphicsView *graphicsView_3;

    void setupUi(QMainWindow *AddParticipant)
    {
        if (AddParticipant->objectName().isEmpty())
            AddParticipant->setObjectName(QStringLiteral("AddParticipant"));
        AddParticipant->resize(1024, 619);
        AddParticipant->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(AddParticipant);
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
        lineEdit->setGeometry(QRect(200, 380, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 410, 113, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 410, 19, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 440, 39, 16));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 580, 81, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 380, 27, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 470, 70, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 500, 49, 16));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 440, 113, 20));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 470, 113, 20));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 500, 113, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 530, 25, 13));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(200, 530, 113, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(540, 340, 90, 17));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(546, 500, 54, 16));
        label_7->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_8 = new QLineEdit(centralwidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(620, 410, 113, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(540, 470, 61, 20));
        label_9->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_9 = new QLineEdit(centralwidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(620, 440, 113, 20));
        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(620, 470, 113, 21));
        lineEdit_11 = new QLineEdit(centralwidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(620, 500, 113, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 437, 131, 20));
        label_10->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(520, 410, 81, 20));
        label_12->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 0, 1024, 621));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        AddParticipant->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        graphicsView_2->raise();
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_2->raise();
        label_3->raise();
        pushButton_9->raise();
        label->raise();
        label_4->raise();
        label_5->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        label_6->raise();
        lineEdit_6->raise();
        checkBox->raise();
        label_7->raise();
        lineEdit_8->raise();
        label_9->raise();
        lineEdit_9->raise();
        lineEdit_10->raise();
        lineEdit_11->raise();
        label_10->raise();
        label_12->raise();
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, pushButton_9);
        QWidget::setTabOrder(pushButton_9, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, graphicsView);
        QWidget::setTabOrder(graphicsView, graphicsView_2);

        retranslateUi(AddParticipant);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AddParticipant, SLOT(logout()));
        QObject::connect(pushButton, SIGNAL(clicked()), AddParticipant, SLOT(goHome()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), AddParticipant, SLOT(addParticipant()));
        QObject::connect(checkBox, SIGNAL(stateChanged(int)), AddParticipant, SLOT(show12()));

        QMetaObject::connectSlotsByName(AddParticipant);
    } // setupUi

    void retranslateUi(QMainWindow *AddParticipant)
    {
        AddParticipant->setWindowTitle(QApplication::translate("AddParticipant", "Add Project", 0));
        pushButton->setText(QApplication::translate("AddParticipant", "HOME SCREEN", 0));
        pushButton_2->setText(QApplication::translate("AddParticipant", "LOGOUT", 0));
        label_2->setText(QApplication::translate("AddParticipant", "Age", 0));
        label_3->setText(QApplication::translate("AddParticipant", "Address", 0));
        pushButton_9->setText(QApplication::translate("AddParticipant", "Add Participant", 0));
        label->setText(QApplication::translate("AddParticipant", "Name", 0));
        label_4->setText(QApplication::translate("AddParticipant", "Phone Number", 0));
        label_5->setText(QApplication::translate("AddParticipant", "Institution", 0));
        label_6->setText(QApplication::translate("AddParticipant", "CNIC", 0));
        checkBox->setText(QApplication::translate("AddParticipant", "Accomodation", 0));
        label_7->setText(QApplication::translate("AddParticipant", "End Date", 0));
        label_9->setText(QApplication::translate("AddParticipant", "Start Date", 0));
        label_10->setText(QApplication::translate("AddParticipant", "Room's Phone Number", 0));
        label_12->setText(QApplication::translate("AddParticipant", "Room Number", 0));
    } // retranslateUi

};

namespace Ui {
    class AddParticipant: public Ui_AddParticipant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPARTICIPANT_H
