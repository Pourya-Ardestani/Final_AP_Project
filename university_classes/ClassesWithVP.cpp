#include "ClassesWithVP.h"

ClassesWithVP::ClassesWithVP()
{
	VideoProjector = /*false*/ true;
}

ClassesWithVP::ClassesWithVP(int nummber, int capacity, int darsId, bool videoProjector) :Classlocations(nummber, capacity, darsId)
{
	VideoProjector = videoProjector;
}
void ClassesWithVP::showInfo()const
{
	/*std::cout << "number of this class = " << NumberOfClass << std::endl;
	std::cout << "this class has " << Capacity << " person cappacity " << std::endl;
	std::cout << "IP of the dars that teach in this class is " << DarsIP << std::endl;*/
	showInfo();
	if (VideoProjector)
		std::cout << "class has video projector ";
	else
		std:: cout << "class dosen't have video projector ";
	std::cout << std::endl;
}