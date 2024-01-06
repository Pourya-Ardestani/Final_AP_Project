#include "Date.h"

Date::Date()
{
	Day = 0;
	Mounth = 0;
	Year = 0;
}

int check(std::string name, int D, int checkof)
{
	while (D<0 || D>checkof)
	{
		std::cout << name << "is not a variable quantity Please Enter again :";
		std::cin >> D;
	}
	return D;
}

Date::Date(int d, int y, int m)
{
	Day = check("day", d, 31);
	Mounth = check("mounth", m, 12);
	Year = check("year", y, 3000);
}

void Date::ShowDate()
{
	std::cout << Year << '/' << Mounth << '/' << Day;
}

int Date:: get_D()
{ 
	return Day ;
}
int Date:: get_M()
{ 
	return Mounth ;
}
int Date::get_Y()
{ 
	return Year ;
}