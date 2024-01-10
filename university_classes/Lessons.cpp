#include "Lessons.h"

Lessons::Lessons()
{
	Name =' ';
	Day = ' ';
	Start.ResetTime(0, 0);
	Duration.ResetTime(0, 0);
	Number++;
	ID = Number;
	Teacher = ' ';
}

void Lessons::Set_Day( std::string day)
{
	Day = day ;
}

void Lessons::Set_Name(std :: string name)
{
	Name = name;
}

void Lessons::ShowInfo()const
{
	std :: cout << " ID : "<< ID   << std::endl ;
	std :: cout << " Name : "<< Name << std::endl ;
	std :: cout << " Day : "<< Day  << std::endl ;
	std::cout << " Teacher : " + Teacher << std::endl;
}

void Lessons::Set_Teacher(std :: string  teacher)
{
	Teacher = teacher;
}


template<class T>
void print_vector(std::vector <T> s)
{
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		std::cout << i << " : " << s.at(i) << " \n";
	}
}

void Lessons:: set_time()
{
	std::cout << "how many VAHED do this class have : ";
	std::cin >> Vahed;
	
	int m, h;
	std::cout << "start Hour :";
	std::cin >> h;
	std::cout << "minute :";
	std::cin >> m;
	Start.ResetTime(h, m);

}


void Lessons::add_student(int &n)
{
	try
	{
		if (ListOfStudentsId.size() > 40)
		{
			throw;
		}
		ListOfStudentsId.push_back(n);
	}
	catch (...)
	{
		std::cout << "there is no space for this student \n ERROR 'limit space in class '";
	}
}

void Lessons::needs_V()
{
	std::string s;
	std::cout << " does this section need Video projector ? :";
	std::cin >> s;
	if (s == "yes" || s == "Yes")
		V = true;
}
std::string  Lessons::get_Day()
{
	return Day;
}
int Lessons:: get_hour()
{
	return Start.get_h();
}
//void Lessons::setLocation(std::vector <Classlocations> , )
//{
//	
//}