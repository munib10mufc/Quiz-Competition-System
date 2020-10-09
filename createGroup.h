#ifndef CREATEGROUP_H
#define CREATEGROUP_H

#include <QtWidgets/QMainWindow>
#include "ui_createGroup.h"
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtableview.h>
#include <QtGui>
#include <QStandardItemModel>
#include "login1.h"
#include"HomeScreen.h"
class createGroup : public QMainWindow
{
	Q_OBJECT

public:
	createGroup(QWidget *parent = 0);
	void displayToTable1();
	~createGroup();
	public slots:
	void goHome();
	void logout();
	void buttonPressToHome();
private:
	Ui::createGroup ui;
	QStandardItemModel m;
};

#endif // ASSIGNPROJECT_H
