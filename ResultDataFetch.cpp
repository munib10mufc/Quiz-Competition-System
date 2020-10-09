#include"ResultDataFetch.h"
#include<iostream>
using namespace std;

void ResultDataFetch::setId(string ID)
{
	id = ID;
}

void ResultDataFetch::setPoints(string Points)
{
	points = Points;
}

string ResultDataFetch::getID()
{
	return id;
}

int  ResultDataFetch::getTotal()
{
	return total;
}

void ResultDataFetch::setTotal(int t)
{
	total = t;
}
string ResultDataFetch::getPoints()
{
	return points;
}