#ifndef MUNIB_H
#define MUNIB_H
using namespace std;
#include <iomanip>
#include <qerrormessage.h>
#include <QtWidgets/QMainWindow>
#include "ui_timer.h"
#include "ui_HomeScreen.h"
#include "LCDNumber.h"
class LCDNumber;
class timer : public QMainWindow
{
	Q_OBJECT
	LCDNumber * time;
	QWidget * abc;
	QErrorMessage * error;
public:
	timer(QWidget *parent = 0);
	~timer();
	public slots:
	void starter();
	void addTime();
	void deductTime();
	void makegui();
	
private:
	double ConvertToSeconds(int,int,int);
	void ConvertToHours(double, int &, int &, int &);
	Ui::timer ui;
};

#endif // MUNIB_H
