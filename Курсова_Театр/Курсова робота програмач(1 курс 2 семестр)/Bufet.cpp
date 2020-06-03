#include "Bufet.h"



Bufet::Bufet()
{
	pricecoffe = 10;
		pricewater = 5;
	pricechips = 20;
		pricecrackers = 15;
}


Bufet::~Bufet()
{
}

void Bufet::grindcoffee()
{
	g.grindcoffee();
}

bool Bufet::buy_food(int x)
{
	if (x == 0)
	{
		if (money < pricecoffe)
		{
			cout << "You haven`t money!" << endl;
			return false;
		}
		else
		cout << "You buy a coffe" << endl;
		money -= pricecoffe;
	}
	if (x == 1)
	{
		if (money < pricewater)
		{
			cout << "You haven`t money!" << endl;
			return false;
		}
		else
		cout << "You buy a water" << endl;
		money -= pricewater;
	}
	if (x == 2)
	{
		if (money < pricechips)
		{
			cout << "You haven`t money!" << endl;
			return false;
		}
		else
		cout << "You buy a chips" << endl;
		money -= pricechips;
	}
	if (x == 3)
	{
		if (money < pricecrackers)
		{
			cout << "You haven`t money!" << endl;
			return false;
		}
		else
		cout << "You buy a crackers" << endl;
		money -= pricecrackers;
	}
	
}

void Bufet::Coffemachine::grindcoffee()
{
	
			cout << "Your coffe are grind!" << endl;
		
}
