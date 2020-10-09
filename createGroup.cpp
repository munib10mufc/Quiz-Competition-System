#include "createGroup.h"
#include<qmessagebox.h>
#include<qstring.h>
#include"DbConnection.h"
#include<qmessagebox.h>

createGroup::createGroup(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	bool c = true;
	DbConnection d;
	if (d.getRowCountOfGroups() == 0)
	{
		d.createGroups ();
	}
	if (c == true)
		displayToTable1();
	else
	{
		QMessageBox m;
		m.setText("              Error occured during displaying groups and projects              ");
		m.exec();
	}
}

void createGroup::displayToTable1()
{
	char** arr1=new char*[30];
	int  arr2[30], arr3[30];
	DbConnection d;
	int count;
	d.dataReceived1(arr1, arr2, arr3,count);
	QStandardItem* item1, *item2, *item3;
	QString text1, text2, text3;
	m.clear();
	QStringList list1;
	list1 << "Group Name" << "Participant1 ID" << "Participant2 ID";
	m.setHorizontalHeaderLabels(list1);
	m.setRowCount(count);
	for (int i = 0; i < count; i++)
	{
		text1 = QString(QString::fromStdString(string(arr1[i])));
		text2 = QString(QString::fromStdString(std::to_string(arr2[i])));
		text3 = QString(QString::fromStdString(std::to_string(arr3[i])));
		item1 = new QStandardItem(text1);
		item2 = new QStandardItem(text2);
		item3 = new QStandardItem(text3);

		m.setItem(i, 0, item1);
		m.setItem(i, 1, item2);
		m.setItem(i, 2, item3);
	}
	ui.table->verticalHeader()->setVisible(false);
	ui.table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	m.setParent(this);
	ui.table->setModel(&m);
}


createGroup::~createGroup()
{

}

void createGroup::buttonPressToHome()
{
	const QString m("    Home will be shown     ");
	QMessageBox msg;
	msg.setText(m);
	msg.exec();
}



void createGroup::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}
void createGroup::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}