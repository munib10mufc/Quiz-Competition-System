#include "Profile.h"
#include"HomeScreen.h"
#include"DbConnection.h"
#include<qmessagebox.h>
#include"login1.h"
using namespace std;
Profile::Profile(QWidget *parent): QMainWindow(parent)
{
	ui.setupUi(this);
	ui.tableView->hide();
}
Profile::~Profile()
{

}
void Profile::logout(){
	Login1* l=new Login1;
	l->show();
	this->close();
}
void Profile::goHome(){
	HomeScreen *h=new HomeScreen;
	h->show();
	this->close();
}
void Profile::search(){
	string id = ui.lineEdit->text().toStdString();
	if (db.searchParticipant(parts, id)){
		QMessageBox::information(0, QString("Success"), QString("Participant found"), QMessageBox::Ok);
		ui.tableView->show();
		string s = std::to_string(parts[0].getPersonID());
		db.searchParticipant1(parts,id);
		model.clear();
		QStringList list1;
		list1 << "Id" << "Name" << "Adress" << "Age" << "CNIC" << "Inst Name" << "Email" << "phoneNo";
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(1);

		QStandardItem* item1, *item2, *item3, *item4, *item5, *item6, *item7, *item8;
		QString text1, text2, text3, text4, text5, text6, text7, text8;
		char* a = new char[15], *a1 = new char[5];
		int i;
			text1 = QString(convert2QString(itoa(parts[0].getID(), a1, 10)));
			text2 = parts[0].getName();
			text3 = parts[0].getAddress();
			text4 = QString(convert2QString(itoa(parts[0].getAge(), a1, 10)));
			text5 = QString(convert2QString(itoa(parts[0].getCNIC(), a1, 10)));
			text6 = parts[0].getIntName();
			text7 = parts[0].getEmail();
			text8 = QString(convert2QString(itoa(parts[0].getPhone(), a1, 10)));
			
			
			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);
			item3 = new QStandardItem(text3);
			item4 = new QStandardItem(text4);
			item5 = new QStandardItem(text5);
			item6 = new QStandardItem(text6);
			item7 = new QStandardItem(text7);
			item8 = new QStandardItem(text8);

			
			
			model.setItem(0, 0, item1);
			model.setItem(0, 1, item2);
			model.setItem(0, 2, item3);
			model.setItem(0, 3, item4);
			model.setItem(0, 4, item5);
			model.setItem(0, 5, item6);
			model.setItem(0, 6, item7);
			model.setItem(0, 7, item8);
	
			model.setParent(this);
			ui.tableView->setModel(&model);
	}
	else{
		QMessageBox::information(0, QString("Failure"), QString("Participant not found"), QMessageBox::Ok);
	}

}
char * Profile::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}

QString Profile::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
