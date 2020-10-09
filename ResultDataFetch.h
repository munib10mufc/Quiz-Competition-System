#ifndef RESULT_H
#define RESULT_H

#include<string>
using namespace std;


class ResultDataFetch
{
	string id;
	string points;
	int total;
public:
	ResultDataFetch(){ total = 0; };
	void setId(string ID);
	void setTotal(int);
	void setPoints(string Points);
	string getID();
	string getPoints();
	int getTotal();
	~ResultDataFetch(){};
};
#endif