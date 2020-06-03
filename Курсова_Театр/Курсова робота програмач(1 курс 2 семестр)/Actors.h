#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Spectacl.h"

class Actors :
	public Spectacl
{
public:
	Actors();
	~Actors();
	
	void show_actors(int x);
};

