#ifndef FINANCE_H
#define FINANCE_H
#include <string.h>
#include <QtWidgets/QMainWindow>
#include "ui_finance.h"
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtableview.h>
#include <QtGui>
#include <qlayout.h>
#include "DbConnection.h"
#include <qerrormessage.h>
#include "ExpenseDataFetch.h"
#include "SponsorDataFetch.h"

class finance : public QMainWindow
{
	Q_OBJECT

public:
	finance(QWidget *parent = 0);
	~finance();

	public slots:
	void goHome();
	void logout();
	void showAddSponsorsGroup();
	void AddNewSponsor();
	void CancelButtonFunction();
	void showAddIncomeGroup();
	void AddIncomeDetails();
	void showAddExpenseGroup();
	void AddExpenseDetails();
	void showShowExpenseGroup();
	void showShowSponsorsGroup();
	void showShowIncomeGroup();
private:
	ExpenseDataFetch * objexpense;
	QStandardItemModel model;
	QErrorMessage msg;
	DbConnection db;
	Ui::financeClass ui;
	QValidator *validator;
	QLineEdit * SponsorsPhoneNumberInput,* IncomeAmountInput, * ExpenseAmountInput;
	void hideAddSponsorGroup();
	void hideAddIncomeGroup();
	void setPhoneInput();
	void setIncomeAmountInput();
	void setExpenseAmountInput();
	void hideAddExpenseGroup();
	void HideAllShowMenu();
	void hideShowExpenseGroup();
	void hideShowSponsorsGroup();
	void hideShowIncomeGroup();
	QString convert2QString(char * arr);
};

#endif // FINANCE_H
