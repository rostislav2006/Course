#include "Tickets.h"



Tickets::Tickets():Spectacl()
{
	priceGamlet = 40;
	priceKaydash = 30;
	priceRomeo = 50;
	
}


Tickets::~Tickets()
{
}

void Tickets::change_price(int x)
{
	int new_price;
	if (x == 0)
	{
		cout << priceGamlet << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter new price:  " << endl;
		cin >> new_price;
		cout << "Spectacl - Gamlet:  " << new_price << endl;
		priceGamlet = new_price;
	}

	if (x == 1)
	{
		

		cout <<priceKaydash << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter new price:  " << endl;
		cin >> new_price;
		cout << "New price:  " << new_price << endl;
		cout << "Spectacl - Kaydashewa simya:  " << new_price << endl;
		priceKaydash = new_price;

	}

	if (x == 2)
	{
		cout <<priceRomeo << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter new price:  " << endl;
		cin >> new_price;
		cout << "New price:  " << new_price << endl;
		cout << "Spectacl - Romeo and Juliet:  " << new_price << endl;
		priceRomeo = new_price;
	}

}


