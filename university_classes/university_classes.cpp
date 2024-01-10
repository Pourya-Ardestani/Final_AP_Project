//#include "Lessons.h"
#include "EventlyLessons.h"
#include "ClassesWithVP.h"

using namespace std;
using namespace std;


int Classlocations::NumberOfClass = 30; 
int Lessons ::Number = 0;

//functions prototype
void Porsesh_Az_karbar(vector<Lessons>&,int );
template <class T>
int show_classes_for_choose_withVP(vector<T>& C);

//main:
int main()
{

	vector<Classlocations> ListOfCLassRooms(20);
	vector <ClassesWithVP> listOfClassesWithVP(10);

	//ClassesWithVP classWithVidProj(40, 35, 0, true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;


	vector <string> NameOflessons;
	vector <string> Teacher;

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

}

//functions decleration :

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
		cout << "whitch day do you want to asighn this class ?";
		cin >> s;
		l.Set_Day(s);//3

		l.set_time();//4

		l.needs_V();//5

		//l.setLocation();

		ExistancLessons.push_back(l);
		
	}
}

template <class T>
int show_classes_for_choose_withVP(vector<T> & C , T lecture)
{
	int chosen_number; 
	for (int i = 0; i < C.size(); i++)
	{
		cout << C.at(i).showInfo();
	}
	cout << "please Enter class number that you want to put this class  : ";
	cin >> chosen_number;
	C.at(chosen_number).set_rooz_saat(T);
	return chosen_number;

}