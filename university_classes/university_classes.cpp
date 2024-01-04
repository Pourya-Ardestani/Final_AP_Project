#include <vector>
#include "Lessons.h"
int Classlocations::NumberOfClass = 30; 
int Lessons ::Number = 0;
using namespace std;



void Porsesh_Az_karbar(vector<Lessons>&,int );


int main()
{

	vector<Classlocations> ListOfCLassRooms(10);
	vector <ClassesWithVP> listOfClassesWithVP(5);

	ClassesWithVP classWithVidProj(40, 35, 0, true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;


	vector <string> NameOflessons;
	vector<string> Teacher;
	//vector<>;
	//vector<Barname> 

	vector <Lessons> LessonsExist;
	Porsesh_Az_karbar(LessonsExist, n);

	int len = LessonsExist.size();
	



	for (int i = 0; i < len; i++)
	{
		//classWithoutVidProj[i].showInfo();
		LessonsExist.at(i).ShowInfo();
		cout << "---------------------------"<<endl;
	}

	cout << "++++++++++++++++++\n";
	classWithVidProj.showInfo2();

}


void Porsesh_Az_karbar(vector<Lessons> & ExistancLessons ,int numberOfLessons)
{

	string s;
	for (int i = 0; i < numberOfLessons; i++)
	{
		static Lessons l; 
		cout << "please Enter name of lesson " << i + 1 << " : ";
		cin >> s;
		l.Set_Name(s);
		cout << "Please Enter the name of Teacher/Master : ";
		cin >> s;

		ExistancLessons.push_back(l);
	}

}

