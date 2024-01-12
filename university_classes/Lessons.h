#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Time.h"
#include "Students.h"

#include "Classlocations.h"



class Lessons
{
protected:
	static int Number;
	int ID;
	int Day;
	int number_of_classroom;
	int Vahed;
	std::string Name;
	std::string Teacher;
	//std::vector <int> ListOfStudentsId;///////////pakapakpakapako
	Time Start;
	Time Duration;
	bool V; // does need video projector ?
	std::vector<Students> ListOfStudents;
	int capacituy_of_class;

public:
	Lessons();
	void Set_Day(int);//3
	void Set_Name(std::string);//1
	void Set_Teacher(std::string);//2
	void ShowInfo()const;
	void add_student(int& , std::string);//7
	void set_time();//4
	void set_class_number(int); // *6
	void needs_V();//5
	void set_capacity(int );
	bool get_need_vp();
	bool check_students_Id(int);
	int  get_Day();
	int  get_hour();
	int  get_ID();
	int  get_capacity();
	int  get_duration_hour();
	void get_x_for_file(std::string &);
	~Lessons();
	
};
	template<class T>
	void print_vector(std::vector<T>);
