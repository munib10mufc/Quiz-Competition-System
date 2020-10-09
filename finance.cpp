#include "finance.h"
#include"HomeScreen.h"
#include"login1.h"
finance::finance(QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);
	validator = new QIntValidator(1, 99999999999999999, this);
	SponsorsPhoneNumberInput = new QLineEdit(this);
	IncomeAmountInput = new QLineEdit(this);
	ExpenseAmountInput = new QLineEdit(this);
	HideAllShowMenu();
}

finance::~finance()
{

}

void finance::hideAddSponsorGroup()
{
	ui.AddSponsorGroup->hide();
	ui.SponsorNameInput->hide();
	ui.SponsorNameInput->clear();
	ui.SponsorLocationInput->clear();
	ui.SponsorLocationInput->hide();
	SponsorsPhoneNumberInput->clear();
	SponsorsPhoneNumberInput->hide();
	ui.ConfirmAddSponsorButton->hide();
	ui.CancelAddSponsorButton->hide();
}
void finance::showAddSponsorsGroup()
{
	HideAllShowMenu();
	ui.AddSponsorGroup->show();
	ui.SponsorNameInput->show();
	setPhoneInput();
	ui.ConfirmAddSponsorButton->show();
	ui.CancelAddSponsorButton->show();
	SponsorsPhoneNumberInput->show();
	ui.SponsorLocationInput->show();
}
void finance::hideAddIncomeGroup()
{

	setIncomeAmountInput();
	ui.AddIncomeGroup->hide();
	ui.IncomeSponsorNameInput->hide();
	ui.IncomeSponsorDescriptionInput->hide();
	this->IncomeAmountInput->hide();

	ui.IncomeSponsorNameInput->clear();
	ui.IncomeSponsorDescriptionInput->clear();
	this->IncomeAmountInput->clear();

	ui.AddIncomeConfirmButton->hide();
	ui.IncomeCanceButton->hide();
}
void finance::hideAddExpenseGroup()
{
	setExpenseAmountInput();
	ui.AddExpenseGroup->hide();
	ui.AddExpenseDescriptionInput->hide();
	ui.AddExpenseDescriptionInput->clear();
	ui.ConfirmAddExpenseButton->hide();
	ui.CancelAddExpenseButton->hide();
	ExpenseAmountInput->hide();
	ExpenseAmountInput->clear();
}
void finance::showAddExpenseGroup()
{
	HideAllShowMenu();
	ui.AddExpenseGroup->show();
	ui.AddExpenseDescriptionInput->show();
	ui.ConfirmAddExpenseButton->show();
	ui.CancelAddExpenseButton->show();
	ExpenseAmountInput->show();
}
void finance::showAddIncomeGroup()
{
	IncomeAmountInput->show();
	HideAllShowMenu();
	ui.AddIncomeGroup->show();
	ui.IncomeSponsorNameInput->show();
	ui.IncomeSponsorDescriptionInput->show();
	ui.AddIncomeConfirmButton->show();
	ui.IncomeCanceButton->show();
	IncomeAmountInput->show();
}
void finance::setPhoneInput()
{
	SponsorsPhoneNumberInput->setPlaceholderText("            Phone Number");
	SponsorsPhoneNumberInput->setGeometry(390, 410, 171, 31);
	SponsorsPhoneNumberInput->setValidator(validator);
}
void finance::setIncomeAmountInput()
{
	IncomeAmountInput->setPlaceholderText("        Income Amount (Required)");
	IncomeAmountInput->setGeometry(390, 378, 171, 31);
	IncomeAmountInput->setValidator(validator);
}
void finance::setExpenseAmountInput()
{
	ExpenseAmountInput->setPlaceholderText("      Expense Amount (Required)");
	ExpenseAmountInput->setGeometry(390, 325, 171, 31);
	ExpenseAmountInput->setValidator(validator);
}
void finance::HideAllShowMenu()
{
	hideShowSponsorsGroup();
	hideAddSponsorGroup();
	hideAddIncomeGroup();
	hideAddExpenseGroup();
	hideShowExpenseGroup();
	hideShowIncomeGroup();
	ui.addsponsorbutton->show();
	ui.addincomebutton->show();
	ui.addexpensebutton->show();
	ui.showsponsorsbutton->show();
	ui.showexpensesbutton->show();
}
void finance::CancelButtonFunction()
{
	HideAllShowMenu();
}
void finance::AddExpenseDetails()
{
	ExpenseDataFetch obj2;
	obj2.setamount(ExpenseAmountInput->text().toInt());
	obj2.setdescription(ui.AddExpenseDescriptionInput->toPlainText().toStdString());
	if (db.insertexpense(obj2))
	{
		msg.showMessage("Successfully added Expense details");
	}
	else
	{
		msg.showMessage("Couldn't add Expense details in Database (Connectivity issue or missing Required field!)");
	}
	HideAllShowMenu();
}
void finance::AddNewSponsor()
{
	string sname = ui.SponsorNameInput->toPlainText().toStdString();
	string slocation = ui.SponsorLocationInput->toPlainText().toStdString();
	string sphone = SponsorsPhoneNumberInput->text().toStdString();
	SponsorDataFetch obj;
	obj.setname(sname.c_str());
	obj.setaddress(slocation.c_str());
	obj.setphone(sphone.c_str());

	if (db.insertsponsor(obj))
	{
		msg.showMessage("Successfully added sponsor in Database");
	}
	else
	{
		msg.showMessage("Couldn't add sponsor in Database (Connectivity issue or missing Required field!)");
	}
	HideAllShowMenu();
}
void finance::AddIncomeDetails()
{
	ExpenseDataFetch obj;
	obj.setdate(ui.IncomeSponsorNameInput->toPlainText().toStdString()); //sets sponsor name in date attribute// CHAIPI
	obj.setdescription(ui.IncomeSponsorDescriptionInput->toPlainText().toStdString());
	obj.setamount(this->IncomeAmountInput->text().toInt());

	if (db.insertincome(obj))
	{
		msg.showMessage("Successfully added Income Details");
	}
	else
	{
		msg.showMessage("Couldn't add income details, Sponsor name might be missing in list");
	}
	HideAllShowMenu();
}
void finance::hideShowExpenseGroup()
{
	ui.ShowExpenseGroup->hide();
	ui.ShowExpenseTable->hide();
	ui.ShowExpenseOkButton->hide();
}
void finance::showShowExpenseGroup()
{
	HideAllShowMenu();
	string total, totalincome, net;
	ui.ShowExpenseGroup->show();
	ui.ShowExpenseTable->show();
	ui.ShowExpenseOkButton->show();
	int x = db.selectexpenses(objexpense, total, totalincome), netbalance = 0;
	if (x == 1)
	{
		model.clear();
		netbalance = atoi(totalincome.c_str()) - atoi(total.c_str());
		net = to_string(netbalance);
		QStringList list1;
		list1 << "Id" << "Amount" << "Description" << "Transaction Date";
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(objexpense->gettotal() + 3);

		QStandardItem* item1, *item2, *item3, *item4;
		QString text1, text2, text3, text4;
		char* a = new char[15], *a1 = new char[5];
		int i;
		for (i = 0; i < objexpense->gettotal(); i++)
		{
			text1 = QString(QString::fromStdString(itoa(objexpense[i].getid(), a1, 10)));
			text2 = QString(QString::fromStdString(itoa(objexpense[i].getamount(), a, 10)));
			text3 = QString(QString::fromStdString(objexpense[i].getdescription()));
			text4 = QString(QString::fromStdString(objexpense[i].getdate()));

			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);
			item3 = new QStandardItem(text3);
			item4 = new QStandardItem(text4);
			model.setItem(i, 0, item1);
			model.setItem(i, 1, item2);
			model.setItem(i, 2, item3);
			model.setItem(i, 3, item4);

		}
		text1 = QString("Total Expenses");
		item1 = new QStandardItem(text1);
		model.setItem(i, 0, item1);

		text2 = QString( QString::fromStdString( total));
		item2 = new QStandardItem(text2);
		model.setItem(i, 1, item2);

		text1 = QString("Total Income");
		item1 = new QStandardItem(text1);
		model.setItem(i + 1, 0, item1);

		text2 = QString(QString::fromStdString(totalincome));
		item2 = new QStandardItem(text2);
		model.setItem(i + 1, 1, item2);

		text1 = QString("Net Total");
		item1 = new QStandardItem(text1);
		model.setItem(i + 2, 0, item1);

		text2 = QString(QString::fromStdString(net));
		item2 = new QStandardItem(text2);
		model.setItem(i + 2, 1, item2);

		ui.ShowExpenseTable->verticalHeader()->setVisible(false);
		ui.ShowExpenseTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		model.setParent(this);
		ui.ShowExpenseTable->setModel(&model);
	}
	else
	{
		msg.showMessage("No Record found in database");
	}
}
QString finance::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
void finance::hideShowSponsorsGroup()
{
	ui.ShowSponsorsGroup->hide();
	ui.ShowSponsorsTable->hide();
	ui.ShowSponsorOkButton->hide();
}
void finance::showShowSponsorsGroup()
{
	HideAllShowMenu();
	SponsorDataFetch * obj;
	ui.ShowSponsorsGroup->show();
	ui.ShowSponsorsTable->show();
	ui.ShowSponsorOkButton->show();
	int x = db.selectsponsors(obj);
	if (x == 1)
	{
		model.clear();
		QStringList list1;
		list1 << "Name" << "Address" << "Phone Number";
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(obj->gettotalsponsors());

		QStandardItem* item1, *item2, *item3;
		QString text1, text2, text3;
		char* a = new char[15];
		int i;
		for (i = 0; i < obj->gettotalsponsors(); i++)
		{
			text1 = QString(QString::fromStdString(obj[i].getname()));
			text2 = QString(QString::fromStdString(obj[i].getaddress()));
			text3 = QString(QString::fromStdString(obj[i].getphone()));

			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);
			item3 = new QStandardItem(text3);

			model.setItem(i, 0, item1);
			model.setItem(i, 1, item2);
			model.setItem(i, 2, item3);

		}
		ui.ShowSponsorsTable->setAlternatingRowColors(true);
		ui.ShowSponsorsTable->setStyleSheet("alternate-background-color:  rgb(114, 154, 202)");
		ui.ShowSponsorsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		model.setParent(this);
		ui.ShowSponsorsTable->setModel(&model);
	}
	else
	{
		msg.showMessage("No Record found in database");
	}
}
void finance::hideShowIncomeGroup()
{
	ui.ShowIncomeGroup->hide();
	ui.ShowIncomeTable->hide();
	ui.ShowIncomeOkButton->hide();
}
void finance::showShowIncomeGroup()
{
	HideAllShowMenu();
	ui.ShowIncomeGroup->show();
	ui.ShowIncomeTable->show();
	ui.ShowIncomeOkButton->show();

	SponsorDataFetch * obj;
	string total;
	//char *total;
	int x = db.selectincome(obj,total);
	if (x == 1)
	{
		model.clear();
		QStringList list1;
		list1 << "Sponsor Name" << "Amount Paid";
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(obj->gettotalsponsors()+2);

		QStandardItem* item1, *item2;
		QString text1, text2;
		int i;
		for (i = 0; i < obj->gettotalsponsors(); i++)
		{
			text1 = QString(QString::fromStdString(obj[i].getname()));
			text2 = QString(QString::fromStdString(obj[i].getamount()));
			
			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);
			
			model.setItem(i, 0, item1);
			model.setItem(i, 1, item2);
			
		}

		text1 = QString("");
		item1 = new QStandardItem(text1);
		model.setItem(i, 0, item1);

		text2 = QString(" ");
		item2 = new QStandardItem(text2);
		model.setItem(i, 1, item2);

		text1 = QString("Total Income");
		item1 = new QStandardItem(text1);
		model.setItem(i+1, 0, item1);

		text2 = QString(QString::fromStdString(total));
		item2 = new QStandardItem(text2);
		model.setItem(i+1, 1, item2);
		

		ui.ShowIncomeTable->setAlternatingRowColors(true);
		ui.ShowIncomeTable->verticalHeader()->setVisible(false);

		ui.ShowIncomeTable->setStyleSheet("alternate-background-color:  rgb(114, 154, 202)");
		ui.ShowIncomeTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		model.setParent(this);
		ui.ShowIncomeTable->setModel(&model);
	}
	else
	{
		msg.showMessage("No Record found in database");
	}
}
void finance::goHome(){
	HomeScreen* h = new HomeScreen;
	h->show();
	this->close();
}
void finance::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}