#include "Students.h"

Students ::Students(std::string s) :Person(s)
{
	ID = ++num;
}

void Students:: set_id(int n)
{
	ID = n;
}
int Students::get_id()
{
	return ID;
}
