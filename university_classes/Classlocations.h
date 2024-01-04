#pragma once
#include "Lessons.h"
#include "Time.h"

class Classlocations
{
	static int NumberOfClass;
	int Capacity;
	int DarsIP;
	int saeat[30][5][10] = { 0 };
public:
	Classlocations(int, int=0, int = 0);
	Classlocations();
	void Reset(int, int, int);
	void showInfo()const;
};



