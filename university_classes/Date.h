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
};

