#ifndef ADDRESULT_H
#define ADDRESULT_H

#if defined(_MSC_VER)
#define NOMINMAX
#endif

#include"DbConnection.h"
#include <QWidget>
#include "ui_addresult.h"


class AddResult : public QWidget
{
	Q_OBJECT

public:
	AddResult(QWidget *parent = 0);
	~AddResult();
	public slots:
	void goHome();
	void logout();

	void submitClicked();

private:
	Ui::AddResult ui;
	DbConnection db;
};

#endif // ADDRESULT_H
