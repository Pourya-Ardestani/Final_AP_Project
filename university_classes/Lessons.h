#pragma once
#include <iostream>
#include <string>
#include <vector>
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
	Classlocations * Mahal_bargozari;
	std::vector <int> ListOfStudentsId;
	int Vahed;
	bool V; // does need video projector ?

public:
	Lessons();
	void Set_Day(std::string);//3
	void Set_Name(std::string);//1
	void Set_Teacher(std::string);//2
	void ShowInfo()const;
	void add_student(int&);//7
	void set_time();//4
	void setLocation(int );//6
	void needs_V();//5
};
	template<class T>
	void print_vector(std::vector<T>);
