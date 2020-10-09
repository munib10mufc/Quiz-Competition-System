#include "firstpage.h"

firstpage::firstpage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

firstpage::~firstpage()
{

}

void firstpage::buttonclick()
{
	adddestination* obj= new adddestination;
	obj->show();
}

void firstpage::ok_click()
{	
	showschedule *ptr = new showschedule;
	this->close();
	ptr->show();
}


void firstpage::create_click()
{
	if (ui.lineEdit->text() == "")
	{
		QMessageBox::information(this, tr("Alert"), tr("Number of Days cannot be empty"));
	}
	else
	{
		mydal obj;
		obj.addschedule(stoi(daysofcompetition()));
		QMessageBox::information(this, tr("Alert"), tr("Schedule successfully created"));
		ui.lineEdit->setText("");
		this->close();
	}
}




string firstpage::daysofcompetition()
{
	QString temp = ui.lineEdit->text();
	string abc = temp.toStdString();

	return abc;
}


void firstpage::cancel_click()
{
	this->close();
}