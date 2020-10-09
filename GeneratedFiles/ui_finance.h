/********************************************************************************
** Form generated from reading UI file 'finance.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_H
#define UI_FINANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_financeClass
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QPushButton *addsponsorbutton;
    QPushButton *addexpensebutton;
    QPushButton *addincomebutton;
    QPushButton *showsponsorsbutton;
    QPushButton *showexpensesbutton;
    QWidget *AddIncomeGroup;
    QPushButton *AddIncomeConfirmButton;
    QPushButton *IncomeCanceButton;
    QTextEdit *IncomeSponsorNameInput;
    QTextEdit *IncomeSponsorDescriptionInput;
    QWidget *AddSponsorGroup;
    QPushButton *ConfirmAddSponsorButton;
    QPushButton *CancelAddSponsorButton;
    QTextEdit *SponsorLocationInput;
    QTextEdit *SponsorNameInput;
    QWidget *AddExpenseGroup;
    QPushButton *ConfirmAddExpenseButton;
    QPushButton *CancelAddExpenseButton;
    QTextEdit *AddExpenseDescriptionInput;
    QGroupBox *ShowExpenseGroup;
    QPushButton *ShowExpenseOkButton;
    QTableView *ShowExpenseTable;
    QGroupBox *ShowSponsorsGroup;
    QPushButton *ShowSponsorOkButton;
    QTableView *ShowSponsorsTable;
    QPushButton *showIncomeButton;
    QGroupBox *ShowIncomeGroup;
    QPushButton *ShowIncomeOkButton;
    QTableView *ShowIncomeTable;
    QPushButton *addexpensebutton_2;
    QPushButton *addexpensebutton_3;
    QGraphicsView *graphicsView_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *financeClass)
    {
        if (financeClass->objectName().isEmpty())
            financeClass->setObjectName(QStringLiteral("financeClass"));
        financeClass->resize(1021, 640);
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(16);
        financeClass->setFont(font);
        financeClass->setStyleSheet(QStringLiteral("background-image: url(:/finance/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        financeClass->setInputMethodHints(Qt::ImhDigitsOnly);
        centralWidget = new QWidget(financeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(90, 20, 851, 191));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Login1/logo.png);"));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(-10, 210, 1041, 51));
        graphicsView_2->setAutoFillBackground(true);
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(165, 185, 255);"));
        addsponsorbutton = new QPushButton(centralWidget);
        addsponsorbutton->setObjectName(QStringLiteral("addsponsorbutton"));
        addsponsorbutton->setGeometry(QRect(70, 220, 121, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        addsponsorbutton->setFont(font1);
        addsponsorbutton->setCursor(QCursor(Qt::PointingHandCursor));
        addsponsorbutton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        addsponsorbutton->setFlat(true);
        addexpensebutton = new QPushButton(centralWidget);
        addexpensebutton->setObjectName(QStringLiteral("addexpensebutton"));
        addexpensebutton->setGeometry(QRect(230, 220, 121, 31));
        addexpensebutton->setFont(font1);
        addexpensebutton->setCursor(QCursor(Qt::PointingHandCursor));
        addexpensebutton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        addexpensebutton->setFlat(true);
        addincomebutton = new QPushButton(centralWidget);
        addincomebutton->setObjectName(QStringLiteral("addincomebutton"));
        addincomebutton->setGeometry(QRect(390, 220, 121, 31));
        addincomebutton->setFont(font1);
        addincomebutton->setCursor(QCursor(Qt::PointingHandCursor));
        addincomebutton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        addincomebutton->setFlat(true);
        showsponsorsbutton = new QPushButton(centralWidget);
        showsponsorsbutton->setObjectName(QStringLiteral("showsponsorsbutton"));
        showsponsorsbutton->setGeometry(QRect(540, 220, 121, 31));
        showsponsorsbutton->setFont(font1);
        showsponsorsbutton->setCursor(QCursor(Qt::PointingHandCursor));
        showsponsorsbutton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        showsponsorsbutton->setFlat(true);
        showexpensesbutton = new QPushButton(centralWidget);
        showexpensesbutton->setObjectName(QStringLiteral("showexpensesbutton"));
        showexpensesbutton->setGeometry(QRect(700, 220, 121, 31));
        showexpensesbutton->setFont(font1);
        showexpensesbutton->setCursor(QCursor(Qt::PointingHandCursor));
        showexpensesbutton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        showexpensesbutton->setFlat(true);
        AddIncomeGroup = new QWidget(centralWidget);
        AddIncomeGroup->setObjectName(QStringLiteral("AddIncomeGroup"));
        AddIncomeGroup->setGeometry(QRect(350, 300, 241, 271));
        AddIncomeConfirmButton = new QPushButton(AddIncomeGroup);
        AddIncomeConfirmButton->setObjectName(QStringLiteral("AddIncomeConfirmButton"));
        AddIncomeConfirmButton->setGeometry(QRect(40, 220, 75, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Print"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        AddIncomeConfirmButton->setFont(font2);
        IncomeCanceButton = new QPushButton(AddIncomeGroup);
        IncomeCanceButton->setObjectName(QStringLiteral("IncomeCanceButton"));
        IncomeCanceButton->setGeometry(QRect(140, 220, 75, 23));
        IncomeCanceButton->setFont(font2);
        IncomeSponsorNameInput = new QTextEdit(AddIncomeGroup);
        IncomeSponsorNameInput->setObjectName(QStringLiteral("IncomeSponsorNameInput"));
        IncomeSponsorNameInput->setGeometry(QRect(40, 20, 171, 31));
        IncomeSponsorNameInput->setStyleSheet(QStringLiteral(""));
        IncomeSponsorDescriptionInput = new QTextEdit(AddIncomeGroup);
        IncomeSponsorDescriptionInput->setObjectName(QStringLiteral("IncomeSponsorDescriptionInput"));
        IncomeSponsorDescriptionInput->setGeometry(QRect(40, 110, 171, 101));
        IncomeSponsorDescriptionInput->setStyleSheet(QStringLiteral(""));
        AddSponsorGroup = new QWidget(centralWidget);
        AddSponsorGroup->setObjectName(QStringLiteral("AddSponsorGroup"));
        AddSponsorGroup->setGeometry(QRect(350, 300, 241, 181));
        ConfirmAddSponsorButton = new QPushButton(AddSponsorGroup);
        ConfirmAddSponsorButton->setObjectName(QStringLiteral("ConfirmAddSponsorButton"));
        ConfirmAddSponsorButton->setGeometry(QRect(40, 140, 75, 23));
        ConfirmAddSponsorButton->setFont(font2);
        CancelAddSponsorButton = new QPushButton(AddSponsorGroup);
        CancelAddSponsorButton->setObjectName(QStringLiteral("CancelAddSponsorButton"));
        CancelAddSponsorButton->setGeometry(QRect(140, 140, 75, 23));
        CancelAddSponsorButton->setFont(font2);
        SponsorLocationInput = new QTextEdit(AddSponsorGroup);
        SponsorLocationInput->setObjectName(QStringLiteral("SponsorLocationInput"));
        SponsorLocationInput->setGeometry(QRect(40, 60, 171, 31));
        SponsorLocationInput->setStyleSheet(QStringLiteral(""));
        SponsorNameInput = new QTextEdit(AddSponsorGroup);
        SponsorNameInput->setObjectName(QStringLiteral("SponsorNameInput"));
        SponsorNameInput->setGeometry(QRect(40, 20, 171, 31));
        SponsorNameInput->setStyleSheet(QStringLiteral(""));
        AddExpenseGroup = new QWidget(centralWidget);
        AddExpenseGroup->setObjectName(QStringLiteral("AddExpenseGroup"));
        AddExpenseGroup->setGeometry(QRect(350, 300, 241, 181));
        ConfirmAddExpenseButton = new QPushButton(AddExpenseGroup);
        ConfirmAddExpenseButton->setObjectName(QStringLiteral("ConfirmAddExpenseButton"));
        ConfirmAddExpenseButton->setGeometry(QRect(40, 140, 75, 23));
        ConfirmAddExpenseButton->setFont(font2);
        CancelAddExpenseButton = new QPushButton(AddExpenseGroup);
        CancelAddExpenseButton->setObjectName(QStringLiteral("CancelAddExpenseButton"));
        CancelAddExpenseButton->setGeometry(QRect(140, 140, 75, 23));
        CancelAddExpenseButton->setFont(font2);
        AddExpenseDescriptionInput = new QTextEdit(AddExpenseGroup);
        AddExpenseDescriptionInput->setObjectName(QStringLiteral("AddExpenseDescriptionInput"));
        AddExpenseDescriptionInput->setGeometry(QRect(40, 50, 171, 81));
        AddExpenseDescriptionInput->setStyleSheet(QStringLiteral(""));
        ShowExpenseGroup = new QGroupBox(centralWidget);
        ShowExpenseGroup->setObjectName(QStringLiteral("ShowExpenseGroup"));
        ShowExpenseGroup->setGeometry(QRect(200, 300, 531, 301));
        ShowExpenseGroup->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ShowExpenseOkButton = new QPushButton(ShowExpenseGroup);
        ShowExpenseOkButton->setObjectName(QStringLiteral("ShowExpenseOkButton"));
        ShowExpenseOkButton->setGeometry(QRect(230, 270, 75, 23));
        ShowExpenseOkButton->setFont(font2);
        ShowExpenseTable = new QTableView(ShowExpenseGroup);
        ShowExpenseTable->setObjectName(QStringLiteral("ShowExpenseTable"));
        ShowExpenseTable->setGeometry(QRect(10, 10, 511, 251));
        ShowExpenseTable->setStyleSheet(QStringLiteral("background-color: rgb(255, 247, 249);"));
        ShowExpenseTable->setFrameShape(QFrame::Box);
        ShowExpenseTable->setFrameShadow(QFrame::Plain);
        ShowExpenseTable->setLineWidth(1);
        ShowExpenseTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ShowExpenseTable->setShowGrid(true);
        ShowExpenseTable->setGridStyle(Qt::DashDotDotLine);
        ShowExpenseTable->setSortingEnabled(true);
        ShowExpenseTable->setCornerButtonEnabled(false);
        ShowSponsorsGroup = new QGroupBox(centralWidget);
        ShowSponsorsGroup->setObjectName(QStringLiteral("ShowSponsorsGroup"));
        ShowSponsorsGroup->setGeometry(QRect(340, 300, 261, 301));
        ShowSponsorsGroup->setStyleSheet(QStringLiteral(""));
        ShowSponsorsGroup->setFlat(false);
        ShowSponsorsGroup->setCheckable(false);
        ShowSponsorOkButton = new QPushButton(ShowSponsorsGroup);
        ShowSponsorOkButton->setObjectName(QStringLiteral("ShowSponsorOkButton"));
        ShowSponsorOkButton->setGeometry(QRect(100, 270, 75, 23));
        ShowSponsorOkButton->setFont(font2);
        ShowSponsorsTable = new QTableView(ShowSponsorsGroup);
        ShowSponsorsTable->setObjectName(QStringLiteral("ShowSponsorsTable"));
        ShowSponsorsTable->setGeometry(QRect(10, 10, 241, 251));
        ShowSponsorsTable->setStyleSheet(QStringLiteral("background-color: rgb(255, 247, 249);"));
        ShowSponsorsTable->setFrameShape(QFrame::WinPanel);
        ShowSponsorsTable->setFrameShadow(QFrame::Plain);
        ShowSponsorsTable->setLineWidth(1);
        ShowSponsorsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ShowSponsorsTable->setShowGrid(false);
        ShowSponsorsTable->setGridStyle(Qt::DashDotDotLine);
        ShowSponsorsTable->setSortingEnabled(true);
        ShowSponsorsTable->setWordWrap(false);
        ShowSponsorsTable->setCornerButtonEnabled(false);
        showIncomeButton = new QPushButton(centralWidget);
        showIncomeButton->setObjectName(QStringLiteral("showIncomeButton"));
        showIncomeButton->setGeometry(QRect(860, 220, 121, 31));
        showIncomeButton->setFont(font1);
        showIncomeButton->setCursor(QCursor(Qt::PointingHandCursor));
        showIncomeButton->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        showIncomeButton->setFlat(true);
        ShowIncomeGroup = new QGroupBox(centralWidget);
        ShowIncomeGroup->setObjectName(QStringLiteral("ShowIncomeGroup"));
        ShowIncomeGroup->setGeometry(QRect(360, 300, 211, 301));
        ShowIncomeGroup->setStyleSheet(QStringLiteral(""));
        ShowIncomeGroup->setFlat(false);
        ShowIncomeGroup->setCheckable(false);
        ShowIncomeOkButton = new QPushButton(ShowIncomeGroup);
        ShowIncomeOkButton->setObjectName(QStringLiteral("ShowIncomeOkButton"));
        ShowIncomeOkButton->setGeometry(QRect(70, 270, 75, 23));
        ShowIncomeOkButton->setFont(font2);
        ShowIncomeTable = new QTableView(ShowIncomeGroup);
        ShowIncomeTable->setObjectName(QStringLiteral("ShowIncomeTable"));
        ShowIncomeTable->setGeometry(QRect(10, 10, 191, 251));
        ShowIncomeTable->setStyleSheet(QStringLiteral("background-color: rgb(255, 247, 249);"));
        ShowIncomeTable->setFrameShape(QFrame::WinPanel);
        ShowIncomeTable->setFrameShadow(QFrame::Plain);
        ShowIncomeTable->setLineWidth(1);
        ShowIncomeTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ShowIncomeTable->setShowGrid(false);
        ShowIncomeTable->setGridStyle(Qt::DashDotDotLine);
        ShowIncomeTable->setSortingEnabled(true);
        ShowIncomeTable->setWordWrap(false);
        ShowIncomeTable->setCornerButtonEnabled(false);
        addexpensebutton_2 = new QPushButton(centralWidget);
        addexpensebutton_2->setObjectName(QStringLiteral("addexpensebutton_2"));
        addexpensebutton_2->setGeometry(QRect(390, 260, 121, 31));
        addexpensebutton_2->setFont(font1);
        addexpensebutton_2->setCursor(QCursor(Qt::PointingHandCursor));
        addexpensebutton_2->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        addexpensebutton_2->setFlat(true);
        addexpensebutton_3 = new QPushButton(centralWidget);
        addexpensebutton_3->setObjectName(QStringLiteral("addexpensebutton_3"));
        addexpensebutton_3->setGeometry(QRect(940, 20, 76, 34));
        addexpensebutton_3->setFont(font1);
        addexpensebutton_3->setCursor(QCursor(Qt::PointingHandCursor));
        addexpensebutton_3->setStyleSheet(QStringLiteral("background-image: url(:/finance/Untitled.png);"));
        addexpensebutton_3->setFlat(true);
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 0, 1024, 641));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Login1/Abstract-wallpaper-for-PC-87 (1).jpg);"));
        financeClass->setCentralWidget(centralWidget);
        graphicsView_3->raise();
        graphicsView_2->raise();
        graphicsView->raise();
        addsponsorbutton->raise();
        addincomebutton->raise();
        addexpensebutton->raise();
        showexpensesbutton->raise();
        showsponsorsbutton->raise();
        AddIncomeGroup->raise();
        AddSponsorGroup->raise();
        AddExpenseGroup->raise();
        ShowExpenseGroup->raise();
        ShowSponsorsGroup->raise();
        showIncomeButton->raise();
        ShowIncomeGroup->raise();
        addexpensebutton_2->raise();
        addexpensebutton_3->raise();
        statusBar = new QStatusBar(financeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        financeClass->setStatusBar(statusBar);

        retranslateUi(financeClass);
        QObject::connect(addsponsorbutton, SIGNAL(clicked()), financeClass, SLOT(showAddSponsorsGroup()));
        QObject::connect(addincomebutton, SIGNAL(clicked()), financeClass, SLOT(showAddIncomeGroup()));
        QObject::connect(addexpensebutton, SIGNAL(clicked()), financeClass, SLOT(showAddExpenseGroup()));
        QObject::connect(IncomeCanceButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(CancelAddSponsorButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(CancelAddExpenseButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(ConfirmAddExpenseButton, SIGNAL(clicked()), financeClass, SLOT(AddExpenseDetails()));
        QObject::connect(AddIncomeConfirmButton, SIGNAL(clicked()), financeClass, SLOT(AddIncomeDetails()));
        QObject::connect(ConfirmAddSponsorButton, SIGNAL(clicked()), financeClass, SLOT(AddNewSponsor()));
        QObject::connect(showexpensesbutton, SIGNAL(clicked()), financeClass, SLOT(showShowExpenseGroup()));
        QObject::connect(ShowExpenseOkButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(showsponsorsbutton, SIGNAL(clicked()), financeClass, SLOT(showShowSponsorsGroup()));
        QObject::connect(ShowSponsorOkButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(showIncomeButton, SIGNAL(clicked()), financeClass, SLOT(showShowIncomeGroup()));
        QObject::connect(ShowIncomeOkButton, SIGNAL(clicked()), financeClass, SLOT(CancelButtonFunction()));
        QObject::connect(addexpensebutton_2, SIGNAL(clicked()), financeClass, SLOT(goHome()));
        QObject::connect(addexpensebutton_3, SIGNAL(clicked()), financeClass, SLOT(logout()));

        QMetaObject::connectSlotsByName(financeClass);
    } // setupUi

    void retranslateUi(QMainWindow *financeClass)
    {
        financeClass->setWindowTitle(QApplication::translate("financeClass", "finance", 0));
#ifndef QT_NO_TOOLTIP
        graphicsView_2->setToolTip(QApplication::translate("financeClass", "<html><head/><body><p>asda</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        addsponsorbutton->setText(QApplication::translate("financeClass", "Add Sponsor", 0));
        addexpensebutton->setText(QApplication::translate("financeClass", "Add Expense", 0));
        addincomebutton->setText(QApplication::translate("financeClass", "Add Income", 0));
        showsponsorsbutton->setText(QApplication::translate("financeClass", "Show Sponsors", 0));
        showexpensesbutton->setText(QApplication::translate("financeClass", "Show Expenses", 0));
        AddIncomeConfirmButton->setText(QApplication::translate("financeClass", "Confirm", 0));
        IncomeCanceButton->setText(QApplication::translate("financeClass", "Cancel", 0));
        IncomeSponsorNameInput->setPlaceholderText(QApplication::translate("financeClass", "        Sponsor Name (Required)", 0));
        IncomeSponsorDescriptionInput->setPlaceholderText(QApplication::translate("financeClass", "              Description", 0));
        ConfirmAddSponsorButton->setText(QApplication::translate("financeClass", "Confirm", 0));
        CancelAddSponsorButton->setText(QApplication::translate("financeClass", "Cancel", 0));
        SponsorLocationInput->setHtml(QApplication::translate("financeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        SponsorLocationInput->setPlaceholderText(QApplication::translate("financeClass", "                   Location", 0));
        SponsorNameInput->setPlaceholderText(QApplication::translate("financeClass", "         Sponsor Name (Required)", 0));
        ConfirmAddExpenseButton->setText(QApplication::translate("financeClass", "Confirm", 0));
        CancelAddExpenseButton->setText(QApplication::translate("financeClass", "Cancel", 0));
        AddExpenseDescriptionInput->setHtml(QApplication::translate("financeClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        AddExpenseDescriptionInput->setPlaceholderText(QApplication::translate("financeClass", "            Description (Required)", 0));
        ShowExpenseGroup->setTitle(QString());
        ShowExpenseOkButton->setText(QApplication::translate("financeClass", "Ok", 0));
        ShowSponsorsGroup->setTitle(QString());
        ShowSponsorOkButton->setText(QApplication::translate("financeClass", "Ok", 0));
        showIncomeButton->setText(QApplication::translate("financeClass", "Show Income", 0));
        ShowIncomeGroup->setTitle(QString());
        ShowIncomeOkButton->setText(QApplication::translate("financeClass", "Ok", 0));
        addexpensebutton_2->setText(QApplication::translate("financeClass", "HOME", 0));
        addexpensebutton_3->setText(QApplication::translate("financeClass", "LOGOUT", 0));
    } // retranslateUi

};

namespace Ui {
    class financeClass: public Ui_financeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_H
