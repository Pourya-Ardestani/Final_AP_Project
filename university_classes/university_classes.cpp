//#include <vector>
#include "Lessons.h"
int Classlocations::NumberOfClass = 30; 
int Lessons ::Number = 0;
using namespace std;


void Porsesh_Az_karbar(vector<Lessons>&,int );
vector <ClassesWithVP> listOfClassesWithVP(10);
template <class T>
int show_classes_for_choose_withVP(vector<T> );


int main()
{

	vector<Classlocations> ListOfCLassRooms(20);
	vector <ClassesWithVP> listOfClassesWithVP(10);

	ClassesWithVP classWithVidProj(40, 35, 0, true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;


	vector <string> NameOflessons;
	vector <string> Teacher;
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
	classWithVidProj.showInfo();

}


void Porsesh_Az_karbar(vector<Lessons> & ExistancLessons ,int numberOfLessons)
{
	string s;
	int n;
	for (int i = 0; i < numberOfLessons; i++)
	{
		Lessons l; 
		cout << "please Enter name of lesson " << i + 1 << " : ";
		cin >> s;
		l.Set_Name(s);//1
		cout << "Please Enter the name of Teacher/Master : ";
		cin >> s;
		l.Set_Teacher(s);//2

		l.Set_Day(s);//3

		l.set_time();//4

		l.needs_V();//5

		//l.setLocation();

		ExistancLessons.push_back(l);
		//cout <<"size =" << ExistancLessons.size();
	}
}


template <class T>
int show_classes_for_choose_withVP(vector<T> C)
{
	int chosen_number;
	for (int i = 0; i < C.size(); i++)
	{
		cout << C.at(i).showInfo();
	}
	cout << "please Enter class number that you want to put this class  : ";
	cin >> chosen_number;
	return chosen_number;

}