#ifndef ADDPROJECT_H
#define ADDPROJECT_H
#include "ui_AddProject.h"
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
class AddProject : public QMainWindow
{
	Q_OBJECT
public:
	AddProject(QWidget *parent = 0);
	~AddProject();
	public slots:
	void goHome();
	void logout();
	void addProject();
private: 
	Ui::AddProject ui;
	DbConnection db;
	QStandardItemModel model;
	char* convert2char(QString);
	QString convert2QString(char * arr);
};
#endif // LOGIN_H