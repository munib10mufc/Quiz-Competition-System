#include"Person.h"
using namespace std;
Person::Person(){
	name = address = email = "";
	age = CNIC = phone = 0;
}
Person::~Person(){
	name = address = email = "";
	age = CNIC = phone = 0;
}
QString Person::getName(){
	return name;
}
QString Person::getAddress(){
	return address;
}
QString Person::getEmail(){
	return email;
}
int Person::getAge(){
	return age;
}
int Person::getCNIC(){
	return CNIC;
}
int Person::getPhone(){
	return phone;
}

void Person::setName(QString a){
	name = a;
}
void Person::setAddress(QString a){
	address = a;
}
void Person::setEmail(QString a){
	email = a;
}
void Person::setAge(int a){
	age = a;
}
void Person::setCNIC(int a){
	CNIC = a;
}
void Person::setPhone(int a){
	phone = a;
}