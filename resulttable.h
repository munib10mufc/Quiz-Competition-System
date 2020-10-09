#ifndef RESULTTABLE_H
#define RESULTTABLE_H
#if defined(_MSC_VER)
#define NOMINMAX
#endif
#include <limits>
#include"DbConnection.h"
#include"ResultDataFetch.h"
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtableview.h>
#include <QtGui>
#include <qlayout.h>
#include <qerrormessage.h>
#include <QWidget>
#include "ui_resulttable.h"




class ResultTable : public QWidget
{
	Q_OBJECT

public:
	ResultTable(QWidget *parent = 0);
	~ResultTable();
	void Result();
	QString convert2QString(char * arr);
	public slots:
	void goHome();
	void logout();


private:
	Ui::ResultTable ui;
	DbConnection db;
	QStandardItemModel model;
	QErrorMessage msg;
};

#endif // RESULTTABLE_H
