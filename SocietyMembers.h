#ifndef SOCIETYMEMBERS_H
#define SOCIETYMEMBERS_H
#include<qstring.h>
#include"Person.h"
class SocietyMembers:public Person{
private:
	QString rank;
	QString assignedDuty;
	int total;
public:
	SocietyMembers();
	~SocietyMembers();
	QString getRank();
	QString getDuty();
	void setRank(QString a);
	void setDuty(QString a);
	int getTotal();
	void setTotal(int);
};
#endif