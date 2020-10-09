#include "DbConnection.h"

void DbConnection::makeconnection()
{
	check = true;
	DAM = "OLEDB";

	lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"D:\\Samester\\5\\OOAD\\Project Work\\finalSubmission\\Phase - 3\\code\\final\\project.accdb";
	
	
	hr1 = CoInitialize(NULL);
	hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);
	if (FAILED(hr))
	{
		cout << DAM << ": Unable to connect to data source " << OLE2T((LPOLESTR)lpcOleConnect) << endl;
		check = false;
	}
}

void DbConnection::stopconnection()
{
	dbDataSource.Close();
	dbSession.Close();
}

bool DbConnection::searchParticipant(Participant* &parts, string a){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string s = "SELECT * FROM Participant WHERE ParticipantId=" + a + ";";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd, cmd1;
				hr = cmd.Open(dbSession, query);
				hr = cmd1.Open(dbSession, query);
				DBORDINAL colCount1 = cmd.GetColumnCount();
				int id;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					int rowCount = 0;
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					while (pRS->MoveNext() == S_OK)
					{
						WCHAR* szValue = cmd.GetString(1);
						rowCount++;
					}
					if (rowCount == 0){
						stopconnection();
						return 0;
					}

					else
					{
						parts = new Participant[1];
						char arr[300] = { '0' };
						CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
						while (pRS1->MoveNext() == S_OK)
						{
							for (int col = 1; col <= (int)colCount1; col++)
							{
								WCHAR* szValue = cmd.GetString(col);
								if (col == 1)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setID(atoi(arr));
								}
								else if (col == 2)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setIntName((arr));
								}
								else if (col == 3){
									wcstombs(arr, szValue, 49);
									parts[0].setPersonID(atoi(arr));
								}
								else if (col == 4)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setGroupID(atoi(arr));
								}
								for (int i = 0; i < 300; i++)
								{
									arr[i] = '\0';
								}
							}

						}

					}
					stopconnection();
					return true;
				}
			}
		}
	}
}

bool DbConnection::searchParticipant1(Participant* &parts, string a){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{

				string s = "SELECT * FROM Person WHERE PersonID=" + a + ";";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();

				CCommand<CDynamicStringAccessor> cmd, cmd1;
				hr = cmd.Open(dbSession, query);
				hr = cmd1.Open(dbSession, query);
				DBORDINAL colCount1 = cmd.GetColumnCount();
				int id;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					int rowCount = 0;
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					while (pRS->MoveNext() == S_OK)
					{
						WCHAR* szValue = cmd.GetString(1);
						rowCount++;
					}
					if (rowCount == 0){
						stopconnection();
						return 0;
					}

					else
					{
						char arr[300] = { '0' };
						CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
						while (pRS1->MoveNext() == S_OK)
						{
							for (int col = 1; col <= (int)colCount1; col++)
							{
								WCHAR* szValue = cmd1.GetString(col);
								if (col == 2)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setName(arr);
								}
								else if (col == 3)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setAddress(arr);
								}
								else if (col == 4){
									wcstombs(arr, szValue, 49);
									parts[0].setAge(atoi(arr));
								}
								else if (col == 5)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setCNIC(atoi(arr));
								}
								else if (col == 6)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setEmail((arr));
								}
								else if (col == 7)
								{
									wcstombs(arr, szValue, 49);
									parts[0].setPhone(atoi(arr));
								}

								for (int i = 0; i < 300; i++)
								{
									arr[i] = '\0';
								}
							}

						}

					}
					stopconnection();
					return true;
				}
			}
		}
	}
}

bool DbConnection::deleteParticipant(string a){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{

				string s = "SELECT * FROM Participant where ParticipantId=" + a + ";";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				s = "DELETE FROM Participant WHERE ParticipantId=" + a + ";";
				wstring w1(s.begin(), s.end());
				LPOLESTR query1 = (LPOLESTR)w1.c_str();

				CCommand<CDynamicStringAccessor> cmd, cmd1;
				hr = cmd1.Open(dbSession, query);
				DBORDINAL colCount1 = cmd.GetColumnCount();
				int id = 0;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					char arr[300] = { '0' };
					CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
					if (pRS1->MoveNext() == S_OK){
						WCHAR* szValue = cmd1.GetString(3);
						wcstombs(arr, szValue, 49);
						id = atoi(arr);
					}
					hr = cmd.Open(dbSession, query1);
					string s = "DELETE FROM Person where ParticipantId=" + std::to_string(id) + ";";
					wstring w2(s.begin(), s.end());
					LPOLESTR query2 = (LPOLESTR)w2.c_str();
					CCommand<CDynamicStringAccessor> cmd3;
					hr = cmd3.Open(dbSession, query2);
					stopconnection();
					return true;

				}
			}
		}
	}
}

