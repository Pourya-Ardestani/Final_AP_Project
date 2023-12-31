#pragma once
#include <iostream>
//#include "Date.h"

class Time
{
	int Hour;
	int Minute;
public:
	Time(int , int);
	Time();
	void ResetTime(int, int);
};
int checkh(std::string , int , int );