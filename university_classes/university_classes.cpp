//#include <iostream>
//#include "Lessons.h"
//#include "Time.h"
//#include "Classlocations.h"
#include <vector>
#include "ClassesWithVP.h"
int Classlocations::NumberOfClass = 30; 
int Lessons:: Number = 0;
using namespace std;


int main()
{/*
	Classlocations classWithoutVidProj[10] = { Classlocations(30),Classlocations(31),
											   Classlocations(32),Classlocations(33),
											   Classlocations(34),Classlocations(35),
											   Classlocations(36),Classlocations(37),
											   Classlocations(38),Classlocations(39)};*/
	vector<Classlocations> ListOfCLassRooms(10);


	ClassesWithVP classWithVidProj(40, 35, 0, true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;
	//Lessons *Doros = new Lessons[n];


	string StName;

	vector <string> NameOflessons;
	for (int i = 0; i < n; i++)
	{
		cout << "please Enter name of " << i + 1 << " lesson :";// collecting name of lesson 
		cin >> StName;
		NameOflessons.push_back(StName);

	}
	int len = NameOflessons.size();
	vector <Lessons> LessonsExist(len);
	for (int i = 0; i < len; i++)
	{
		LessonsExist.at(i).Set_Name(NameOflessons.at(i));
	}

	/*
	LessonsExist.push_back(.set_Name(StName);//creating lesson ob and give the name to obj
	*/

	for (int i = 0; i < len; i++)
	{
		//classWithoutVidProj[i].showInfo();
		LessonsExist.at(i).ShowInfo();
		cout << "---------------------------"<<endl;
	}

	cout << "++++++++++++++++++\n";
	classWithVidProj.showInfo2();

}
