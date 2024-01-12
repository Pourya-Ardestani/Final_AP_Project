#include "EventlyLessons.h"

EventlyLessons::EventlyLessons(int n )
{
	tedad_bargozari = n;
}

EventlyLessons::EventlyLessons()
{
	tedad_bargozari = 0;
}

void EventlyLessons::set_start()
{
	int d, m, y;
	
	std::cout << "PLEASE ENTER START DATE OF THIS EVENTLYU CLASS : \n";

	std::cout<<"Please Enter Day : ";
	std::cin >> d ;

	std::cout<<"Please Enter Mounth : ";
	std::cin >> m ;

	std::cout <<"Please Enter Yeae : ";
	std::cin >> y ;

	Start_Date.set_Date(d, m, y);
}
void EventlyLessons:: set_tedad_bargozari()
{
	std::cout << " how many times do you want to to administer : ";
	std::cin >> tedad_bargozari ;
}
EventlyLessons:: ~EventlyLessons() {}

void  EventlyLessons::operator =(Lessons ob)
{

	EventlyLessons::ID = ID;
	EventlyLessons::Day = Day;
	EventlyLessons::number_of_classroom = number_of_classroom;
	EventlyLessons::Vahed = Vahed;
	EventlyLessons::Name = Name;
	EventlyLessons::Teacher = Teacher;
	EventlyLessons::Start = Start;
	EventlyLessons::Duration = Duration;
	EventlyLessons::V = V;
	EventlyLessons::ListOfStudents = ListOfStudents;
	EventlyLessons::capacituy_of_class = capacituy_of_class; 
	 
}
//void EventlyLessons :: 
