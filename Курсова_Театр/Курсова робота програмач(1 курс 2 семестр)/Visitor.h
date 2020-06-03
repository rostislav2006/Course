#pragma once
#include "Tickets.h"
#include <Windows.h>
#include <iostream>
using namespace std;
class Visitor :
	public Tickets
{
public:
	int pass;
	int money;
	Visitor();
	~Visitor();

	bool buy_tickets(int x);
	bool enterpass(int x);
};

