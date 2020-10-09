#include "AddParticipant.h"
#include"HomeScreen.h"
#include"DbConnection.h"
#include<qmessagebox.h>
#include"login1.h"
using namespace std;
AddParticipant::AddParticipant(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	show12();
}
AddParticipant::~AddParticipant()
{

}
void AddParticipant::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void AddParticipant::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}
void AddParticipant::addParticipant(){
	string a, b, c, d, e;
	p = new Participant[1];
	p->setName(ui.lineEdit->text());
	p->setAge(ui.lineEdit_2->text().toInt());
	p->setAddress(ui.lineEdit_3->text());
	p->setPhone(ui.lineEdit_4->text().toInt());
	p->setIntName(ui.lineEdit_5->text());
	p->setCNIC(ui.lineEdit_6->text().toInt());
	acc = new Accomodation[1];
	acc[0].setRoomNo(ui.lineEdit_8->text().toInt());
	acc[0].setrPhoneNo(ui.lineEdit_9->text().toInt());
	acc[0].setend_date(ui.lineEdit_11->text().toStdString());
	acc[0].setstrt_date(ui.lineEdit_10->text().toStdString());
	if (db.addParticipant(p)){
		if (ui.checkBox->isChecked() == true)
			db.addParticipantAcc(acc,p[0].getID());
		QString msg = "Participant added with Participant ID= " + QString::fromStdString(std::to_string(p[0].getID()));
		QMessageBox::information(0, QString("Success"), QString(msg), QMessageBox::Ok);
	}

	else{
		QMessageBox::information(0, QString("Failure"), QString("Participant already found"), QMessageBox::Ok);
	}
}
void AddParticipant::show12(){
	if (ui.checkBox->isChecked()== true){
		ui.lineEdit_8->show();
		ui.lineEdit_9->show();
		ui.lineEdit_10->show();
		ui.lineEdit_11->show();
		ui.label_7->show();
		ui.label_9->show();
		ui.label_10->show();
		ui.label_12->show();

	}
	else{
		ui.lineEdit_8->hide();
		ui.lineEdit_9->hide();
		ui.lineEdit_10->hide();
		ui.lineEdit_11->hide();
		ui.label_7->hide();
		ui.label_9->hide();
		ui.label_10->hide();
		ui.label_12->hide();

	}
}
char * AddParticipant::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}

QString AddParticipant::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
