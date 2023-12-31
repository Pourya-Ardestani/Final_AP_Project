#pragma once
#include "Lessons.h"
#include "Time.h"

class Classlocations
{
	int NumberOfClass;
	int Capacity;
	int DarsIP;
public:
	Classlocations(int, int, int = 0);
	Classlocations();
	void Reset(int, int, int);
	void showInfo()const;
};
