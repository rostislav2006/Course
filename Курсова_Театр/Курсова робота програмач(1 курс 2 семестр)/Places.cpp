#include "Places.h"


Places::Places()
{
	b = "balcony: ";
	p = "parter: ";
	k = "side: ";



	sit_nums_b1 = 5;
	sit_nums_k1 = 10;
	sit_nums_p1 = 17;

	sit_nums_b2 = 10;
	sit_nums_k2 = 20;
	sit_nums_p2 = 30;

	sit_nums_b3 = 20;
	sit_nums_k3 = 23;
	sit_nums_p3 = 21;



}

Places::~Places()
{
}

void Places::show_places(int x)
{


	if (x == 0)
	{
		
		cout << b << "         |" << sit_nums_b1 << endl;
		cout << "-------------------" << endl;
		cout << p << "          |" << sit_nums_p1 << endl;
		cout << "-------------------" << endl;
		cout << k << "            |" << sit_nums_k1 << endl;
		cout << "-------------------" << endl;
	}
	 if (x == 1)
	{
		
		 cout << b << "         |" << sit_nums_b2 << endl;
		 cout << "-------------------" << endl;
		 cout << p << "          |" << sit_nums_p2 << endl;
		 cout << "-------------------" << endl;
		 cout << k << "            |" << sit_nums_k2 << endl;
		 cout << "-------------------" << endl;

	}

	if(x==2)
	{
		
		cout << b << "         |" << sit_nums_b3 << endl;
		cout << "-------------------" << endl;
		cout << p << "          |" << sit_nums_p3 << endl;
		cout << "-------------------" << endl;
		cout << k << "            |" << sit_nums_k3 << endl;
		cout << "-------------------" << endl;
	}
	
	}
	



void Places::change_sit_nums(int x)
{


	int new_sit_nums_b, new_sit_nums_p, new_sit_nums_k;
	
	if (x == 0)
	{
		show_places(0);
		cout << "------------------------------" << endl;
		cout << "Enter new places in  " << b << endl;
		cin >> new_sit_nums_b;
		cout << "Enter new places " << p << endl;
		cin >> new_sit_nums_p;
		cout << "Enter new places " << k << endl;
		cin >> new_sit_nums_k;
		cout << "New places for spectacl Gamlet: " << b << new_sit_nums_b << "   " << p << new_sit_nums_p << "   " << k << new_sit_nums_k << endl;
		sit_nums_b1 = new_sit_nums_b;
		sit_nums_p1 = new_sit_nums_p;
		sit_nums_k1 = new_sit_nums_k;
		
	}
	if (x == 1)
	{
		show_places(1);
		cout << "Enter new places in  " << b << endl;
		cin >> new_sit_nums_b;
		cout << "Enter new places " << p << endl;
		cin >> new_sit_nums_p;
		cout << "Enter new places " << k << endl;
		cin >> new_sit_nums_k;
		cout << "New places for spectacl Gamlet: " << b << new_sit_nums_b << "   " << p << new_sit_nums_p << "   " << k << new_sit_nums_k << endl;
		sit_nums_b2 = new_sit_nums_b;
		sit_nums_p2 = new_sit_nums_p;
		sit_nums_k2 = new_sit_nums_k;
	}
	if (x == 2)
	{
		show_places(2);
		cout << "Enter new places in  " << b << endl;
		cin >> new_sit_nums_b;
		cout << "Enter new places " << p << endl;
		cin >> new_sit_nums_p;
		cout << "Enter new places " << k << endl;
		cin >> new_sit_nums_k;
		cout << "New places for spectacl Romeo and Juliet: " << b << new_sit_nums_b << "   " << p << new_sit_nums_p << "   " << k << new_sit_nums_k << endl;
		sit_nums_b3 = new_sit_nums_b;
		sit_nums_p3 = new_sit_nums_p;
		sit_nums_k3 = new_sit_nums_k;
	}
}
