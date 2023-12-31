#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Time.h"


class Lessons
{
	int ID;
	std::string Name;
	std::string day;
	Time start = Time();
	Time Duration;
public:
	Lessons();
	//Lessons(int, std::string, std::string)



};

