#include "Person.h"

Person::Person(std::string s)
{
	Name = s;
}
void Person::set_name(std::string s)
{
	Name = s;
}

void Person:: set_ID(int i)
{
	ID = i;
}


int Person::get_ID()
{
	return ID;
}
std::string Person::get_name()
{
	return Name;
}