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
	Classlocations Mahal_bargozari;
	std::vector <int> ListOfStudentsId;
public:
	Lessons();
	void Set_Day (std:: string );
	void Set_Name(std::string);
	void Set_Teacher(std::string);
	void ShowInfo()const;
	void add_student(int &);
};
	template<class T>
	void print_vector(std::vector<T>);
