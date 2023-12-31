//#include <iostream>
//#include "Lessons.h"
//#include "Time.h"
#include "Classlocations.h"
#include "ClassesWithVP.h"

using namespace std;


int main()
{
	Classlocations classWithoutVidProj[10] = { Classlocations(),Classlocations(),
											   Classlocations(),Classlocations(),
											   Classlocations(),Classlocations(),
											   Classlocations(),Classlocations(),
											   Classlocations(),Classlocations()};

	//Classlocations<list> saaal ;

	ClassesWithVP classWithVidProj(11,35,0,true);
	for (int i = 0; i < 10; i++)
	{
		classWithoutVidProj[i].showInfo();
		cout << "---------------------------"<<endl;
	}

	cout << "++++++++++++++++++\n";
	classWithVidProj.showInfo2();

}
