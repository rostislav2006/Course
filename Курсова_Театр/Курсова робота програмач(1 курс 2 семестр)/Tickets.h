#pragma once
#include <iostream>
#include <string>
#include "Spectacl.h"
using namespace std;


class Tickets :
	public Spectacl
{
public:
	int priceGamlet,priceKaydash,priceRomeo;
	Tickets();
	~Tickets();

	void change_price(int x); 
	      

};

