#include "adddestination.h"

adddestination::adddestination(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


	QStandardItemModel* model = createmodel();
	QStringList list("Places");
	model->setHorizontalHeaderLabels(list);	
	ui.placeview->setModel(model);
}


void adddestination::ok_buttonclick()
{
	this->close();

}


QStandardItemModel* adddestination::createmodel()
{
	mydal obj;
	string* s = new string[100];
	s = obj.getplacenames();

	int n = obj.sizeofarray(s);
	QStandardItemModel* model = new QStandardItemModel(n, 1);
	for (int row = 0; row < n; row++)
	{
		QStandardItem* item = new QStandardItem(s[row].c_str());
		model->setItem(row, 0, item);
	}

	return model;
}

void adddestination::add_buttonclick()
{
	QString abc = ui.venueedit->text();
	string temp = abc.toStdString();

	abc = ui.lineEdit_2->text();
	string temp2 = abc.toStdString();

	if (temp == "" || temp2 == "")
	{

		QMessageBox::information(this, tr("Alert"), tr("Name or Capacity cannot be empty"));
	}
	else
	{
		mydal obj;
		bool check = obj.searchforplace(temp);
		if (check == false)
		{
			obj.addplace(temp, temp2);
			QMessageBox::information(this, tr("Alert"), tr("Venue successfully added"));


			ui.venueedit->setText("");
			ui.lineEdit_2->setText("");


			QStandardItemModel* model = createmodel();

			QStringList list("Places");
			model->setHorizontalHeaderLabels(list);

			ui.placeview->setModel(model);
		}
		else
		{
			QMessageBox::information(this, tr("Alert"), tr("Venue already exists"));
		}
	}
}

adddestination::~adddestination()
{

}
