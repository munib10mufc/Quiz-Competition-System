#ifndef ADDDESTINATION_H
#define ADDDESTINATION_H

#include <QWidget>
#include "ui_adddestination.h"
#include <QtWidgets/QApplication>
#include <qmessagebox.h>
#include <QtGui>

#include <iostream>
#include <string>
#include "mydal.h"
using namespace std;
class adddestination : public QWidget
{
	Q_OBJECT

public:
	adddestination(QWidget *parent = 0);
	~adddestination();

	public slots:
		void ok_buttonclick();
		void add_buttonclick();
		QStandardItemModel* createmodel();

		void cancel_buttonclick()
		{
			this->close();
		}

private:
	Ui::adddestination ui;
};

#endif // ADDDESTINATION_H
