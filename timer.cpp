#include "timer.h"
#include "LCDNumber.h"
#include "HomeScreen.h"
using namespace std;
timer::timer(QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);
	time = nullptr;
	abc = parent;
	ui.StartHour->hide();
	ui.StartMins->hide();
	ui.StartSecs->hide();
	ui.Proceedtohomebutton->hide();
}


timer::~timer()
{

}

void timer::deductTime()
{
	if (time)
	{
		int h = 0, m = 0, s = 0, tH = 0, tM = 0, tS = 0;
		h = time->GetHour();
		m = time->GetMins();
		s = time->GetSecs();
		tH = ui.DeductHours->value();
		tM = ui.DeductMins->value();
		tS = ui.DeductSecs->value();
		double actualtime = ConvertToSeconds(h, m, s);
		double inputtime = ConvertToSeconds(tH, tM, tS);
		if (actualtime > inputtime)
		{
			delete[] time;
			actualtime = actualtime - inputtime;
			ConvertToHours(actualtime, h, m, s);
			time = new LCDNumber(this, h, m, s, ui.Proceedtohomebutton);
			time->timer->start(1000);
			time->show();
			time->setGeometry(560, 150, 281, 71);
			time->move(558, 162);
			time->setDigitCount(10);
		}
		
		else
		{
			error = new QErrorMessage(this);
			error->showMessage("Cannot Deduct more time than remaining time");
		}
	}
}


void timer::addTime()
{
	if (time)
	{
		int h = 0, m = 0, s = 0;
		float p = 24;
		h = time->GetHour();
		m = time->GetMins();
		s = time->GetSecs();

		if (p >= ((ui.AddHours->value() + h) + ((ui.AddMins->value() + m) / 60.00) + ((ui.AddSecs->value() + s) / 3600.00)))
		{
			delete[] time;
			time = new LCDNumber(this, ui.AddHours->value() + h, ui.AddMins->value() + m, ui.AddSecs->value() + s, ui.Proceedtohomebutton);
			time->timer->start(1000);
			time->show();
			time->setGeometry(560, 150, 281, 71);
			time->move(558, 162);
			time->setDigitCount(10);
		}
		else
		{
			error = new QErrorMessage(this);
			error->showMessage("Cannot Add more time than 24 hours");
		}
	}
}

void timer::makegui()
{
	this->close();
	HomeScreen * p = new HomeScreen;
	p->showLabelAndResultButton();
	p->show();
}

void timer::starter()
{

	/*int h = 0, m = 0, s = 0;
	h = ui.StartHour->value();
	m = ui.StartMins->value();
	s = ui.StartSecs->value();*/
	float a;

	//float p = 24, x = (h + (m / 60.00) + (s / 3600.00));
	//if (p > x)
	//{
	time = new LCDNumber(this, 3, 00, 00, ui.Proceedtohomebutton);
		time->timer->start(1000);
		time->show();
		time->setGeometry(560, 150, 281, 71);
		time->move(558, 162);
		time->setDigitCount(10);
	//}
//	else
	//{
		//error = new QErrorMessage(this);
		//error->showMessage("Cannot start time from than 24 hours");
	//}
}

double timer::ConvertToSeconds(int h, int m, int s)
{
	return h*(3600) + m*(60) + s;
}
void timer::ConvertToHours(double total, int & h, int & m, int & s)
{
	h = (total / 3600);
	total = total - (h * 3600);
	m = total / 60;
	total = total - (m * 60);
	s = total;
}