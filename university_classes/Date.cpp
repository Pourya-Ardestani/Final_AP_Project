#include "Date.h"

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
	if (d < 0 || d>31)
	{
		std::cout << "day is a variable quantity Please Enter again :";
		std::cin >> d;
	}
	Day = check("day", d, 31);
	Mounth = check("mounth", m, 12);
	Year = check("year", y, 3000);
}
Date::Date()
{
	Day = 0;
	Mounth = 0;
	Year = 0;
}
void Date::ShowDate()
{
	std::cout << Year << '/' << Mounth << '/' << Day;
}