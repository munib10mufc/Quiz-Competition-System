#include "addresult.h"
#include<qmessagebox.h>
#include"HomeScreen.h"
#include"login1.h"

AddResult::AddResult(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QPixmap bkgnd("/users/haider iqbal/Desktop/bkgrnd.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
}

AddResult::~AddResult()
{

}

void AddResult::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void AddResult::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}
void AddResult::submitClicked()
{
	if (db.checkteam(ui.IDField->text().toInt())==0){
		if (db.insertPoints(ui.IDField->text().toInt(), ui.pointsField->text().toInt()))
			QMessageBox::information(0, QString("Success"), QString("Result entered"), QMessageBox::Ok);
		else
			QMessageBox::information(0, QString("Failure"), QString("Can not insert the data"), QMessageBox::Ok);
	}

	else{
		QMessageBox::information(0, QString("Failure"), QString("Team not found"), QMessageBox::Ok);
	}
}