#include"SocietyMembers.h"
#include<iostream>
using namespace std;
SocietyMembers::SocietyMembers(){
	rank = assignedDuty = "";

}
SocietyMembers::~SocietyMembers(){
	rank = assignedDuty = "";

}
QString SocietyMembers::getRank(){
	return rank;
}
QString SocietyMembers::getDuty(){
	return assignedDuty;
}
void SocietyMembers::setRank(QString a){
	rank = a;
}
void SocietyMembers::setDuty(QString a){
	assignedDuty = a;
}
void SocietyMembers::setTotal(int a){
	total = a;
}
int SocietyMembers::getTotal(){
	return total;
}