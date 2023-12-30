#include <iostream>
using namespace std;

class UniversityClassRooms 
{
	int NumberOfClass;
	int Capacity;
	bool VideoProjector;
	int DarsIP;
public :
	UniversityClassRooms();
};

int main()
{

}

UniversityClassRooms::UniversityClassRooms(int nummber ,int capacity ,bool Vidproj , int darsId)
{
	NumberOfClass = nummber;
	Capacity= capacity ;
	VideoProjector= Vidproj;
	DarsIP = darsId;
}