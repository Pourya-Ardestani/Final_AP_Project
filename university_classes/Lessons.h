#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Time.h"


class Lessons
{
	static int Number;
	int ID;
	std::string Name;
	std::string Day;
	Time Start;
	Time Duration;
public:
	Lessons();
	void Set_Day (std:: string );
	void Set_Name(std::string);
	void ShowInfo()const;
};
