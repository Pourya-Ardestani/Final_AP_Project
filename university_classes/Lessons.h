#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Time.h"
//#include "Classlocations.h"
#include "ClassesWithVP.h"


class Lessons
{
	static int Number;
	int ID;
	std::string Name;
	std::string Day;
	std::string Teacher;
	Time Start;
	Time Duration;
	Classlocations Mahal_bargozari;
public:
	Lessons();
	void Set_Day (std:: string );
	void Set_Name(std::string);
	void Set_Teacher(std::string);
	void ShowInfo()const;
};