bool DbConnection::addProject(string a, string b, string c){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{


				string s = "SELECT * FROM Project WHERE projectname='" + a + "';";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();


				s = "INSERT INTO Project (Description,projectname,Time1) VALUES('" + b + "','" + a + "','" + c + "');";
				wstring w1(s.begin(), s.end());
				LPOLESTR query1 = (LPOLESTR)w1.c_str();

				CCommand<CDynamicStringAccessor> cmd, cmd1;
				hr = cmd1.Open(dbSession, query);
				DBORDINAL colCount1 = cmd.GetColumnCount();
				int id = 0;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					char arr[300] = { '0' };
					int rows = 0;
					CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
					if (pRS1->MoveNext() == S_OK){
						rows++;
					}
					if (rows == 1){
						stopconnection();
						return false;
					}
					else{
						hr = cmd.Open(dbSession, query1);
						if (!SUCCEEDED(hr))
						{
							stopconnection();
							return 0;
						}

						stopconnection();
						return true;
					}
				}
			}
		}
	}
}

bool DbConnection::checkLogin(string a, string b){
	stopconnection();
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string s = "SELECT * FROM Admin WHERE Username= '" + a + "' AND Password= '" + b + "';";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				//				LPOLESTR query = A2OLE(makeLoginQuery(a, b));

				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);
				DBORDINAL colCount1 = cmd.GetColumnCount();
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}
				else{
					int rowCount = 0;
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					while (pRS->MoveNext() == S_OK)
					{
						WCHAR* szValue = cmd.GetString(1);
						rowCount++;
					}
					stopconnection();
					return rowCount;
				}
			}
		}
	}
}

bool DbConnection::searchDuties(SocietyMembers* &somem){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{

				string s = "SELECT * FROM Societymembers;";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd, cmd1;
				hr = cmd.Open(dbSession, query);
				hr = cmd1.Open(dbSession, query);
				DBORDINAL colCount1 = cmd1.GetColumnCount();
				int id;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					int rowCount = 0;
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					while (pRS->MoveNext() == S_OK)
					{
						WCHAR* szValue = cmd.GetString(1);
						rowCount++;
					}
					if (rowCount == 0){
						stopconnection();
						return 0;
					}

					else
					{
						somem = new SocietyMembers[rowCount];
						char arr[300] = { '0' };

						CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
						somem[0].setTotal(rowCount);
						for (int i = 0; pRS1->MoveNext() == S_OK; i++)
						{
							for (int col = 1; col <= (int)colCount1; col++)
							{
								WCHAR* szValue = cmd1.GetString(col);
								if (col == 2)
								{
									wcstombs(arr, szValue, 49);
									somem[i].setDuty(arr);
								}
								if (col == 5){
									wcstombs(arr, szValue, 49);
									somem[i].setRank(arr);
								}

							}
							WCHAR* szValue1 = cmd1.GetString(6);
							wcstombs(arr, szValue1, 49);
							string s1 = "SELECT Pname FROM Person WHERE PersonId=" + std::to_string(atoi(arr)) + ";";
							wstring w1(s1.begin(), s1.end());
							LPOLESTR query3 = (LPOLESTR)w1.c_str();
							CCommand<CDynamicStringAccessor> cmd3;
							hr = cmd3.Open(dbSession, query3);
							if (!SUCCEEDED(hr))
							{
								stopconnection();
								return 0;
							}

							CRowset<CDynamicStringAccessor>* pRS3 = (CRowset<CDynamicStringAccessor>*)&cmd3;
							pRS3->MoveNext();
							WCHAR* szValue2 = cmd3.GetString(1);
							wcstombs(arr, szValue2, 49);
							somem[i].setName(arr);
						}
						stopconnection();
						return 1;
					}
				}
			}
		}
	}
}

