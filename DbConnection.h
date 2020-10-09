#ifndef DbConnection_H
#define DbConnection_H
#include<iostream>
using namespace std;
#include"ResultDataFetch.h"
#include<atldbcli.h>
#include<atldbsch.h>
#include"Participant.h"
#include"SocietyMembers.h"
#include"Accomodation.h"
#include"Display.h"
#include"ExpenseDataFetch.h"
#include"SponsorDataFetch.h"
class DbConnection
{
	char *DAM;
	LPCOLESTR lpcOleConnect;
	CDataSource dbDataSource;
	CSession dbSession;
	HRESULT hr1,hr;
	bool check ;
	void makeconnection();
	void stopconnection();
	char* makeDeleteParticipantQuery(char*);
	int financegetExpensesTotal(string &);
	int financegetIncomeTotal(string &);
	int financeRowSize(char);



	int RowSize();

public:
	DbConnection(){};


	int insertincome(ExpenseDataFetch);
	int insertsponsor(SponsorDataFetch);
	int insertexpense(ExpenseDataFetch);
	int selectexpenses(ExpenseDataFetch * &, string &, string &);
	int selectsponsors(SponsorDataFetch * &);
	int selectincome(SponsorDataFetch * &, string&);

	bool addProject(string, string, string);
	bool checkLogin(string, string);
	bool searchParticipant(Participant* &,string);
	bool searchParticipant1(Participant* &,string);
	bool deleteParticipant(string);
	bool searchDuties(SocietyMembers* &);
	bool addParticipant(Participant* &);
	bool addParticipantAcc(Accomodation* &,int);
	int getRowCountOfGroupProject();
	int getRowCountOfGroups();
	int* getGroupIDs(int &);
	
	
	int* getProjectIDs(int &);
	int RowSizeOfGroupInfo();
	
	
	Display * dataReceived(int &);
	bool dataReceived1(char** , int b[], int c[],int &);
	void insertAssignedProjects(int, int);


	int * getParticipantId(int &);

	bool createGroups();
	bool checkteam(int);
	int insertPoints(int id, int points);

	int selectResult(ResultDataFetch*&);

	~DbConnection(){};
};
#endif