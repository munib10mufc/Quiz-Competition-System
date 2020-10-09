#ifndef PERSON_H
#define PERSON_H
#include<qstring.h>
#include<iostream>

class Person{
	QString name;
	QString address;
	int age;
	int CNIC;
	QString email;
	int phone;
public:
	Person();
	~Person();
	QString getName();
	QString getAddress();
	int getAge();
	int getCNIC();
	QString getEmail();
	int getPhone();
	void setName(QString);
	void setAddress(QString);
	void setAge(int);
	void setCNIC(int);
	void setEmail(QString);
	void setPhone(int);
};
#endif