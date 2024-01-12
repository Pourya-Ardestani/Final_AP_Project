#include "Time.h"


Time::Time()
{
	Hour = 8;
	Minute = 0;
}
void Time::ResetTime(int h, int m,int h_limit ,int m_limit)
{
	Hour = checkh("hour", h, 18 , h_limit);
	Minute = checkh("minute", m, 59 , m_limit);
}

int checkh(std::string name, int D, int checkof ,int  check_low)
{
	while (D<0 || D>checkof || D< check_low)
	{
		std::cout << name << "is not a variable quantity Please Enter again :";
		std::cin >> D;
	}
	return D;
}


int Time::get_min()
{
	return Minute;
}
int Time::get_h()
{
	return Hour;
}