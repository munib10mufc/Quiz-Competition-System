#ifndef LCDNUMBER_H
#define LCDNUMBER_H
#include <QLCDNumber>
#include <QTimer>
#include <qerrormessage.h>
#include <QTime>
#include <QtWidgets>
#include <qmainwindow.h>
#include "ui_HomeScreen.h"

class HomeScreen;
using namespace std;

class LCDNumber : public QLCDNumber
{
	Q_OBJECT

public:
	QTimer* timer;
	QTime*  timeValue;
	bool temp = true;
	QPushButton * tempbut;
public:

	LCDNumber(QWidget * parentWidget, int hours, int minutes, int seconds,QPushButton * p)
	{
		timer = new QTimer();
		timeValue = new QTime(hours, minutes, seconds);
		this->setParent(parentWidget);
		this->display(timeValue->toString());
		QObject::connect(timer, SIGNAL(timeout()), this, SLOT(setDisplay()));
		p->hide();
		tempbut = p;
	}

	public slots:
	void setDisplay()
	{
		if ((temp == true) && !((this->timeValue->hour() == 0) && (this->timeValue->minute() == 0) && (this->timeValue->second() == 0)))
		{
			this->timeValue->setHMS(this->timeValue->addSecs(-1).hour(), this->timeValue->addSecs(-1).minute(), this->timeValue->addSecs(-1).second());
			this->display(this->timeValue->toString());
			temp = true;
		}
		else if (temp == true)
		{
			this->close();
			QErrorMessage * err = new QErrorMessage;
			err->showMessage("Time's up!!!");
			temp = false;
			tempbut->show();
		}
	}
public:
	int GetHour()
	{
		return this->timeValue->hour();
	}
	int GetMins()
	{
		return this->timeValue->minute();
	}
	int GetSecs()
	{
		return this->timeValue->second();
	}
};


#endif