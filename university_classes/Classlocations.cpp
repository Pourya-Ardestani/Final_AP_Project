#include "Classlocations.h"

int ret_addad(std::string );

Classlocations::Classlocations()
{
	NumberOfClass = num++;
	Capacity = ((rand() % (8 - 4 + 1)) + 4) * 5;
	DarsIP = 0;
	VP = false;
}

Classlocations::Classlocations( int capacity, int darsId)
{
	Capacity = capacity;
	DarsIP = darsId;
	NumberOfClass =++num ;
}

void Classlocations ::VP_set()
{
	VP = true;
}

void Classlocations::Reset(bool v, int capacity, int darsId)
{
	VP = v;
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
}

void Classlocations::show_barname()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			std::cout << rooz_saat[i][j];
		}
		std::cout << std::endl;
	}
}



void Classlocations::set_rooz_saat(std::string s  , int L)
{
	int rooz = ret_addad(s);
	int hour = L;
	try
	{
		if (rooz_saat[rooz][hour] = 1)
		{
			throw;
		}
		rooz_saat[rooz][hour] = 1;
		std::cout << "class setting Done !";

	}
	catch (...)
	{
		std::cout << "this class has been taken befor at this time ";
	}
}

int ret_addad(std::string s )
{
	if (s == "saturday")
	{
		return 0;
	}
	else if (s == "sunday")
	{
		return 1;
	}
	else if (s == "monday")
	{
		return 2;
	}
	else if (s == "tuesday")
	{
		return 3;
	}
	else if (s == "wednesday")
	{
		return 4;
	}
	else if (s == "thursday")
	{
		return 5;
	}
	else if (s == "friday")
	{
		return 6;
	}
	else
		return -1;
}
