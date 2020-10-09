#ifndef DUTIES_H
#define DUTIES_H
#include "ui_Duties.h"
#include "Participant.h"
#include <QtWidgets/QMainWindow>
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtableview.h>
#include <QtGui>
#include <qlayout.h>
#include "DbConnection.h"
#include <qerrormessage.h>
#include "HomeScreen.h"
#include"DbConnection.h"
#include"SocietyMembers.h"
#define NOMINMAX
using namespace std;
class Duties : public QMainWindow
{
	Q_OBJECT
public:
	Duties(QWidget *parent = 0);
	~Duties();
	public slots:
	void goHome();
	void logout();
	void search();
private:
	Ui::Duties ui;
	SocietyMembers* somem;
	DbConnection db;
	QStandardItemModel model;
	char* convert2char(QString);
	Participant* parts;
	QString convert2QString(char * arr);
};
#endif // LOGIN_H