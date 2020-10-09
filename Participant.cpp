#include"Participant.h"
using namespace std;
Participant::Participant(){
	id = group_id = 0;
	intName = "";
}
Participant::~Participant(){
	id = group_id = 0;
	intName = "";
}
QString Participant::getIntName(){ return intName; }
int Participant::getID(){ return id;}
int Participant::getGroupID(){ return  group_id; }
void Participant::setIntName(QString a){
	intName = a;
}
void Participant::setID(int a){
	id = a;
}
void Participant::setGroupID(int a){
	group_id = a;
}
void Participant::setPersonID(int a){
	person_id = a;
}
int Participant::getPersonID(){
	return person_id;
}