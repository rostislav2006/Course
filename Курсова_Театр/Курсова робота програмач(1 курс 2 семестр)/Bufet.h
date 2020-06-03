#pragma once
#include "Theater.h"
#include <iostream>
#include "Visitor.h"

using namespace std;
class Bufet :
	public Visitor
{
private:
	class Coffemachine 
	{
	public:
		void grindcoffee();
		
	};
	Coffemachine g;
public:
	int pricecoffe, pricewater, pricechips, pricecrackers;
	Bufet();
	~Bufet();
	void grindcoffee();
	bool buy_food(int x);
	
};

