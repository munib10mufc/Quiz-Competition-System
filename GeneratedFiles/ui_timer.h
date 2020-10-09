/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QLCDNumber *lcdNumber;
    QPushButton *StartButton;
    QPushButton *AddButton;
    QPushButton *DeductButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *StartHour;
    QSpinBox *StartMins;
    QSpinBox *StartSecs;
    QSpinBox *AddSecs;
    QSpinBox *AddMins;
    QSpinBox *AddHours;
    QSpinBox *DeductSecs;
    QSpinBox *DeductMins;
    QSpinBox *DeductHours;
    QPushButton *Proceedtohomebutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QStringLiteral("timer"));
        timer->resize(839, 401);
        timer->setAutoFillBackground(false);
        timer->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        centralWidget = new QWidget(timer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 841, 151));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(560, 152, 281, 61));
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0.465909, y1:0.074, x2:0.494, y2:0.807, stop:0 rgba(117, 255, 216, 255), stop:1 rgba(255, 255, 255, 255));"));
        lcdNumber->setFrameShape(QFrame::StyledPanel);
        lcdNumber->setDigitCount(10);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(0));
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(560, 250, 75, 23));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setUnderline(false);
        font.setKerning(false);
        StartButton->setFont(font);
        StartButton->setFlat(true);
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(560, 280, 75, 23));
        AddButton->setFont(font);
        AddButton->setFlat(true);
        DeductButton = new QPushButton(centralWidget);
        DeductButton->setObjectName(QStringLiteral("DeductButton"));
        DeductButton->setGeometry(QRect(560, 310, 75, 23));
        DeductButton->setFont(font);
        DeductButton->setFlat(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 230, 46, 13));
        label->setFrameShape(QFrame::StyledPanel);
        label->setWordWrap(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(700, 230, 46, 13));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setWordWrap(false);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(750, 230, 46, 13));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setWordWrap(false);
        StartHour = new QSpinBox(centralWidget);
        StartHour->setObjectName(QStringLiteral("StartHour"));
        StartHour->setGeometry(QRect(650, 250, 42, 22));
        StartHour->setWrapping(false);
        StartHour->setFrame(true);
        StartHour->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        StartHour->setProperty("showGroupSeparator", QVariant(false));
        StartHour->setMaximum(23);
        StartHour->setValue(1);
        StartMins = new QSpinBox(centralWidget);
        StartMins->setObjectName(QStringLiteral("StartMins"));
        StartMins->setGeometry(QRect(700, 250, 42, 22));
        StartMins->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        StartMins->setMaximum(59);
        StartMins->setValue(12);
        StartSecs = new QSpinBox(centralWidget);
        StartSecs->setObjectName(QStringLiteral("StartSecs"));
        StartSecs->setGeometry(QRect(750, 250, 42, 22));
        StartSecs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        StartSecs->setAccelerated(false);
        StartSecs->setMaximum(59);
        StartSecs->setValue(20);
        AddSecs = new QSpinBox(centralWidget);
        AddSecs->setObjectName(QStringLiteral("AddSecs"));
        AddSecs->setGeometry(QRect(750, 280, 42, 22));
        AddSecs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        AddSecs->setMaximum(59);
        AddMins = new QSpinBox(centralWidget);
        AddMins->setObjectName(QStringLiteral("AddMins"));
        AddMins->setGeometry(QRect(700, 280, 42, 22));
        AddMins->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        AddMins->setMaximum(59);
        AddHours = new QSpinBox(centralWidget);
        AddHours->setObjectName(QStringLiteral("AddHours"));
        AddHours->setGeometry(QRect(650, 280, 42, 22));
        AddHours->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        AddHours->setMaximum(23);
        DeductSecs = new QSpinBox(centralWidget);
        DeductSecs->setObjectName(QStringLiteral("DeductSecs"));
        DeductSecs->setGeometry(QRect(750, 310, 42, 22));
        DeductSecs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DeductSecs->setMaximum(59);
        DeductMins = new QSpinBox(centralWidget);
        DeductMins->setObjectName(QStringLiteral("DeductMins"));
        DeductMins->setGeometry(QRect(700, 310, 42, 22));
        DeductMins->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DeductMins->setMaximum(59);
        DeductHours = new QSpinBox(centralWidget);
        DeductHours->setObjectName(QStringLiteral("DeductHours"));
        DeductHours->setGeometry(QRect(650, 310, 42, 22));
        DeductHours->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DeductHours->setMaximum(23);
        Proceedtohomebutton = new QPushButton(centralWidget);
        Proceedtohomebutton->setObjectName(QStringLiteral("Proceedtohomebutton"));
        Proceedtohomebutton->setGeometry(QRect(300, 230, 121, 41));
        timer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(timer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 839, 21));
        timer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(timer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        timer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(timer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        timer->setStatusBar(statusBar);

        retranslateUi(timer);
        QObject::connect(StartButton, SIGNAL(clicked()), timer, SLOT(starter()));
        QObject::connect(AddButton, SIGNAL(clicked()), timer, SLOT(addTime()));
        QObject::connect(DeductButton, SIGNAL(clicked()), timer, SLOT(deductTime()));
        QObject::connect(Proceedtohomebutton, SIGNAL(clicked()), timer, SLOT(makegui()));

        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QMainWindow *timer)
    {
        timer->setWindowTitle(QApplication::translate("timer", "munib", 0));
        StartButton->setText(QApplication::translate("timer", "Start", 0));
        AddButton->setText(QApplication::translate("timer", "Add time", 0));
        DeductButton->setText(QApplication::translate("timer", "Deduct time", 0));
        label->setText(QApplication::translate("timer", "Hours", 0));
        label_2->setText(QApplication::translate("timer", "Mins", 0));
        label_3->setText(QApplication::translate("timer", "Secs", 0));
        Proceedtohomebutton->setText(QApplication::translate("timer", "Procees to Home", 0));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
