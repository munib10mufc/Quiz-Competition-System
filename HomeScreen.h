#ifndef HOMESCREEN_H
#define HOMESCREEN_H
#if defined(_MSC_VER)
#define NOMINMAX
#endif
#include"assignproject.h"
#include <QtWidgets/QMainWindow>
#include "ui_HomeScreen.h"
#include"timer.h"
#include"mydal.h"
using namespace std;
class HomeScreen : public QMainWindow
{
	Q_OBJECT
public:
	void showLabelAndResultButton();
	HomeScreen(QWidget *parent = 0);
	~HomeScreen();
public slots:
void goTofirstPage();
void goToAssProject();
	void goToRegister();
	void goToDuties();
	void goToBudget();
	void goToRemoveParticipant();
	void watchProfile();
	void goToAddProject();
	void goToTimer();
	void showResult();
//	void goToCreateProject();
	void goToResult();
	void logout();
	void goCreateGroup();
private:
	QLabel x;
	mydal obj;
	Ui::HomeScreen ui;
};
#endif // LOGIN_H
