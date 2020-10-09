#ifndef PROFILE_H
#define PROFILE_H
#include "ui_Profile.h"
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
#define NOMINMAX
using namespace std;
class Profile : public QMainWindow
{
	Q_OBJECT
public:
	Profile(QWidget *parent = 0);
	~Profile();
	public slots:
		void goHome();
		void logout();
		void search();
private:
	Ui::Profile ui;
	DbConnection db;
	QStandardItemModel model;
	char* convert2char(QString);
	Participant* parts;
	QString convert2QString(char * arr);
};
#endif // LOGIN_H