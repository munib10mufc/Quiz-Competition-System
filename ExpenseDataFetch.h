#ifndef EXPENSEDATAFETCH_H
#define EXPENSEDATAFETCH_H
#include <string>
using namespace std;
class ExpenseDataFetch
{
	static int total;
	int id, amn;
	string descr,date;
public:
	void setid(int);
	void setamount(int);
	void setdescription(string);
	void setdate(string);
	int getid();
	int getamount();
	string getdescription();
	string getdate();
	void settotal(int);
	int gettotal();
};

#endif