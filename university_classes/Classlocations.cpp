#include "Classlocations.h"

int ret_addad(std::string );
void return_day_in_string(int i);

Classlocations::Classlocations()
{
	NumberOfClass = num++;
	Capacity = ((rand() % (8 - 4 + 1)) + 4) * 5;// mezrabi az 5 va bozorg tar az 20 ta 40 
	DarsIP = 0;
	VP = false;
}

Classlocations::Classlocations( int capacity, int darsId)
{
	Capacity = capacity;
	DarsIP = darsId;
	NumberOfClass =++num ; // number of classes automaticly get set after making object
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

int Classlocations:: get_number()const
{
	return NumberOfClass;
}

void Classlocations::show_barname()
{
	std::cout << "\t       7-8     8-9    9-10    10-11   11-12   12-13   13-14   14-15   15-16   16-17   17-18 \n";
	for (int i = 0; i < 7; i++)
	{
		return_day_in_string(i);
		std::cout << ":\t";
		for (int j = 0; j < 11 ; j++)
		{
			std::cout << rooz_saat[i][j] << "\t";
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

void return_day_in_string(int i)
{
	switch (i)
	{
	case 0:
		std::cout << "saturday "; break;
	case 1:
		std::cout << "sunday   "; break;
	case 2:
		std::cout << "monday   "; break;
	case 3:
		std::cout << "tuesday  "; break;
	case 4:
		std::cout << "wednesday"; break;
	case 5:
		std::cout << "thursday "; break;
	case 6:
		std::cout << "Friday   "; break;

	default: std::cout<<"F";
	}
}