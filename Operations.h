#ifndef OPERATIONS_H
#define OPERATIONS_H
#include"DbConnection.h"
#include<Windows.h>
#include<qstring.h>
#include<time.h>

int* randomize(int* g, int gc, int * p, int pc, int &count)
{
	int * ret;
	srand(time(NULL));
	ret = new int[gc];
	for (int i = 0; i < gc; i++)
		ret[i] = rand() % pc + 1;
	count = pc;
	return ret;
}

QString convert2QString(const char * arr)
{
	QString temp(arr);
	return temp;
}

bool assignProjectToGroup(){
	int *group, *project, *assignedProject;
	int gCount, pCount, count;
	DbConnection d;
	group = d.getGroupIDs(gCount);
	project = d.getProjectIDs(pCount);
	if (gCount <= 0 || pCount <= 0)
		return false;
	assignedProject = randomize(group, gCount, project, pCount, count);
	for (int i = 0; i < gCount; i++){
		d.insertAssignedProjects(group[i], assignedProject[i]);
	}
	return true;
}

void createGroups(){
	int *part, count;
	DbConnection db;
	part = db.getParticipantId(count);
	int *group = new int[count/2];
	for (int i = 0; i < count; i++)
		group[i] = 0;
	srand(time(NULL));
	int j = 1, k = 0;
	k = count / 2;
	for (int i = 0; j <= k; i++)
	{
		int x, y;
		y = x = rand() % count + 1;
		if (group[x] == 0 && group[y] == 0)
		{
			group[x] = j;
			group[y] = j;
			j++;
		}
	}
	if (count % 2 != 0)
		for (int i = 0; i < count; i++)
			if (group[i] == 0)
				group[i] = j;
}
#endif