bool DbConnection::addParticipant(Participant* &parts){

	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				char arr[300] = { '0' };

				string s = "SELECT * FROM Person WHERE CNIC=" + std::to_string(parts[0].getCNIC()) + ";";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();


				s = "INSERT INTO Person (Pname,Address,Age,CNIC,Email,PhoneNo) VALUES('" + parts[0].getName().toStdString() + "','" + parts[0].getAddress().toStdString() + "'," + std::to_string(parts[0].getAge()) + "," + std::to_string(parts[0].getCNIC()) + ",'" + parts[0].getEmail().toStdString() + "'," + std::to_string(parts[0].getPhone()) + ");";
				wstring w1(s.begin(), s.end());
				LPOLESTR query1 = (LPOLESTR)w1.c_str();


				CCommand<CDynamicStringAccessor> cmd, cmd1, cmd2, cmd3,cmd4;
				hr = cmd.Open(dbSession, query);
				int id = 0;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					char arr[300] = { '0' };
					int rows = 0;
					CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd;
					if (pRS1->MoveNext() == S_OK){
						rows++;
					}
					if (rows == 1){
						stopconnection();
						return false;
					}
					else{
						hr = cmd1.Open(dbSession, query1);
						if (!SUCCEEDED(hr))
						{
							stopconnection();
							return 0;
						}
						else{

							s = "SELECT PersonID FROM Person WHERE CNIC=" + std::to_string(parts[0].getCNIC()) + ";";
							wstring w2(s.begin(), s.end());
							LPOLESTR query2 = (LPOLESTR)w2.c_str();
							hr = cmd2.Open(dbSession, query2);
							if (!SUCCEEDED(hr))
							{
								stopconnection();
								return 0;
							}
							else{
								CRowset<CDynamicStringAccessor>* pRS2 = (CRowset<CDynamicStringAccessor>*)&cmd2;
								pRS2->MoveNext();
								WCHAR* szValue2 = cmd2.GetString(1);
								wcstombs(arr, szValue2, 49);
								int id = atoi(arr);
								parts[0].setPersonID(id);
								s = "INSERT INTO Participant (Institutename,PersonID) VALUES('" + parts[0].getIntName().toStdString() + "'," + std::to_string(id) + ");";
								wstring w3(s.begin(), s.end());
								LPOLESTR query3 = (LPOLESTR)w3.c_str();
								hr = cmd3.Open(dbSession, query3);
								s = "SELECT ParticipantID FROM Participant WHERE PersonID=" +std::to_string(id) + ";";
								wstring w4(s.begin(), s.end());
								LPOLESTR query4 = (LPOLESTR)w4.c_str();
								hr = cmd4.Open(dbSession, query4);

								CRowset<CDynamicStringAccessor>* pRS4 = (CRowset<CDynamicStringAccessor>*)&cmd4;
								pRS4->MoveNext();
								WCHAR* szValue4 = cmd4.GetString(1);
								wcstombs(arr, szValue4, 49);
								int id4 = atoi(arr);
								parts[0].setID(id4);


							}
						}
						stopconnection();
						return true;
					}
				}
			}
		}
	}




}

bool DbConnection::addParticipantAcc(Accomodation* &acc, int id){

	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		stopconnection();
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				char arr[300] = { '0' };

				string s = "INSERT INTO Accomdation(Roomno,RoomphoneNo,Startdate,Enddate,ParticipantID) VALUES (" + std::to_string(acc[0].getRoomNO()) + "," + std::to_string(acc[0].getrPhone()) + ",'" + acc[0].getstrt_date() + "','" + acc[0].getEnd_date() + "'," + std::to_string(id) + ");";
				wstring w(s.begin(), s.end());
				LPOLESTR query = (LPOLESTR)w.c_str();


				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);
				int id = 0;
				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}

				else{
					stopconnection();
					return true;
				}
			}
		}
	}
}

int DbConnection::getRowCountOfGroups()
{
	makeconnection();
	USES_CONVERSION;
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string q = "select count(ID) from groupinfo;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);
		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			char*x = new char[20];
			for (int i = 0; i < 20; i++)
				x[i] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				strcpy(x, arr);
			}
			stopconnection();
			return atoi(x);
		}
		else
		{
			stopconnection();
			return 0;
		}
	}
	return 1;
}



