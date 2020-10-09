#ifndef SHOWSCHEDULE_H
#define SHOWSCHEDULE_H

#include <QWidget>
#include "mydal.h"
#include <QtGui>
#include "ui_showschedule.h"

class showschedule : public QWidget
{
	Q_OBJECT

public:
	showschedule(QWidget *parent = 0);
	void displayschedule();
	~showschedule();

private:
	Ui::showschedule ui;
};

#endif // SHOWSCHEDULE_H
