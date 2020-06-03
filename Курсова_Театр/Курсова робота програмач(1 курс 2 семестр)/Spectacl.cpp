#include "Spectacl.h"



Spectacl::Spectacl()
{
	path_spectacl = "Spectacl.txt";
	path_actors = "Actors.txt";
	ticketgamlet = 0;
	ticketkaydash = 0;
	ticketromeo = 0;

}


Spectacl::~Spectacl()
{
}



void Spectacl::add_spectacl()
{

	string new_spectcl;
	read.open(path_spectacl, fstream::out | fstream::app);
	if (!read.is_open())
	{
		cout << "Eror! File doesn`t open" << endl;
	}
	else
	{
		cout << " Enter spectacl what you want to add: " << endl;
		cin >> new_spectcl;
		spectacl.push_back(new_spectcl);
		read << endl;
		read << spectacl[3];

		cout << "Spectacl added successefully!" << endl;

		getchar();
	}
		read.close();
	}
void Spectacl::delete_spectacl(int x)
{
	string remainderspectacl;
	read.open(path_spectacl, fstream::out);
	if (!read.is_open())
	{
		cout << "Eror! File doesn`t open" << endl;
	}
	else
	{

		if (x == 0)
		{
			spectacl.erase(spectacl.begin() + 0);
			for (int i = 0; i < spectacl.size(); i++)
			{
				read << endl;
				read << spectacl[i];
			}
			cout << "Available spectacl:  " << endl;
			for (int i = 0; i < spectacl.size(); i++)
			{
				cout << spectacl[i] << endl;
			}
			read.close();

		}

		if (x == 1)
		{
			spectacl.erase(spectacl.begin() + 1);
			for (int i = 0; i < spectacl.size(); i++)
			{
				read << endl;
				read << spectacl[i];
			}
			cout << "Available spectacl:  " << endl;
			for (int i = 0; i < spectacl.size(); i++)
			{
				cout << spectacl[i] << endl;
			}
			read.close();
		}


		if (x == 2)
		{
			spectacl.erase(spectacl.begin() + 2);
			for (int i = 0; i < spectacl.size(); i++)
			{
				read << endl;
				read << spectacl[i];
			}
			cout << "Available spectacl:  " << endl;
			for (int i = 0; i < spectacl.size(); i++)
			{
				cout << spectacl[i] << endl;
			}
			read.close();
		}

	}
}

void Spectacl::show_all_spetacl()          // robut
{
	string line;
	read.open(path_spectacl, fstream::in);
	while (!read.eof())
	{
		getline(read, line);
		cout <<"|" <<line << endl;
		cout << "|------------------|" << endl;
	}
	read.close();
}

bool Spectacl::show_spectacl(int x)
{
	if (x == 0)
	{
		if ((check_tickets(0) == false))
		{
			return false;
		}
		else

		cout << "The performance begins" << endl;
		cout << "3" << endl;
		Sleep(1000);
		cout << "2" << endl;
		Sleep(1000);
		cout << "1" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Andriy Berejnuy: 'Be or not be this is the questions'" << endl;
		
		Sleep(1000);
		cout << "Ksenia Voronnaya: 'You turned your eyes to the soul with your pupils, and there are black spots everywhere, and nothing can wash them off!'" << endl;
		cout << "------------------------------------------------------" << endl;
		Sleep(1000);
		cout << "Antrakt! " << endl;
		cout << "Waiting ..." << endl;
		Sleep(6000);
		cout << "------------------------------------------------------" << endl;
		cout<< "Andriy Berejnuy: 'Is it more honorable to suffer in your thoughts?'" << endl;
		Sleep(1000);
		cout << "Ksenia Voronnaya: 'To my sick soul, where sin lives, Everything seems to be the forerunner of evil adversity'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "                           Actors go to bow  " << endl;
		cout << "Actors: 'Thank you for your attention'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Spectacl is over" << endl;
		return true;
	}
	if (x == 1)
	{
		if ((check_tickets(1) == false))
		{
			return false;
		}
		else
		cout << "The performance begins" << endl;
		cout << "3" << endl;
		Sleep(1000);
		cout << "2" << endl;
		Sleep(1000);
		cout << "1" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Vasyl Dilovyi: 'Drunk to talk - just to waste time'" << endl;

		Sleep(1000);
		cout << "Antonio Banderas: 'I love that the girl was a bit spittoo to have a heart with pepper'" << endl;
		cout << "------------------------------------------------------" << endl;
		Sleep(1000);
		cout << "Antrakt! " << endl;
		cout << "Waiting ..." << endl;
		Sleep(6000);
		cout << "------------------------------------------------------" << endl;
		cout << "Vasyl Dilovyi: 'Take Chemku. This is like a brykne, and you will go over!'" << endl;
		Sleep(1000);
		cout << "Antonio Banderas: 'They do not say well enough: the girl is like a willow: where will the post, it will be accepted'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "                             Actors go to bow " << endl;
		cout << "Actors: 'Thank you for your attention'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Spectacl is over" << endl;
		return true;
	}
	if (x == 2)
	{
		if ((check_tickets(2) == false))
		{
			return false;
		}
		else
		cout << "The performance begins" << endl;
		cout << "3" << endl;
		Sleep(1000);
		cout << "2" << endl;
		Sleep(1000);
		cout << "1" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Vladyslav Svychuk: 'Plague plow on both of your homes I became food for worms because of you ...'" << endl;

		Sleep(1000);
		cout << "Pavlo Zyma: 'In moments of Despair come down for an eternity hour ...'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Antrakt! " << endl;
		cout << "Waiting ..." << endl;
		Sleep(6000);
		cout << "------------------------------------------------------" << endl;
		cout << "Vladyslav Svychuk: 'But what a shine I see on the balcony??'" << endl;
		Sleep(1000);
		cout << "Pavlo Zyma: 'In my discouragement, the book is the same food'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "'Actors go to bow '" << endl;
		cout << "Actors: 'Thank you for your attention'" << endl;
		Sleep(1000);
		cout << "------------------------------------------------------" << endl;
		cout << "Spectacl is over" << endl;
		return true;
	}
}

bool Spectacl::check_tickets(int x)
{
	if (x == 0)
	{
		if (ticketgamlet == 0)
		{
			cout << "Sorry but you haven`t tickets for this spectacl" << endl;
			return false;
		}
		else
			ticketgamlet --;
		cout << "The amount of your tickets " << ticketgamlet << endl;
	}
	if (x == 1)
	{
		if (ticketkaydash == 0)
		{
			cout << "Sorry but you haven`t tickets for this spectacl" << endl;
			return false;
		}
		else
			ticketkaydash--;
		cout << "The amount of your tickets " << ticketkaydash << endl;
	}
	if (x == 2)
	{
		if (ticketromeo == 0)
		{
			cout << "Sorry but you haven`t tickets for this spectacl" << endl;
			return false;
		}
		else
			ticketromeo--;
		cout << "The amount of your tickets " << ticketromeo << endl;
	}

}

	