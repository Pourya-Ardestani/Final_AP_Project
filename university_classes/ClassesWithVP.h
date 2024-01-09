#pragma once
#include "Classlocations.h"

class ClassesWithVP : public Classlocations
{
	bool VideoProjector;
public:
	ClassesWithVP();
	ClassesWithVP(int, int, int, bool);
	void showInfo()const;
};
