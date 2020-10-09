#ifndef	SPONSORDATAFETCH_H
#define	SPONSORDATAFETCH_H
#include <string>
using namespace std;
class SponsorDataFetch
{
	string name, address, phone,amount;
	static int totalsponsors;
public:
	void setname(string);
	void setaddress(string);
	void setphone(string);
	void setamount(string);
	string getname();
	string getamount();
	string getaddress();
	string getphone();
	void settotalsponsors(int);
	int gettotalsponsors();

};

#endif