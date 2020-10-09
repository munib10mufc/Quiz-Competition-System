#include "showschedule.h"

showschedule::showschedule(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//displayschedule();
}

void showschedule::displayschedule()
{
	mydal obj;
	string** s = obj.getschedule();

	int n = obj.sizeofarray(s[0]);

	QStandardItemModel* model = new QStandardItemModel(n, 5);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			QStandardItem* item = new QStandardItem(s[j][i].c_str());
			model->setItem(i, j, item);
		}
	}
	QStandardItem* item1 = new QStandardItem("Group NO#");
	QStandardItem* item2 = new QStandardItem("Group Name");
	QStandardItem* item3 = new QStandardItem("Venue");
	QStandardItem* item4 = new QStandardItem("Date");
	QStandardItem* item5 = new QStandardItem("Time");
	model->setHorizontalHeaderItem(0, item1);
	model->setHorizontalHeaderItem(1, item2);
	model->setHorizontalHeaderItem(2, item3);
	model->setHorizontalHeaderItem(3, item4);
	model->setHorizontalHeaderItem(4, item5);
	ui.scheduletable->setModel(model);
	delete[] s;
}
showschedule::~showschedule()
{

}