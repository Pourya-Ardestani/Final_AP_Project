//#include <iostream>
//#include "Lessons.h"
//#include "Time.h"
//#include "Classlocations.h"
#include<vector>
#include "ClassesWithVP.h"

using namespace std;


int main()
{
	Classlocations classWithoutVidProj[10] = { Classlocations(30),Classlocations(31),
											   Classlocations(32),Classlocations(33),
											   Classlocations(34),Classlocations(35),
											   Classlocations(36),Classlocations(37),
											   Classlocations(38),Classlocations(39)};

	//Classlocations<list> saaal ;

	ClassesWithVP classWithVidProj(40,35,0,true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;
	vector<Lessons> Doros ;
	string *NamesOfTeachers = new string[n] ;
	for (int i = 0; i < n ; i++)
	{
		cout << "please Enter name of " << i + 1 << ". teacher :";
		cin >> NamesOfTeachers[i];
		 
	}


	for (int i = 0; i < 10; i++)
	{
		classWithoutVidProj[i].showInfo();
		cout << "---------------------------"<<endl;
	}

	cout << "++++++++++++++++++\n";
	classWithVidProj.showInfo2();



	delete[] NamesOfTeachers;
	return 0;
}
