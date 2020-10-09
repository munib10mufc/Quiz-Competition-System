*******************************************************************************************
*								*
*								*
*	~~~~~~~~~~~~~~~~~Section - 1~~~~~~~~~~~~~~~~~		*
*								*
*								*
*******************************************************************************************
System Requirements:

1 - Visual studio ultimate 2013.

2 - Qt creator 5.3.2.

3 - Microsoft access 2013.



How to compile and run:

1 - Create new Qt project in vs 2013.

2 - Add "adddestination.ui" , "Addparticipant.ui" , "Addproject.ui" , "addresult.ui" , "assignproject.ui" , "creategroup.ui"
    , "creategroups.ui" , "duties.ui" , "finance.ui" , "Firstpage.ui" , "Homescreen.ui" , "login1.ui" , "Profile.ui" 
    , "RemoveParticipant.ui" , "resulttable.ui" , "showschedule.ui" , "timer.ui" in form files.

3 - Add "adddestination.h" , "Addparticipant.h" , "Addproject.h" , "addresult.h" , "assignproject.h" , "creategroup.h"
    , "Dbconnection.h", "display.h" , "duties.h" , "finance.h" , "Firstpage.h" , "Homescreen.h" , "login1.h" , "mydal.h" , "Operations.h" 
    , "Participant.h" , "Person.h" ,"Profile.h" , "RemoveParticpant.h" , "resultdatafetch.h" , "resulttable.h" , "showschedule.h" , "societymembers.h"
    , "Sponsordatafetch.h" , "timer.h" in header files.

4 - Add "adddestination.cpp" , "Addparticipant.cpp" , "Addproject.cpp" , "addresult.cpp" , "assignproject.cpp" , "creategroup.cpp"
    , "Dbconnection.cpp" , "duties.cpp" ,"expensedatafetch.cpp" , "finance.cpp" , "Firstpage.cpp" , "Homescreen.cpp" , "login1.cpp"
    , "main.cpp" , "mydal.cpp" , "Participant..cpp" , "Person..cpp" ,"Profile.cpp" , "RemoveParticpant.cpp" , "resultdatafetch.cpp" , "resulttable.cpp" 
    , "showschedule.cpp" , "societymembers.cpp" , "Sponsordatafetch.cpp" , "timer.cpp" in Source files.

5 - Add login1.qrc in resource files.

6 - Place Project.accdb in appropriate folder and change database connection strings accordingly in "dbconnection.h" and "mydal.cpp"

7 - compile and run.

8 - Username: admin    password: 12345



Executing / Running :

1 - Schedule will not be created unless there are groups and places added in "groups" and "Place" table.

2 - Projects will only assign if there are existing groups.

3 - Add result requires Groups to actually exist.

4 - To remove a participant he/she should exist.

5 - create group requires existing participants.

6- sponser should exist in database to add income details.

7- default time is 3 hours, time can be added or subtracted. 



Basic functionalities:

1 - Registers new Participants .Registeration stops when the final resgistration date has been reached

2 - Removes participants

3 - View existing Participants (showcases all the information of current participants).

4 - assign duties to staff 

5 - Create groups (combine different participants into a single group)

6 - Create new projects

7 - Assign Projects to groups

8 - display results of participants ()

9 - create schedule (creates schedule of all groups at random assigning random venues)

10 - display schedule of competetion (showcases the date, time and venue of competetion for different groups)

11 - manage expenses / income of icpc 

12 - display expenses / income of icpc

13 -  display Sponsors / income of Sponsors 



*******************************************************************************************
*								*
*								*
*	~~~~~~~~~~~~~~~~~Section - 2~~~~~~~~~~~~~~~~~		*
*								*
*								*
*******************************************************************************************




Observer Design Pattern 

1 - Quiz timer is subject of pattern. It is data member of timer class in Timer.H file
2 - Qlabel, ShowResultButton are the observers of subject. Both of them belong to HomeScreen.H file
and their working is implemented in ShowLabelAndResultButton()
3 - Admin starts the time and at the end of time interval, system closes timer window, pops up a message and shows
a button to go back to home page where a label and showResultButton are made visible
4 - admin can check results only when the count down comes to an end