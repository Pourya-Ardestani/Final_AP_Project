#include "Lessons.h"

std::string return_day_in_string_l(int );
void show_students(std::vector <Students> );

Lessons::Lessons()
{
	Name =' ';
	Day = 0 ;
	Start.ResetTime(7,0);
	Duration.ResetTime(7,0,0,0);
	Number++;
	ID = Number;
	Teacher = ' ';
	capacituy_of_class = 0;
}

void Lessons::Set_Day(int day)
{
	Day = day ;
}

void Lessons::Set_Name(std :: string name)
{
	Name = name;
}

void Lessons ::set_capacity(int n)
{
	capacituy_of_class = n;

}

int Lessons::get_capacity()
{
	return capacituy_of_class;

}
void Lessons::ShowInfo()const
{
	std :: cout << " ID : "<< ID   << std::endl ;
	std :: cout << " Name : "<< Name << std::endl ;
	std :: cout << " Day : "<< return_day_in_string_l(Day) << std::endl ;
	std::cout << " Teacher : " << Teacher << std::endl;
	std::cout << "Class Number : " << number_of_classroom << std::endl;
	show_students(ListOfStudents);
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


void Lessons :: set_time()
{
	while(Vahed<0 || Vahed > 5)
	{
		std::cout << "how many VAHED do this class have : ";
		std::cin >> Vahed;

	}
	int m, h;
	std::cout << "start Hour :";
	std::cin >> h;
	std::cout << "minute :";
	std::cin >> m;
	Start.ResetTime(h, m);
	std::cout << "\n Please Enter how much does this class take time (time duration):";
	std::cout << "\nHour length:";
	std::cin >> h;
	std::cout << "\nminute :";
	std::cin >> m;
	Start.ResetTime(h, m , 0 , 0);

}


void Lessons :: add_student(int& n ,std::string s)
{
	Students S1(s);
	if (ListOfStudentsId.size() > 40)
	{
		std::cout << "there is no space for this student \n ERROR 'limit space in class '";
	}
	else  
	{
		ListOfStudents.push_back(s);
	}//age erroe dad bayyad ba if bene visam qabli erroe dad 
}

void Lessons :: needs_V()
{
	std::string s;
	std::cout << "does this section need Video projector ? :";
	std::cin >> s;
	if (s == "yes" || s == "Yes")
		V = true;
}
int  Lessons :: get_Day()
{
	return Day;
}
int  Lessons :: get_hour()
{
	return Start.get_h();
}
void Lessons :: set_class_number(int n)
{
	number_of_classroom = n; 
}
bool Lessons :: get_need_vp()
{
	return V;
}
int  Lessons :: get_duration_hour()
{
	return Duration.get_h();
}
std::string return_day_in_string_l(int i)
{
	switch (i)
	{
	case 0:
		return  "saturday ";
	case 1:
		return  "sunday   ";
	case 2:
		return  "monday   ";
	case 3:
		return  "tuesday  ";
	case 4:
		return  "wednesday";
	case 5:
		return  "thursday ";
	case 6:
		return  "Friday   ";

	default: return "EROreor";
	}
}

void show_students(std::vector <Students> s)
{
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		std::cout << "student " << i << " Name : " << s.at(i).get_name();
		std::cout << "student " << i << " ID : " << s.at(i).get_ID();
	}
	
}