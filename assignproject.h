#ifndef ASSIGNPROJECT_H
#define ASSIGNPROJECT_H

#include <QtWidgets/QMainWindow>
#include "ui_assignproject.h"
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtableview.h>
#include <QtGui>
#include <QStandardItemModel>
#include "login1.h"
#include"HomeScreen.h"
class assignproject : public QMainWindow
{
	Q_OBJECT

public:
	assignproject(QWidget *parent = 0);
	void displayToTable();
	~assignproject();
public slots:
void goHome1();
void logout1();

	void buttonPressToHome();
private:
	Ui::assignproject ui;
	QStandardItemModel m;
};

#endif // ASSIGNPROJECT_H
