#pragma once
#include<iostream>
//#include "Lessons.h"
//#include "Time.h"

class Classlocations
{
	static int NumberOfClass;
	int Capacity;
	int DarsIP;

public:
	int rooz_saat[7][18];

	Classlocations(int, int = 0, int = 0);
	Classlocations();
	void Reset(int, int, int);
	void showInfo()const;
	void set_IP(int n);
	void std_rooz_saat(int, int);// baray jelo giri az tadakhol
	void show_barname();

};

