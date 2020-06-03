#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Theater.h"
#include <vector>
#include <Windows.h>
#include <iomanip>
using namespace std;
class Spectacl :
	public Theater
	
{
protected:
	string path_spectacl;
	string path_date;
	string path_actors;
	fstream read;
	fstream write;
public:
	int ticketgamlet, ticketkaydash, ticketromeo;
	Spectacl();
	~Spectacl();
	vector <string> spectacl = { "Gamlet","Kaydashewa simya","Romeo and Juliet" };
	vector <string> actors = { "Andriy Berejnuy" , "Mykola Jadan", "Vasyl Dilovyi" ,"Antonio Banderas","Vladyslav Svychuk","Pavlo Zyma" };
	

	void add_spectacl();
	void delete_spectacl(int x);
	void show_all_spetacl();
	bool show_spectacl(int x);
	bool check_tickets(int x);
};

