#pragma once
class Time
{
	int Hour;
	int Minute;
public:
	Time(int , int);
};

Time::Time(int h, int m)
{
	Hour = h;
	Minute =m ;
}