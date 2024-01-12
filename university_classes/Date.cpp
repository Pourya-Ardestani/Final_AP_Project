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
void Date :: set_Date(int d, int m, int y)
{
	Day = check("day", d, 31);
	Mounth = check("mounth", m, 12);
	Year = check("year", y, 3000);
}
void Date::set_Date()
{
	int d, y, m;
	std::cout << "Please Enter Day : ";
	std::cin >> d;

	std::cout << "Please Enter Mounth : ";
	std::cin >> m;

	std::cout << "Please Enter Yeae : ";
	std::cin >> y;

	Day = check("day", d, 31);
	Mounth = check("mounth", m, 12);
	Year = check("year", y, 3000);
}
bool Date::operator==(Date D2)
{
	if ((Day == D2.get_D()) && (Mounth == D2.get_M()) && (Year == D2.get_Y()))
		return true;
	else
		return false;
}