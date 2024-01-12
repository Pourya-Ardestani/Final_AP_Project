#pragma once
#include "Lessons.h"
#include "Date.h"
class EventlyLessons :public Lessons
{
	Date Start_Date;
	int tedad_bargozari;
public: 
	EventlyLessons();
	EventlyLessons(int);
	void set_start();
	void set_tedad_bargozari( );
	
	~EventlyLessons();
	void operator =(Lessons );
	
};

