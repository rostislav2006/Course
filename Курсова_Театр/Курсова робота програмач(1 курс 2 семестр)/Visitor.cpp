#include "Visitor.h"



Visitor::Visitor():Tickets()
{
	money = 100;
	
}


Visitor::~Visitor()
{
}

bool Visitor::buy_tickets(int x)
{
	if (x == 0)
	{
		if (money < priceGamlet)
		{
			cout << "You don`t have a money" << endl;
			return false;
		}
		else
			cout << "You buy a ticket for spectacl Gamlet" << endl;
			money -= priceGamlet;
			cout << "Your remainder " << money << endl;
			ticketgamlet++;
		
		return true;
	}
	if (x == 1)
	{
		if (money < priceKaydash)
		{
			cout << "You don`t have a money" << endl;
			return false;
		}
		else
			cout << "You buy a ticket for spectacl Kaydashewa simya" << endl;
			money -= priceKaydash;
			cout << "Your remainder " << money << endl;
			ticketkaydash++;
			
			return true;
			
	}
	if (x == 2)
	{
		if (money < priceRomeo)
		{
			cout << "You don`t have a money" << endl;
			return false;
		}
		else
			cout << "You buy a ticket for spectacl Romeo and Juliet" << endl;
			money -= priceRomeo;
			cout << "Your remainder " << money << endl;
			ticketromeo++;
			
			return true;
	}
}

bool Visitor::enterpass(int x)
{
	if (x == 0)
	{
		cout << "Enter pass:  " << endl;
		cin >> pass;
		if (pass == 123)
		{
			return true;
		}
		else
			return false;
	}
	if (x == 1)
	{
		cout << "Enter pass:  " << endl;
		cin >> pass;
		if (pass == 123)
		{
			return true;
		}
		else
			return false;
	}
}

