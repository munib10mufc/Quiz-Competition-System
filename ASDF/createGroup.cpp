#include "createGroup.h"
#include<qmessagebox.h>
#include<qstring.h>
#include"DbConnection.h"
#include"Operations.h"
#include<qmessagebox.h>
#include"Display.h"
createGroup::createGroup(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	bool c = true;
	DbConnection d;
	if (d.getRowCountOfGroups() == 0)
	{
		c = createGroups ();
	}
	if (c == true)
		displayToTable();
	else
	{
		QMessageBox m;
		m.setText("              Error occured during displaying groups and projects              ");
		m.exec();
	}
}

void createGroup::displayToTable()
{
	Display *s;
	DbConnection d;
	int count;
	s = d.dataReceived(count);
	QStandardItem* item1, *item2;
	QString text1, text2;
	m.clear();
	QStringList list1;
	list1 << "Group Name" << "Project";
	m.setHorizontalHeaderLabels(list1);
	m.setRowCount(count);
	for (int i = 0; i < count; i++)
	{
		text1 = QString(convert2QString(s[i].getGroupName().c_str()));
		text2 = QString(convert2QString(s[i].getProjectName().c_str()));
		item1 = new QStandardItem(text1);
		item2 = new QStandardItem(text2);
		m.setItem(i, 0, item1);
		m.setItem(i, 1, item2);
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