//salman
int DbConnection::RowSizeOfGroupInfo()
{
	int p = 0;
	makeconnection();
	USES_CONVERSION;
	hr = dbSession.Open(dbDataSource);
	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return p;
	}
	else
	{
		string q = "select count(ID) from groupinfo;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();

		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
			}
			p = atoi(arr);
		}
		else
		{
			stopconnection();
			return p;
		}
	}
	stopconnection();
	return p;
}
int DbConnection::getRowCountOfGroupProject()
{
	makeconnection();
	USES_CONVERSION;
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string q = "select count(ID) from groupinfo;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);
		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			char*x = new char[20];
			for (int i = 0; i < 20; i++)
				x[i] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				strcpy(x, arr);
			}
			stopconnection();
			return atoi(x);
		}
		else
		{
			stopconnection();
			return 0;
		}
	}
	return 1;
}
int * DbConnection::getGroupIDs(int &count)
{
	USES_CONVERSION;
	count = 0;
	makeconnection();
	int *ret = new int[50];
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{

		string q = "SELECT ID FROM groupinfo;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1))
		{
			char x[50][1];
			for (int i = 0; i < 50; i++)
				x[i][0] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[50] = { 0 };
			int q = 0;
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				strcpy(x[q], arr);
				q++;
				count++;
			}
			for (int i = 0; i < count; i++)
			{
				ret[i] = x[i][0] - 48;
			}


		}
		else
		{
			stopconnection();
			return NULL;
		}
	}
	stopconnection();
	return ret;
}
int * DbConnection::getProjectIDs(int &count)
{
	USES_CONVERSION;
	count = 0;
	makeconnection();
	int *ret = new int[50];
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string q = "SELECT ProjectId FROM Project;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1))
		{
			char x[50][1];
			for (int i = 0; i < 50; i++)
				x[i][0] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[50] = { 0 };
			int q = 0;
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				strcpy(x[q], arr);
				q++;
				count++;
			}
			for (int i = 0; i < count; i++)
			{
				ret[i] = x[i][0] - 48;
			}


		}
		else
		{
			stopconnection();
			return NULL;
		}
	}
	stopconnection();
	return ret;
}
void DbConnection::insertAssignedProjects(int groupId, int projectId)
{
	makeconnection();
	USES_CONVERSION;

	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return;
			}
			else
			{

				string q = "INSERT INTO groupProject (groupID,projectID) VALUES (" +
					std::to_string(groupId) +
					"," + std::to_string(projectId) + ");";

				wstring w1(q.begin(), q.end());
				LPOLESTR query = (LPOLESTR)w1.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return;
				}
			}
		}
	}
	stopconnection();
	return;
}
Display* DbConnection::dataReceived(int &c){
	makeconnection();
	USES_CONVERSION;
	Display *obj;
	c = 0;
	if (!check)
	{
		return NULL;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return NULL;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return NULL;
			}
			else
			{
				//**************** scroll down and see what is MakeSelectQuery() function is doing
				string q = "select g.name, p.Description from groupinfo as g, Project as p, groupProject as a where a.groupID = g.ID and a.projectID = p.ProjectId;";

				wstring w1(q.begin(), q.end());
				LPOLESTR query = (LPOLESTR)w1.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					stopconnection();
					c = getRowCountOfGroupProject();
					makeconnection();
					obj = new Display[c];
					char arr[300] = { '0' };	int j = 0;
					//*********************** now copying data into class pointer
					while (pRS->MoveNext() == S_OK)
					{
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 1)
							{
								wcstombs(arr, szValue, 200);
								obj[j].setGroupName(arr);
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setProjectName(arr);
							}
							for (int i = 0; i < 300; i++)
							{
								arr[i] = '\0';
							}

						}
						j++;
					}
				}
				else
				{
					stopconnection();
					return NULL;
				}
			}
		}
	}
	stopconnection();
	return obj;
}



