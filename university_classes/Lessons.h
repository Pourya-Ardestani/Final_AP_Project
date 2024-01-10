#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Time.h"

#include "Classlocations.h"



class Lessons
{
	static int Number;
	int ID;
	std::string Name;
	std::string Day;
	std::string Teacher;
	Time Start;
	Time Duration;
	//Classlocations  Mahal_bargozari;
	int number_of_classroom;
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
	//void setLocation(vector<Classlocations>&);//6
	void set_class_number(int); // *6
	void needs_V();//5
	std::string get_Day();
	int get_hour();
	bool get_need_vp();
	
};
	template<class T>
	void print_vector(std::vector<T>);
