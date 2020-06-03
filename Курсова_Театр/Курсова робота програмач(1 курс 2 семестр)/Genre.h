#pragma once
#include <iostream>
#include <string>
#include "Spectacl.h"
#include "Actors.h"
using namespace std;


class Genre :
	public Spectacl
{
protected:
	string genre1, genre2, genre3;
public:
	Genre();
	~Genre();
	Actors b;

	void show_genre(int x);
};

