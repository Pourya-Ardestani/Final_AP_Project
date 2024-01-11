//#include "Lessons.h"
#include "EventlyLessons.h"
#include <string.h>
#include "Classlocations.h"


using namespace std;



int Classlocations::num = 1; 
int Lessons ::Number = 0;


//functions prototype
//int ret_addad(std::string );
bool set_rooz_saat( Classlocations &  , int , int);
int show_classes_to_choose(vector < Classlocations >& , Lessons& );
void Porsesh_Az_karbar(vector<Lessons>&, vector < Classlocations >& , vector < Classlocations >& , int );

//main:
int main()
{

	vector<Classlocations> ListOfCLassRooms(20);
	vector <Classlocations> listOfClassesWithVP(10);
	for (int i = 0; i < 10; i++)
	{
		listOfClassesWithVP.at(i).VP_set();
	}

	//ClassesWithVP classWithVidProj(40, 35, 0, true);

	int n;
	cout << "Please Enter the quantity of lessons :";
	cin >> n;


	vector <string> NameOflessons;
	vector <string> Teacher;

	vector <Lessons> LessonsExist;
    Porsesh_Az_karbar(LessonsExist , ListOfCLassRooms, listOfClassesWithVP, n);



	int len = LessonsExist.size();
	

	cout << endl;
	for (int i = 0; i < len; i++)
	{
		LessonsExist.at(i).ShowInfo();
		cout << "---------------------------";
		cout << endl;
	}

	cout << "++++++++++++++++++\n";

}

//functions decleration :

void Porsesh_Az_karbar(vector<Lessons> & ExistancLessons, vector < Classlocations >& C , vector < Classlocations >& VPhave,int numberOfLessons)
{
	string s ;
	int n;
	for (int i = 0; i < numberOfLessons; i++)
	{
		Lessons l;
		cout << "please Enter name of lesson " << i + 1 << " : ";
		cin >> s;
		l.Set_Name(s );//1

		cout << "Please Enter the name of Teacher/Master : ";
		cin >> s;
		l.Set_Teacher(s);//2

		cout << "whitch day do you want to asighn this class ?";
		cin >> s;
		l.Set_Day(ret_addad(s));//3

		l.set_time();//4

		l.needs_V();//5

		int n_c ;

		//set calass number after checking in lessons periority
		{
			if (l.get_need_vp())
			{
				n_c = show_classes_to_choose(VPhave, l);
				l.set_class_number(n_c);
			}

			else if (!l.get_need_vp())
			{
				n_c = show_classes_to_choose(C, l);
				l.set_class_number(n_c);
			}
		}

		cout << "how many student do you want to add?";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			
			//l.add_student();
		}
		ExistancLessons.push_back(l);
		
	}
}



int show_classes_to_choose(vector < Classlocations > & C, Lessons &lecture)
{
	int chosen_number; 

	for (int i = 0; i < C.size(); i++)
	{
		std::cout << "------------------------------------------------------------------------------------------------------------------------"<<endl;
		std::cout << "                class" << C.at(i).get_number() << endl;

		C.at(i).show_barname();
		C.at(i).showInfo();
	}//printing every class schedule
	
	bool flag = false;
		std::cout << "\n\nplease Enter class number that you want to put this class  : ";
		std::cin >> chosen_number;
	while(!flag) // check and set the time and class location for their time table
	{

		if (lecture.get_need_vp())
			flag = set_rooz_saat(C.at(chosen_number - 21), lecture.get_Day(), lecture.get_hour());
		else
			flag = set_rooz_saat(C.at(chosen_number - 1), lecture.get_Day(), lecture.get_hour());
		if (!flag)
		{
			cout << "Please Enter another class number because this one was full at your spacific time :";
			cin >> chosen_number;
		}

	} // check and set the time and class location for their time table
	
	
	return chosen_number;

}

//checking the class schedule and set the class 
bool set_rooz_saat(Classlocations& C, int rooz, int L)//checking the class schedule and set the class 
{
	int hour = L-7;
	
	if (C.rooz_saat[rooz][hour] != 1)
	{
		C.rooz_saat[rooz][hour] = 1;
		std::cout << "class successfuly applied !!!\n";
		return true;
	}
	else
	{
		std::cout << "there was a lesson in this time ";
		return false;
	}

}//checking the class schedule and set the class 

