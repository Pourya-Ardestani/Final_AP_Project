#include "ClassesWithVP.h"

ClassesWithVP::ClassesWithVP()
{
	VideoProjector = false;
}

ClassesWithVP::ClassesWithVP(int nummber, int capacity, int darsId, bool videoProjector) :Classlocations(nummber, capacity, darsId)
{
	VideoProjector = videoProjector;
}
void ClassesWithVP::showInfo2()const
{/*
	cout << "number of this class = " << NumberOfClass << endl;
	cout << "this class has " << Capacity << " person cappacity " << endl;
	cout << "IP of the dars that teach in this class is " << DarsIP << endl;*/
	showInfo();
	if (VideoProjector)
		std::cout << "class has video projector ";
	else
		std:: cout << "class dosen't have video projector ";
	std::cout << std::endl;
}