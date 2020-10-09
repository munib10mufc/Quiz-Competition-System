#ifndef LOGIN1_H
#define LOGIN1_H

#include "Profile.h"
#include"HomeScreen.h"
#if defined(_MSC_VER)
#define NOMINMAX
#endif

#include <QtWidgets/QMainWindow>
#include "ui_login1.h"
#include"DbConnection.h"
class Login1 : public QMainWindow
{
	Q_OBJECT

public:
	Login1(QWidget *parent = 0);
	~Login1();
	public slots:
	void home();
private:
	Ui::Login1Class ui;
	DbConnection db;
	char* convert2char(QString);

};

#endif // LOGIN1_H
