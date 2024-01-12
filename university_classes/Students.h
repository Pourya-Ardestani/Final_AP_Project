#pragma once
#include "Person.h"

class Students :public Person
{

public:
	Students(std::string s);
	void set_id(int );
	int get_id();

};