bool DbConnection::dataReceived1(char** a ,int b1[],int c1[],int & count){
	makeconnection();
	USES_CONVERSION;
	Display *obj;
	//c = 0;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				//**************** scroll down and see what is MakeSelectQuery() function is doing
				string q = "SELECT name,Participant1,Participant2 FROM groupinfo";
				wstring w1(q.begin(), q.end());
				LPOLESTR query = (LPOLESTR)w1.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);
				count = 0;
				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					stopconnection();
					makeconnection();
					char arr[300] = { '0' };	int j = 0;
					//*********************** now copying data into class pointer
					while (pRS->MoveNext() == S_OK)
					{
						count++;
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 1)
							{
								wcstombs(arr, szValue, 200);
								a[j] = new char[10];
								strcpy(a[j],arr);
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								b1[j]=atoi(arr);
							}
							else if (col ==3)
							{
								wcstombs(arr, szValue, 49);
								c1[j] = atoi(arr);
							}
							for (int i = 0; i < 300; i++)
							{
								arr[i] = '\0';
							}

						}
						j++;
					}
				}
				else
				{
					stopconnection();
					return 0;
				}
			}
		}
	}
	stopconnection();
	return 1;
}






int * DbConnection::getParticipantId(int &count)
{
	USES_CONVERSION;
	count = 0;
	makeconnection();
	int *ret = new int[50];
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string q = "SELECT ParticipantId FROM Participant;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1))
		{
			char x[50][1];
			for (int i = 0; i < 50; i++)
				x[i][0] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[50] = { 0 };
			int q = 0;
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				strcpy(x[q], arr);
				q++;
				count++;
			}
			for (int i = 0; i < count; i++)
			{
				ret[i] = x[i][0] - 48;
			}


		}
		else
		{
			stopconnection();
			return NULL;
		}
	}
	stopconnection();
	return ret;
}




bool DbConnection::createGroups(){

	USES_CONVERSION;
	int count = 0;
	int participants[50];
	makeconnection();
	int *ret = new int[50];
	CComVariant var;
	hr = dbSession.Open(dbDataSource);
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string q = "SELECT ParticipantId FROM Participant;";
		wstring w1(q.begin(), q.end());
		LPOLESTR query1 = (LPOLESTR)w1.c_str();
		CCommand<CDynamicStringAccessor> cmd1,cmd2;
		hr1 = cmd1.Open(dbSession, query1);
		if (SUCCEEDED(hr)){
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[50] = { 0 };
			int no = 0;
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				participants[no] = atoi(arr);
				no++;
				count++;
			}
			
			for (int i = 0,j=1; i < count ; i++,j++){
				q = "INSERT INTO groupinfo (name,Participant1,Participant2) VALUES ('Group " + std::to_string(j) + "'," + std::to_string(participants[i]);
				i++;
				if (i != count){
					q = q + "," + std::to_string(participants[i]) + ");";
				}
				else{
					q = q + ",0);";
				}
				wstring w2(q.begin(), q.end());
				LPOLESTR query2 = (LPOLESTR)w2.c_str();
				hr1 = cmd2.Open(dbSession, query2);
				if (SUCCEEDED(hr)){
					stopconnection();
					return true;
				}
			}
		}
	}
	stopconnection();
	return 0;
}



//munib



