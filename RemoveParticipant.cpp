#include "RemoveParticipant.h"
#include"HomeScreen.h"
#include"DbConnection.h"
#include<qmessagebox.h>
#include"login1.h"
using namespace std;
RemoveParticipant::RemoveParticipant(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}
RemoveParticipant::~RemoveParticipant()
{

}
void RemoveParticipant::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void RemoveParticipant::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}
void RemoveParticipant :: search(){
	if (db.searchParticipant(parts, ui.lineEdit->text().toStdString())){
		QMessageBox::information(0, QString("success"), QString("participant deleted"), QMessageBox::Ok);

		db.deleteParticipant(ui.lineEdit->text().toStdString());

	}
	else{
		QMessageBox::information(0, QString("failure"), QString("participant not found"), QMessageBox::Ok);
	}
}
char * RemoveParticipant::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}

QString RemoveParticipant::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
