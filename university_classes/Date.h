#pragma once
#include<iostream>

int check(std::string name, int D, int checkof);

class Date
{
	int Day;
	int Mounth;
	int Year;
public:
	Date(int d, int y, int m)
	{
		if (d < 0 || d>31)
		{
			std::cout << "day is a variable quantity Please Enter again :";
			std::cin >> d;
		}
		Day = check("day",d,31);
		Mounth = check("mounth",m,12);
		Year = check("year",y,3000);
	}
	Date()
	{
		Day = 0;
		Mounth = 0;
		Year = 0;
	}
	void ShowDate()
	{

	}
};

int check(std::string name,int D, int checkof)
{
	while (D<0 || D>checkof)
	{
		std::cout << name <<"is a variable quantity Please Enter again :";
		std::cin >> D;
	}
	return D;
}