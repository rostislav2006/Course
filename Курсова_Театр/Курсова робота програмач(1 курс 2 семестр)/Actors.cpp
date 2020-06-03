#include "Actors.h"



Actors::Actors()
{
	path_actors = "Actors.txt";
}


Actors::~Actors()
{
}

void Actors::show_actors(int x)
{
	string line;
	if (x == 0)
	{
		read.open(path_actors, fstream::in);
		for (int i = 0; i < 2; i++)
		{
			getline(read, line);
			cout << line << endl;
		}
		read.close();
	}
	if (x == 1)
	{
		read.open(path_actors, fstream::in);
		for (int i = 0; i < 2; i++) {
			getline(read, line);
		}
		getline(read, line);
		cout << line << endl;
		getline(read, line);
		cout << line << endl;
		read.close();
	}

	if (x == 2)
	{
		read.open(path_actors, fstream::in);
		for (int i = 0; i < 4; i++) {
			getline(read, line);
		}
		getline(read, line);
		cout << line << endl;
		getline(read, line);
		cout << line << endl;
		read.close();
	}
}
		
