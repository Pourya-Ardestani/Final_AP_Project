#pragma once
#include <iostream>

class Time
{
	int Hour;
	int Minute;
public:
	
	Time();
	void ResetTime(int, int , int=7 ,int=0);
	int get_h();
	int get_min();
	//bool operator ==(const Time & );
	bool operator==(Time& );
	
};
int checkh(std::string , int , int  , int);
