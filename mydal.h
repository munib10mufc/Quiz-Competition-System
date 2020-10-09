#define NOMINMAX
#pragma once
#include<iostream>
#include <string>
#include <time.h>
#include <ctime>
#include<atldbcli.h>
#include<atldbsch.h>
using namespace std;
class mydal
{
public:
	mydal(void);
	void addschedule(int);
	string makeinsertquery(int day,int placeid,int time,int groupid);
	void addplace(string,string);
	int sizeofarray(string*);
	string** splitarray(string*, int);
	string* randomize(string*);
	bool searchforplace(string);
	string* getplaces();
	string** getschedule();
	string* getplacenames();
	string* getgroups();
	string makeaddplacequery(string,string);
	~mydal(void);
};

