#include "Genre.h"

Genre::Genre()
{
	genre1 = "Drama";
	genre2 = "Comedy";
	genre3 = "Tragedy";
}




Genre::~Genre()
{
}

void Genre::show_genre(int x)
{
	
	if (x == 0)
	{
		cout << "-----------------" << endl;
		cout << "      " <<genre1 << endl;
	}
	if (x == 1)
	{
		cout << "-----------------" << endl;
		cout << "     " << genre2 << endl;
	}
	if (x == 2)
	{
		cout << "-----------------" << endl;
		cout << "     " << genre3 << endl;
	}
}
