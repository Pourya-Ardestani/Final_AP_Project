#pragma once
#include "Person.h"

class Students :public Person
{
	static int num;
public:
	Students(std::string s);
	void set_id(int );
	int get_id();

};

