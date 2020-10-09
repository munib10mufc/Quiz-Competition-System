#include "mydal.h"


mydal::mydal(void)
{
}


string mydal::makeinsertquery(int day, int placeid, int time, int groupid)
{
	string s = "INSERT INTO SCHEDULE (Days,times,Groupid,Placeid) VALUES ('12/";
	char* c = new char;
	itoa(day, c, 10);
	s = s + c;
	s = s + "/2014','";


	itoa(time, c, 10);
	s = s + c;
	s = s + ":00','";



	itoa(groupid, c, 10);
	s = s + c;
	s = s + "','";

	itoa(placeid, c, 10);
	s = s + c;
	s = s + "');";


	return s;
}

void mydal::addschedule(int days)
{
	USES_CONVERSION;

	string* s = new string[100];
	s = getgroups();
	s = randomize(s);

	string* plcs = new string[20];
	plcs = getplaces();
	string **abc = new string*[days];
	abc = splitarray(s, days);


	
	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";

	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	hr = dbSession.Open(dbDataSource);


	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	
	CCommand<CDynamicStringAccessor> cmd;	


	int i = 0;
	int j = 0;
	int y = 0;

	time_t now = time(0);
	char* dt = ctime(&now);

	string xyz = dt;


	char *p = strtok(dt, " ");
	while (i < 3)
	{
		xyz = p;
		p = strtok(NULL, " ");
		i++;
	}
	int today = atoi(xyz.c_str());
	today = today + 7;
	if (today > 30)
	{
		today = today - 30;
	}


	string* sdf = randomize(plcs);

	for (int i = 0; i < days; i++)
	{
		for (int j = 0; j < sizeofarray(abc[i]); j++)
		{
			int x = atoi(abc[i][j].c_str());
			sdf = randomize(sdf);
			int pid = atoi(sdf->c_str());
			string pqr = makeinsertquery(today, pid, 9, x);
			wstring w(pqr.begin(), pqr.end());
			LPOLESTR query = (LPOLESTR)w.c_str();
			hr = cmd.Open(dbSession, query);
		}
		today++;
	}


	//delete s;
	//delete plcs;
	//delete[] abc;

	dbDataSource.Close();
	dbSession.Close();

	return;
}

int mydal::sizeofarray(string* s)
{
	int i = 0;
	while (s[i].size() > 0)
	{
		i++;
	}
	return i;
}

string** mydal::getschedule()
{

	string** s = new string*[5];

	for (int i = 0; i < 5; i++)
	{
		s[i] = new string[100];
	}



	string q = "SELECT s.groupid , groupname , placename , days , times FROM(schedule as s inner join groups as g on s.groupid = g.groupid) inner join place as p on p.placeid = s.placeid;";
	wstring w(q.begin(), q.end());
	LPOLESTR query = (LPOLESTR)w.c_str();

	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";
	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	hr = dbSession.Open(dbDataSource);

	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);


	int x = 0;
	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr) && 0 < colCount)
	{
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				WCHAR* szValue = cmd.GetString(col);
				char* c = new char;
				wcstombs(c, szValue, 49);
				s[col-1][x] = c;
			}
			x++;
			rowCount++;
		}
	}


	dbDataSource.Close();
	dbSession.Close();

	return s;
}


bool mydal::searchforplace(string s)
{
	string *str = getplacenames();
	int n = sizeofarray(str);

	int i = 0;
	while (i < n)
	{
		if (str[i] == s)
		{
			return true;
		}
		i++;
	}

	return false;
}



string* mydal::getplacenames()
{

	string* s = new string[100];

	string q = "SELECT Placename FROM Place;";
	wstring w(q.begin(), q.end());
	LPOLESTR query = (LPOLESTR)w.c_str();
	
	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";

	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	hr = dbSession.Open(dbDataSource);

	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);


	int x = 0;
	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr) && 0 < colCount)
	{
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				WCHAR* szValue = cmd.GetString(col);
				char* c = new char;
				wcstombs(c, szValue, 49);
				s[x] = c;
				x++;
			}
			rowCount++;
		}
	}


	dbDataSource.Close();
	dbSession.Close();

	return s;
}



string* mydal::getplaces()
{

	string* s = new string[100];

	
	string q = "SELECT Placeid FROM Place;";
	wstring w(q.begin(), q.end());
	LPOLESTR query = (LPOLESTR)w.c_str();



	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";
	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	hr = dbSession.Open(dbDataSource);

	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);


	int x = 0;
	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr) && 0 < colCount)
	{
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				WCHAR* szValue = cmd.GetString(col);
				char* c = new char;
				wcstombs(c, szValue, 49);
				s[x] = c;
				x++;
			}
			rowCount++;
		}
	}


	dbDataSource.Close();
	dbSession.Close();

	return s;
}


string* mydal::randomize(string* s)
{
	string *temp = new string[100];

	srand(time(NULL));
	int s_size = sizeofarray(s);
	int i = 0;
	int x = 0;
	while (i < s_size)
	{
		int n = rand() % s_size;
		bool flag = false;
		for (int j = 0; j < sizeofarray(temp); j++)
		{
			if (s[n] == temp[j])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			temp[x] = s[n];
			x++;
			i++;
		}
	}

	return temp;
}



string** mydal::splitarray(string* s, int n)
{
	string** temp = new string*[n];

	for (int x = 0; x < n; x++)
	{
		temp[x] = new string[20];
	}

	int j = 0;
	int i = 0;
	int k = 0;
	while (i < sizeofarray(s))
	{
		temp[j][k] = s[i];
		j++;
		i++;
		if (j == n)
		{
			j = 0;
			k++;
		}
	}



	return temp;
}



void mydal::addplace(string place, string capacity)
{
	USES_CONVERSION;
	string s = makeaddplacequery(place, capacity);
	wstring w(s.begin(), s.end());
	LPOLESTR query = (LPOLESTR)w.c_str();
	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";
	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);

	hr = dbSession.Open(dbDataSource);


	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);


	dbDataSource.Close();
	dbSession.Close();


	return;
}

string mydal::makeaddplacequery(string place, string capacity)
{
	string s = "INSERT INTO PLACE (Placename,Placecapacity) VALUES ('";
	s = s + place;
	s = s + "','";
	s = s + capacity;
	s = s + "');";

	return s;
}




string* mydal::getgroups()
{
	string* s = new string[100];

	string q = "SELECT Groupid FROM GROUPS;";
	wstring w(q.begin(), q.end());
	LPOLESTR query = (LPOLESTR)w.c_str();

	

	LPCOLESTR lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\RONI\\Documents\\Visual Studio 2013\\Projects\\ruhan1\\ruhan1\\project.accdb\"";
	CDataSource dbDataSource;
	CSession dbSession;

	HRESULT hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	hr = dbSession.Open(dbDataSource);

	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);


	int x = 0;
	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr) && 0 < colCount)
	{
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
		
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				WCHAR* szValue = cmd.GetString(col);
				char* c = new char;
				wcstombs(c, szValue, 49);
				s[x] = c;
				x++;
			}
			rowCount++;
		}
	}
	dbDataSource.Close();
	dbSession.Close();
	return s;
}


mydal::~mydal(void)
{

}