int DbConnection::insertexpense(ExpenseDataFetch obj)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "INSERT INTO Expense (amount,description) VALUES (" + to_string(obj.getamount()) + ",'" + obj.getdescription() + "');";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}
			}
		}
	}
	stopconnection();
	return 1;
}
int DbConnection::insertincome(ExpenseDataFetch obj)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "INSERT INTO Income (sponsorname,amount,description) VALUES ('" + string(obj.getdate()) + "'," + to_string(obj.getamount()) + ",'" + string(obj.getdescription()) + "');";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}
			}
		}
	}
	stopconnection();
	return 1;
}
int DbConnection::insertsponsor(SponsorDataFetch obj)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "INSERT INTO Sponsor (name,address,phoneno) VALUES ('" + string(obj.getname()) + "','" + string(obj.getaddress()) + "'," + string(obj.getphone()) + ");";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}
			}
		}
	}
	stopconnection();
	return 1;
}
int DbConnection::selectexpenses(ExpenseDataFetch * &obj, string & x, string & inc)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "SELECT* FROM Expense;";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					int rowCount = 0, recordnumber = financeRowSize('e');
					if (recordnumber == 0)
					{
						stopconnection();
						return 0;
					}
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;

					obj = new ExpenseDataFetch[recordnumber];
					char arr[300] = { '0' };	int j = 0;
					while (pRS->MoveNext() == S_OK)
					{
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 1)
							{
								wcstombs(arr, szValue, 100);
								obj[j].setid(atoi(arr));
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setamount(atoi(arr));
							}
							else if (col == 3)
							{
								wcstombs(arr, szValue, 299);
								obj[j].setdescription(arr);
							}
							else if (col == 4)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setdate(arr);
							}
							for (int i = 0; i < 300; i++)
							{
								arr[i] = '\0';
							}
						}
						j++;
						rowCount++;

					}
					obj->settotal(rowCount);
					if (rowCount < 0)
					{
						stopconnection();
						return 0;
					}
				}
				else
				{
					stopconnection();
					return 0;
				}
				financegetExpensesTotal(x);
				financegetIncomeTotal(inc);
			}
		}
	}

	stopconnection();
	return 1;
}
int DbConnection::selectsponsors(SponsorDataFetch * &obj)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "SELECT name,address,phoneno FROM Sponsor;";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					int rowCount = 0, recordnumber = financeRowSize('s');
					if (recordnumber == 0)
					{
						stopconnection();
						return 0;
					}
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;

					obj = new SponsorDataFetch[recordnumber];
					char arr[100] = { '0' };	int j = 0;
					while (pRS->MoveNext() == S_OK)
					{
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 1)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setname(arr);
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setaddress(arr);
							}
							else if (col == 3)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setphone(arr);
							}
							for (int i = 0; i < 100; i++)
							{
								arr[i] = '\0';
							}
						}
						j++;
						rowCount++;

					}
					obj->settotalsponsors(rowCount);
					if (rowCount < 0)
					{
						stopconnection();
						return 0;
					}
				}
				else
				{
					stopconnection();
					return 0;
				}
			}
		}
	}

	stopconnection();
	return 1;
}
int DbConnection::financeRowSize(char a)
{
	int p = 0;
	USES_CONVERSION;
	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return p;
	}
	else
	{
		LPOLESTR query1;
		string temp;
		if (a == 'e')
		{
			temp = "SELECT Count(amount) FROM Expense;";

		}
		else if (a == 's')
		{
			temp = "SELECT Count(name) FROM sponsor;";

		}
		else if (a == 'i')
		{
			temp = "SELECT count (sponsorname) FROM(SELECT DISTINCT sponsorName FROM income);";

		}
		wstring w(temp.begin(), temp.end());
		query1 = (LPOLESTR)w.c_str();

		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query1);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
			}
			p = atoi(arr);
		}
		else
		{
			stopconnection();
			return p;
		}
	}
	return p;
}
int DbConnection::financegetIncomeTotal(string & x)
{
	USES_CONVERSION;
	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string temp = "SELECT SUM(Amount) FROM Income;";
		wstring w(temp.begin(), temp.end());
		LPOLESTR query = (LPOLESTR)w.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			x = new char[20];
			for (int i = 0; i < 20; i++)
				x[i] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				//strcpy(x, arr);
				x = arr;
			}
		}
		else
		{
			stopconnection();
			return 0;
		}
	}
	return 1;
}
int DbConnection::financegetExpensesTotal(string & x)
{
	USES_CONVERSION;
	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return 0;
	}
	else
	{
		string temp = "SELECT SUM(Amount) FROM Expense;";
		wstring w(temp.begin(), temp.end());
		LPOLESTR	query = (LPOLESTR)w.c_str();
		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			x = new char[20];
			for (int i = 0; i < 20; i++)
				x[i] = '\0';
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			int rowCount1 = 0;
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
				x = arr;
			}
		}
		else
		{
			stopconnection();
			return 0;
		}
	}
	return 1;
}
int DbConnection::selectincome(SponsorDataFetch * &obj, string & inc1)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "select sponsorname,sum(amount) from income group by sponsorname;";
				wstring w(temp.begin(), temp.end());
				LPOLESTR	query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					int rowCount = 0, recordnumber = financeRowSize('i');
					if (recordnumber == 0)
					{
						stopconnection();
						return 0;
					}
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;

					obj = new SponsorDataFetch[recordnumber];
					char arr[100] = { '0' };	int j = 0;
					while (pRS->MoveNext() == S_OK)
					{
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 1)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setname(arr);
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setamount(arr);
							}
							for (int i = 0; i < 100; i++)
							{
								arr[i] = '\0';
							}
						}
						j++;
						rowCount++;

					}
					obj->settotalsponsors(rowCount);
					if (rowCount < 0)
					{
						stopconnection();
						return 0;
					}
				}
				else
				{
					stopconnection();
					return 0;
				}
				financegetIncomeTotal(inc1);
			}
		}
	}

	stopconnection();
	return 1;
}






