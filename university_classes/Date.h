#pragma once
#include<iostream>

int check(std::string , int , int );

class Date
{
	int Day;
	int Mounth;
	int Year;
public:
	Date(int, int, int);
	Date();
	void ShowDate();
	bool operator==(Date D2)
	{
		if ((Day == D2.get_D()) && (Mounth == D2.get_M()) && (Year == D2.get_Y()))
			return true;
		else
			return false;
	}
	int get_D();
	int get_M();
	int get_Y();
};


