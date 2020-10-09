#include "SponsorDataFetch.h"
#include <iostream>
#include <string>
int SponsorDataFetch::totalsponsors = 0;
void SponsorDataFetch::setname(string x)
{
	this->name = x.c_str();
}

void SponsorDataFetch::setaddress(string x)
{
	address = x.c_str();
}
void SponsorDataFetch::setphone(string x)
{
	phone = x.c_str();
}

void SponsorDataFetch::setamount(string x)
{
	amount = x.c_str();
}

void  SponsorDataFetch::settotalsponsors(int x)
{
	totalsponsors = x;
}
string  SponsorDataFetch::getname()
{
	return name;
}

string  SponsorDataFetch::getaddress()
{
	return address;
}

string SponsorDataFetch::getphone()
{
	return phone;
}

string SponsorDataFetch::getamount()
{
	return amount;
}

int  SponsorDataFetch::gettotalsponsors()
{
	return totalsponsors;
}

