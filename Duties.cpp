#include "Duties.h"
#include"HomeScreen.h"
#include"DbConnection.h"
#include<qmessagebox.h>
#include"login1.h"
using namespace std;
Duties::Duties(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}
Duties::~Duties()
{

}
void Duties::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void Duties::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}
void Duties::search(){
	if (db.searchDuties(somem)){
		
		model.clear();
		QStringList list1;
		list1 << "Name" << "Rank" << "Duties";
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(somem[0].getTotal());

		QStandardItem* item1, *item2, *item3;
		QString text1, text2, text3;
		char* a = new char[15], *a1 = new char[5];
		int i;

		for (int i = 0; i < somem[0].getTotal(); i++)
		{
			text1 = somem[i].getName();
			text2 = somem[i].getRank();
			text3 = somem[i].getDuty();

			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);
			item3 = new QStandardItem(text3);
			
			
			model.setItem(i, 0, item1);
			model.setItem(i, 1, item2);
			model.setItem(i, 2, item3);
		}
		
		model.setParent(this);
		ui.tableView->setModel(&model);
	}
	else{
		QMessageBox::information(0, QString("Failure"), QString("Participant not found"), QMessageBox::Ok);
	}

}
char * Duties::convert2char(QString input)
{
	char * a = new char[input.length() + 1];
	strcpy(a, input.toLatin1().constData());
	return a;
}

QString Duties::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}
