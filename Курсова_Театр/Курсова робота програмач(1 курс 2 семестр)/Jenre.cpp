#include "Genre.h"



Genre::Genre()
{
}

Genre::~Genre()
{
}

void Genre::show_genre()
{
	int x;
	cout << "Choose your spectacl:  " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "The genre of Gamlet -  Drama" << endl;
		break;
	case 2:
		cout << "The genre of Kaydashewa simya -  Comedy" << endl;
		break;
	case 3:
		cout << "The genre of Romeo and Juliet -  Tragedy" << endl;
		break;
	default:
		break;
	}
}
