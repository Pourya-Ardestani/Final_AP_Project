//#include "Lessons.h"
#include "EventlyLessons.h"
#include <string.h>
#include "Classlocations.h"


using namespace std;


int Classlocations::num = 1; 
int Lessons ::Number = 0;

//functions prototype

bool set_rooz_saat( Classlocations &  , int , int , int);
int show_classes_to_choose(vector < Classlocations >& , Lessons& );
void Porsesh_Az_karbar(vector<Lessons>&, vector < Classlocations >& , vector < Classlocations >& , int );
bool ask_for_evently_or_normal(char);

//main:
int main()
{
	cout << R"(   
     _             _
    | |           | |        
 ___| |_ __ _ _ __| |_ 
/ __| __/ _` | '__| __|
\__ \ || (_| | |  | |_
|___/\__\__,_|_|   \__|
                                          )"<<'\n';
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
	Porsesh_Az_karbar(LessonsExist, ListOfCLassRooms, listOfClassesWithVP, n);



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



//function for asking from user about every lesson
void Porsesh_Az_karbar(vector<Lessons> & ExistancLessons, vector < Classlocations >& C , vector < Classlocations >& VPhave,int numberOfLessons)
{
	string s ;
	int n;

	string ask_user;
	cout << "\ndo you want to set Evently classes or Normal ones :(answer with  E or N) ";
	cin >> ask_user;
	bool soal = ask_for_evently_or_normal(ask_user[0]);


	//else if (soal)
	//{

	//}
	int n_c ;


	for (int i = 0; i < numberOfLessons; i++)
	{
		Lessons  l;
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

		//set calass number after checking in lessons periority
		int max_cap;
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


		max_cap = l.get_capacity();
		cout << "how many student do you want to add?";
		cin >> n;

		while(max_cap <n)
		{
			cout << "capacity is less than the countity of student !!\n  Enter again :";
			cin >> n;
		}


		if (soal)
		{
			EventlyLessons  E_lesson ;
			E_lesson = l;
			E_lesson.set_tedad_bargozari();
			E_lesson.set_start();

			int sid;
			string sname;

			for (int i = 1; i <= n; i++)
			{
				cout << "Enter student " << i << " Name :";
				cin >> sname;
				cout << "Enter student ID :";
				cin >> sid;

				E_lesson.add_student(sid, sname);
			}
			ExistancLessons.push_back(E_lesson);
		}


		else 
		{
			int sid;
			string sname;

			for (int i = 1; i <= n; i++)
			{
				cout << "Enter student " << i << " Name :";
				cin >> sname;
				cout << "Enter student ID :";
				cin >> sid;

				l.add_student(sid, sname);
			}
			ExistancLessons.push_back(l);
		}

	}
	
}


//function  for showing classrooms in terminal and wait to for user to choose one of them
int show_classes_to_choose(vector < Classlocations > & C, Lessons  &lecture)
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
		{
			flag = set_rooz_saat(C.at(chosen_number - 21), lecture.get_Day(), lecture.get_hour() , lecture.get_duration_hour());
			lecture.set_capacity(C.at(chosen_number-21).get_cap());
		}
		else
		{
			flag = set_rooz_saat(C.at(chosen_number - 1), lecture.get_Day(), lecture.get_hour(),lecture.get_duration_hour());
			lecture.set_capacity(C.at(chosen_number - 1).get_cap());
		}
		if (!flag)
		{
			cout << "Please Enter another class number because this one was full at your spacific time :";
			cin >> chosen_number;
		}
	} // check and set the time and class location for their time table
	
	return chosen_number;

}

//checking the class schedule and set the class for above function
bool set_rooz_saat(Classlocations& C, int rooz, int L , int duration)//checking the class schedule and set the class 
{
	int hour = L-7;
	bool flag;
	if (C.rooz_saat[rooz][hour] == 1)
		return false;
	for(int i = 0 ; i<duration ;i++)
	{
		if (C.rooz_saat[rooz][hour+i] != 1)
		{
			C.rooz_saat[rooz][hour+i] = 1;
			flag = true;
		}
		else
		{
			flag = false;
		}
	}
	if (flag)
		std::cout << "class successfuly applied !!!\n";
	else if(!flag)
		std::cout << "there was a lesson in this time ";

	return flag;
}//checking the class schedule and set the class 

// return answer in boolian
bool ask_for_evently_or_normal(char s)
{
	if (s == 'E' || s == 'e')
		return true;
	else if (s == 'N' || s == 'n')
		return false;
	else
	{
		cout << "Error !!!!";
		cout << "we assume that your Idea was making normal lesson setting ";
		return false;
	}
}

