#ifndef ADDPARTICIPANT_H
#define ADDPARTICIPANT_H
#include "ui_AddParticipant.h"
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
#include"Accomodation.h"
#define NOMINMAX
using namespace std;
class AddParticipant : public QMainWindow
{
	Q_OBJECT
public:
	AddParticipant(QWidget *parent = 0);
	~AddParticipant();
	public slots:
	void goHome();
	void show12();
	void logout();
	void addParticipant();
private:
	Ui::AddParticipant ui;
	Participant* p;
	Accomodation* acc;
	DbConnection db;
	QStandardItemModel model;
	char* convert2char(QString);
	QString convert2QString(char * arr);
};
#endif // LOGIN_H