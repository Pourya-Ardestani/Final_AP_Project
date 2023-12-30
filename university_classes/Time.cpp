#include "Time.h"

Time::Time(int h, int m)
{
	if (h < 0 || h>59)
	{
		std::cout << "the hour is not ___ Enter again :";
		std::cin >> h;
	}
	if (m < 0 || m>59)
	{
		std::cout << "the minute is not ___ Enter again :";
		std::cin >> h;
	}

	Hour = h;
	Minute = m;
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
