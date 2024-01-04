#include "Classlocations.h"

Classlocations::Classlocations()
{
	NumberOfClass = 0;
	Capacity = 40;

	DarsIP = 0;

}

Classlocations::Classlocations(int nummber, int capacity, int darsId)
{
	NumberOfClass = nummber;
	Capacity = capacity;
	DarsIP = darsId;
	NumberOfClass++;
}

void Classlocations::Reset(int nummber, int capacity, int darsId)
{
	NumberOfClass = nummber;
	Capacity = capacity;
	DarsIP = darsId;
}

void Classlocations::showInfo()const
{
	std::cout << "number of this class = " << NumberOfClass << std::endl;
	std::cout << "this class has " << Capacity << " person cappacity " << std::endl;
	std::cout << "IP of the dars that teach in this class is " << DarsIP << std::endl;
	/*if (VideoProjector)
		cout << "class has video projector ";
	else
		cout << "class dosen't have video projector ";
	cout << endl;*/
}

