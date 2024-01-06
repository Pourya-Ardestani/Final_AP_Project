#pragma once
#include <iostream>

class Time
{
	int Hour;
	int Minute;
public:
	Time(int , int);
	Time();
	void ResetTime(int, int);
	int get_h();
	int get_min();
	//bool operator ==(const Time & );
	bool operator==(Time& T2)
	{
		if ((Hour == T2.get_h()) && (Minute == T2.get_min()))
			return true;
		else
			return false;
	}//operator overloading
	
};
int checkh(std::string , int , int );
