#include "AddProject.h"
#include"HomeScreen.h"
#include"DbConnection.h"
#include<qmessagebox.h>
#include"login1.h"
using namespace std;
AddProject::AddProject(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}
AddProject::~AddProject()
{

}
void AddProject::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void AddProject::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}
void AddProject::addProject(){
	string a, b, c;
	a.assign(ui.lineEdit->text().toStdString());
	b.assign(ui.lineEdit_2->text().toStdString());
	c.assign(ui.dateTimeEdit->text().toStdString());
	if (db.addProject(a, b, c)){
		QMessageBox::information(0, QString("Success"), QString("Project added"), QMessageBox::Ok);
	}
	else{
		QMessageBox::information(0, QString("Failure"), QString("Project already found"), QMessageBox::Ok);
	}
}
char * AddProject::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}

QString AddProject::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
