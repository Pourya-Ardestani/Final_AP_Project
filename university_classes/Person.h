#pragma once
#include <iostream>

class Person
{
protected:
	int ID;
	std::string Name;

public:
	Person( std::string );
	void set_name(std::string);
	void set_ID(int i);

	std::string get_name();
	int get_ID();

};

