#include "Classlocations.h"

Classlocations::Classlocations()
{
	NumberOfClass = 0;
	Capacity = ((rand() % (8 - 4 + 1)) + 4) * 5;

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
void Classlocations::set_IP(int n)
{
	DarsIP = n;
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

