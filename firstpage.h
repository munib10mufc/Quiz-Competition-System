#ifndef FIRSTPAGE_H
#define FIRSTPAGE_H

#include <QtWidgets/QMainWindow>
#include "ui_firstpage.h"
#include "adddestination.h"
#include "adddestination.h"
#include  "showschedule.h"
#include <qmessagebox.h>
#include <time.h>
#include "mydal.h"

class firstpage : public QMainWindow
{
	Q_OBJECT

public:
	firstpage(QWidget *parent = 0);
	~firstpage();

	public slots:
		void buttonclick();
		void ok_click();
		void create_click();
		void cancel_click();
		string daysofcompetition();


private:
	Ui::firstpageClass ui;
};

#endif // FIRSTPAGE_H