int DbConnection::insertPoints(int id, int points)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string temp = "INSERT INTO Result (Points,GroupID) VALUES(" + to_string(points) + "," + to_string(id) + ") ;";
				wstring w(temp.begin(), temp.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				if (!SUCCEEDED(hr))
				{
					stopconnection();
					return 0;
				}
			}
		}
	}
	stopconnection();
	return 1;
}

int DbConnection::selectResult(ResultDataFetch* &obj)
{
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string str = "SELECT * FROM Result";
				wstring w(str.begin(), str.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);

				DBORDINAL colCount = cmd.GetColumnCount();
				if (SUCCEEDED(hr) && 0 < colCount)
				{
					DBORDINAL cColumns;
					DBCOLUMNINFO* rgInfo = NULL;
					OLECHAR* pStringsBuffer = NULL;
					cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
					int rowCount = 0, recordnumber = RowSize();
					if (recordnumber == 0)
					{
						stopconnection();
						return 0;
					}
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;

					obj = new ResultDataFetch[recordnumber];
					char arr[100] = { '0' };	int j = 0;
					while (pRS->MoveNext() == S_OK)
					{
						for (int col = 1; col <= (int)colCount; col++)
						{
							WCHAR* szValue = cmd.GetString(col);
							if (col == 3)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setId(arr);
							}
							else if (col == 2)
							{
								wcstombs(arr, szValue, 49);
								obj[j].setPoints(arr);
							}
							for (int i = 0; i < 100; i++)
							{
								arr[i] = '\0';
							}
						}
						j++;
						rowCount++;

					}
					obj->setTotal(rowCount);
					if (rowCount < 0)
					{
						stopconnection();
						return 0;
					}
				}
				else
				{
					stopconnection();
					return 0;
				}
			}
		}
	}

	stopconnection();
	return 1;
}


bool DbConnection::checkteam(int a){
	makeconnection();
	USES_CONVERSION;
	if (!check)
	{
		return 0;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			stopconnection();
			return 0;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				stopconnection();
				return 0;
			}
			else
			{
				string str = "SELECT * FROM Groups WHERE Groupid=" + std::to_string(a) + ";";
				wstring w(str.begin(), str.end());
				LPOLESTR query = (LPOLESTR)w.c_str();
				CCommand<CDynamicStringAccessor> cmd;
				hr = cmd.Open(dbSession, query);
				int count = 0;
				if (SUCCEEDED(hr)){
					CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
					while (pRS->MoveNext() == S_OK)
						count++;
					stopconnection();
					return false;
				}
				else{
					stopconnection();
					return false;
				}
			}
		}
	}
	return true;
}

int DbConnection::RowSize()
{
	int p = 0;
	USES_CONVERSION;
	CComVariant var;
	hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
	if (FAILED(hr) || (var.vt == VT_EMPTY))
	{
		stopconnection();
		return p;
	}
	else
	{
		string str = "SELECT Count(GroupID) FROM Result;";
		wstring w(str.begin(), str.end());
		LPOLESTR query = (LPOLESTR)w.c_str();

		CCommand<CDynamicStringAccessor> cmd1;
		hr1 = cmd1.Open(dbSession, query);

		DBORDINAL colCount1 = cmd1.GetColumnCount();
		if (SUCCEEDED(hr1) && 0 < colCount1)
		{
			DBORDINAL cColumns1;
			DBCOLUMNINFO* rgInfo1 = NULL;
			OLECHAR* pStringsBuffer1 = NULL;
			cmd1.GetColumnInfo(&cColumns1, &rgInfo1, &pStringsBuffer1);
			CRowset<CDynamicStringAccessor>* pRS1 = (CRowset<CDynamicStringAccessor>*)&cmd1;
			char arr[20] = { '0' };
			while (pRS1->MoveNext() == S_OK)
			{
				WCHAR* szValue = cmd1.GetString(1);
				wcstombs(arr, szValue, 49);
			}
			p = atoi(arr);
		}
		else
		{
			stopconnection();
			return p;
		}
	}
	return p;
}