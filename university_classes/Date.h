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
	bool operator==(Date);
	int get_D();
	int get_M();
	int get_Y();
	void set_Date(int , int , int );

};


