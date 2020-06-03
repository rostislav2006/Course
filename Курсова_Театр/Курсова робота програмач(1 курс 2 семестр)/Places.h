#pragma once
#include <iostream>
#include <string>
#include "Tickets.h"
using namespace std;
class Places :
	public Tickets
{
protected:
	
	int sit_nums_b1, sit_nums_p1, sit_nums_k1, sit_nums_b2, sit_nums_p2, sit_nums_k2, sit_nums_b3, sit_nums_p3, sit_nums_k3;
	
	string b ;
	string p;
	string k;
	
public:
	Places();
	
	~Places();

	void show_places(int x);
	 void change_sit_nums(int x);
	

};

