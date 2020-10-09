#include "login1.h"
#include<qmessagebox.h>
#include"HomeScreen.h"
Login1::Login1(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
}

Login1::~Login1()
{

}
void Login1::home(){

	if (db.checkLogin(ui.userText_2->text().toStdString(), ui.passText_2->text().toStdString())){
		QMessageBox::information(0, QString("Success"), QString("Login successful"), QMessageBox::Ok);
		HomeScreen* h = new HomeScreen;
		this->close();
		h->show();
		
	}
	else{
		QMessageBox::information(0, QString("Failure"), QString("Login unsuccessful"), QMessageBox::Ok);
	}


}
char * Login1::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}