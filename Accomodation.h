#ifndef ACCOMODATION_H
#define ACCOMODATION_H
#include<string>
#include<string.h>
using namespace std;
class Accomodation{
private:
	int roomNo;
	int rPhoneNo;
	string strt_date;
	string end_date;
public:
	Accomodation(){ roomNo = rPhoneNo = 0;
	strt_date = end_date = "";
	}
	~Accomodation(){
		roomNo = rPhoneNo = 0;
		strt_date = end_date = "";
	}
	string getstrt_date(){ return strt_date; 
	}
	string getEnd_date(){ return end_date; }
	int getRoomNO(){ return roomNo; }
	int getrPhone(){ return rPhoneNo; }
	void setRoomNo(int a){
		roomNo = a;
	}
	void setrPhoneNo(int a){
		rPhoneNo= a;
	}
	void setstrt_date(string s){
		strt_date.assign(s);

	}
	void setend_date(string s){
		end_date.assign(s);

	}
};
#endif