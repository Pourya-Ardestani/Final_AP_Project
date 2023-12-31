#include "Time.h"

Time::Time(int h, int m)
{
	Hour = checkh("hour", h, 18);
	Minute = checkh("minute", m, 59);
}

Time::Time()
{
	Hour = 0;
	Minute = 0;
}
void Time::ResetTime(int h, int m)
{
	Time(h, m);
}
int checkh(std::string name, int D, int checkof)
{
	while (D<0 || D>checkof)
	{
		std::cout << name << "is not a variable quantity Please Enter again :";
		std::cin >> D;
	}
	return D;
}