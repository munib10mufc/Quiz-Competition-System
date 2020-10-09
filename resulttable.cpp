#include "resulttable.h"
#include"HomeScreen.h"
#include"login1.h"
#define NOMINMAX
ResultTable::ResultTable(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Result();
}

ResultTable::~ResultTable()
{

}

void ResultTable::logout(){
	Login1* l = new Login1;
	l->show();
	this->close();
}

void ResultTable::goHome(){
	HomeScreen *h = new HomeScreen;
	h->show();
	this->close();
}

QString ResultTable::convert2QString(char * arr)
{
	QString temp(arr);
	return temp;
}

void ResultTable::Result()
{
	ResultDataFetch* result;
	int x = db.selectResult(result);
	if (x == 1)
	{
		model.clear();
		QStringList list1;
		list1 << "GroupID" << "Points" ;
		model.setHorizontalHeaderLabels(list1);
		model.setRowCount(result->getTotal());

		QStandardItem* item1, *item2;
		QString text1, text2;
		char* a = new char[15];
		int i;
		for (i = 0; i < result->getTotal(); i++)
		{
			text1 = QString(QString::fromStdString(result[i].getID()));
			text2 = QString(QString::fromStdString(result[i].getPoints()));

			item1 = new QStandardItem(text1);
			item2 = new QStandardItem(text2);

			model.setItem(i, 0, item1);
			model.setItem(i, 1, item2);

		}
		ui.resultTable->setAlternatingRowColors(true);
		ui.resultTable->setStyleSheet("alternate-background-color:  rgb(114, 154, 202)");
		ui.resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		model.setParent(this);
		ui.resultTable->setModel(&model);
	}
	else
	{
		msg.showMessage("No Record found in database");
	}
}