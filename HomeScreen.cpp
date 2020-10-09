#include "HomeScreen.h"
#include"login1.h"
#include"Profile.h"
#define NOMINMAX
#include <windows.h>
#include"AddProject.h"
#include"RemoveParticipant.h"
#include"Duties.h"
//#include"createGroup.h"
#include"AddParticipant.h"
#include"assignproject.h"
#include"finance.h"
#include"HomeScreen.h"
#include"addresult.h"
#include"resulttable.h"
#include"firstpage.h"
#include"createGroup.h"
#include"DbConnection.h"
#include"mydal.h"
#undef max
using namespace std;
HomeScreen::HomeScreen(QWidget *parent): QMainWindow(parent){
	ui.setupUi(this);
	x.hide();
	x.setParent(this);
	x.setText("<body bgcolor=#fffffff>Time has ended,add results from add result button</body>");
	x.setGeometry(40, 500, 300, 15);
	x.styleSheet();
	ui.pushButton_12->hide();
	DbConnection db;
	mydal d;
	if (db.getRowCountOfGroupProject() != 0){
		ui.pushButton_6->setEnabled(false);
		ui.pushButton_4->setEnabled(false);
		ui.pushButton_8->setEnabled(false);
		ui.pushButton_5->setEnabled(false);
	}
	if (db.getRowCountOfGroupProject()!=0){
		ui.pushButton_6->setEnabled(false);
		ui.pushButton_4->setEnabled(false);
		ui.pushButton_8->setEnabled(false);
		ui.pushButton_5->setEnabled(false);
	}
}
void HomeScreen::goCreateGroup(){
	createGroup* g = new createGroup;
	g->show();
	this->close();
}

void HomeScreen::showLabelAndResultButton()
{
	ui.pushButton_12->show();
	x.show();
}

void HomeScreen::goTofirstPage(){
	string** temp = obj.getschedule();
	int n = obj.sizeofarray(temp[0]);

	if (n > 0)
	{
		showschedule* ptr=new showschedule;
		ptr->show();
	}
	else
	{
		firstpage*ptr=new firstpage;
		ptr->show();
	}

}

void HomeScreen::goToAddProject(){
	AddProject* a = new AddProject;
	a->show();
	this->close();
}

void HomeScreen::goToDuties(){
	Duties* d = new Duties;
	d->search();
	d->show();
	this->close();
}
void HomeScreen::goToBudget(){
	finance* f = new finance;
	f->show();
	this->close();
}
void HomeScreen::goToAssProject(){
	assignproject* ass = new assignproject;
	ass->show();
	this->close();
}
void HomeScreen::goToRegister(){
	AddParticipant* a = new AddParticipant;
	a->show();
	this->close();
}
HomeScreen::~HomeScreen()
{

}
void HomeScreen::goToResult(){
	AddResult* add = new AddResult;
	add->show();
	this->close();
}
void HomeScreen::showResult(){
	ResultTable* res = new ResultTable;
	res->show();
	this->close();
	
}
void HomeScreen::logout(){
	Login1* r = new Login1;
	r->show();
	this->close();
}
void HomeScreen::goToTimer()
{
	timer * m = new timer;
	m->show();
	//this->close();
}
void HomeScreen::watchProfile(){
	Profile* p = new Profile;
	p->show();
	this->close();
}
void HomeScreen::goToRemoveParticipant(){
	RemoveParticipant* p = new RemoveParticipant;
	p->show();
	this->close();
}

//void HomeScreen::goToCreateProject()
//{
//	createGroup * g = new createGroup;
//	g->show();
//	this->close();
//
//}

