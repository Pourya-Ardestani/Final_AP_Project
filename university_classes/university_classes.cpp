#include <iostream>
#include "Lessons.h"
#include "Time.h"

using namespace std;

class UniversityClassRooms 
{
	int NumberOfClass;
	int Capacity;
	bool VideoProjector;
	int DarsIP;
public :
	UniversityClassRooms(int ,int ,bool ,int=0);
	UniversityClassRooms();
	void Reset(int, int, bool, int);
	void showInfo()const;
};

int main()
{
	int n = 100;
	UniversityClassRooms classWithoutVidProj[10] = { UniversityClassRooms(),UniversityClassRooms(),
													 UniversityClassRooms(),UniversityClassRooms(),
													 UniversityClassRooms(),UniversityClassRooms(),
													 UniversityClassRooms(),UniversityClassRooms(),
													 UniversityClassRooms(),UniversityClassRooms()};

	UniversityClassRooms classWithVidProj(11,35,true);
	for (int i = 0; i < 10; i++)
	{
		classWithoutVidProj[i].showInfo();
		cout << "---------------------------"<<endl;
	}

	cout << "++++++++++++++++++\n";
	classWithVidProj.showInfo();

}

UniversityClassRooms::UniversityClassRooms()
{
	NumberOfClass = 0;
	Capacity = 40;
	VideoProjector = false;
	DarsIP = 0;

}

UniversityClassRooms::UniversityClassRooms(int nummber ,int capacity ,bool Vidproj , int darsId)
{
	NumberOfClass = nummber;
	Capacity= capacity ;
	VideoProjector= Vidproj;
	DarsIP = darsId;
}

void UniversityClassRooms::Reset(int nummber, int capacity, bool Vidproj, int darsId)
{
	NumberOfClass = nummber;
	Capacity = capacity;
	VideoProjector = Vidproj;
	DarsIP = darsId;
}

void UniversityClassRooms::showInfo()const
{
	cout << "number of this class = " << NumberOfClass <<endl;
	cout << "this class has "<< Capacity <<" person cappacity " << endl;
	cout << "IP of the dars that teach in this class is "<< DarsIP << endl;
	if (VideoProjector)
		cout << "class has video projector ";
	else
		cout << "class dosen't have video projector ";
	cout << endl;
}