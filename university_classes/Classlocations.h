#pragma once
#include<iostream>
#include "Lessons.h"
//#include "Time.h"

int ret_addad(std::string );

class Classlocations
{
	static int  num;
	int NumberOfClass;
	int Capacity;
	int DarsIP;
	bool VP;

public:
	int rooz_saat[7][18] = {0};

	Classlocations( int , int );
	Classlocations();
	void VP_set();
	void Reset(bool, int, int);
	void showInfo()const;
	void set_IP(int n);
	
	void set_rooz_saat(std::string, int);
	void show_barname();
};

