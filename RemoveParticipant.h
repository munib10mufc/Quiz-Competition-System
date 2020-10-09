#ifndef REMOVEPARTICIPANT_H
#define REMOVEPARTICIPANT_H
#include "ui_RemoveParticipant.h"
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
#define NOMINMAX
using namespace std;
class RemoveParticipant: public QMainWindow
{
	Q_OBJECT
public:
	RemoveParticipant(QWidget *parent = 0);
	~RemoveParticipant();
	public slots:
	void goHome();
	void logout();
	void search();
private:
	Ui::RemoveParticipant ui;
	DbConnection db;
	QStandardItemModel model;
	char* convert2char(QString);
	Participant* parts;
	QString convert2QString(char * arr);
};
#endif // LOGIN_H