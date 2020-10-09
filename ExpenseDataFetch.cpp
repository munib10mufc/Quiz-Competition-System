#include "ExpenseDataFetch.h"
#include <iostream>
using namespace std;
int ExpenseDataFetch::total = 0;
void ExpenseDataFetch::setid(int x)
{
	id = x;
}

void ExpenseDataFetch::settotal(int x)
{
	total = x;
}
void ExpenseDataFetch::setamount(int x)
{
	amn = x;
}
int ExpenseDataFetch::gettotal()
{
	return total;
}
void ExpenseDataFetch::setdescription(string des)
{
	descr = des.c_str();
	/*descr = new char[strlen(des) + 1];
	strcpy(descr, des);*/
}
void ExpenseDataFetch::setdate(string d)
{
	date = d.c_str();
}

int ExpenseDataFetch::getid()
{
	return id;
}

int ExpenseDataFetch::getamount()
{
	return amn;
}

string ExpenseDataFetch::getdescription()
{
	return descr;
}

string ExpenseDataFetch::getdate()
{
	return date;
}
