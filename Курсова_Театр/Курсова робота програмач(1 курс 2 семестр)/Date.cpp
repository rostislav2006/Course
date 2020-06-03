#include "Date.h"



Date::Date()
{
	path_date = "Date.txt";
}


Date::~Date()
{
}

void Date::show_date(int x)
{
	string date;


	if (x == 0)
	{
		read.open(path_date, fstream::in);

		read >> date;
		cout << date << endl;
		read.close();
	}
	if (x == 1)
	{
		read.open(path_date, fstream::in);

		getline(read, date);
		getline(read, date);
		cout << date << endl;
		read.close();
	}
	if (x == 2)
	{
		read.open(path_date, fstream::in);
		getline(read, date);
		getline(read, date);
		getline(read, date);
		cout << date << endl;
		read.close();
	}
}

void Date::change_date(int x)
{
	string date;
	
	if (x == 0)
	{
		cout << "Enter new date: " << endl;
		cin >> date;
		read.open(path_date, fstream::out);
		DATE.erase(DATE.begin() + 0);
		DATE.insert(DATE.begin(), date);

		for (int i = 0; i < DATE.size(); i++)
		{
			read << DATE[i];
			read << endl;

		}
		read.close();
	}
	if (x == 1)
	{
		cout << "Enter new date: " << endl;
		cin >> date;
		read.open(path_date, fstream::out);
		DATE.erase(DATE.begin() + 1);
		DATE.insert(DATE.begin()+1, date);

		for (int i = 0; i < DATE.size(); i++)
		{
			read << DATE[i];
			read << endl;

		}
		read.close();
	}
	if (x == 2)
	{
		cout << "Enter new date: " << endl;
		cin >> date;
		read.open(path_date, fstream::out);
		DATE.erase(DATE.begin() + 2);
		DATE.insert(DATE.begin()+2, date);

		for (int i = 0; i < DATE.size(); i++)
		{
			read << DATE[i];
			read << endl;

		}
		read.close();
	}
}
