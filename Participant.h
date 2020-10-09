#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include"Person.h"
#include<qstring.h>
#include<iostream>
class Participant :public Person{
	int id;
	int person_id;
	QString intName;
	int group_id;
public:
	Participant();
	~Participant();
	int getID();
	int getPersonID();
	int getGroupID();
	QString getIntName();
	void setID(int);
	void setPersonID(int);
	void setGroupID(int);
	void setIntName(QString);
};

#endif