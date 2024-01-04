#include "Lessons.h"

Lessons::Lessons()
{
	Name =' ';
	Day = ' ';
	Start.ResetTime(0, 0);
	Duration.ResetTime(0, 0);
	Number++;
	ID = Number;
}
void Lessons::Set_Day( std::string day)
{
	Day = day ;
}

void Lessons::Set_Name(std :: string name)
{
	Name = name;
}
void Lessons::ShowInfo()const
{
	std :: cout << " ID : "<< ID   << std::endl ;
	std :: cout << " Name : "<< Name << std::endl ;
	std :: cout << " Day : "<< Day  << std::endl ;
}
void Lessons ::Set_Teacher(std :: string  teacher)
{
	Teacher = teacher;
}



