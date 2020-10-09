#ifndef DISPLAY_H
#define DISPLAY_H
#include<string>
using namespace std;
class Display{
private:
	string groupName;
	string projectName;
public:
	Display()
	{
		groupName.assign("");
		projectName.assign("");
	}
	string getGroupName(){ return groupName; }
	void setGroupName(char* s){
		string t(s);
		groupName.assign(t);
	}
	string getProjectName(){ return projectName; }
	void setProjectName(char* s){
		string t(s);
		projectName.assign(t);
	}
};
#endif