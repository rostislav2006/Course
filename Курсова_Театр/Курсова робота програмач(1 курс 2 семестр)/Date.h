#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Tickets.h"
class Date :
	public Tickets
{
public:
	Date();
	~Date();
	vector <string> DATE = { "20.05.2018","25.05.2018","30.05.2018" };
	void show_date(int x);
	void change_date(int x);
};

