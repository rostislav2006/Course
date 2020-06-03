/*
#include <iostream>
#include <conio.h>
#include "Theater.h"
#include "Spectacl.h"
#include "Actors.h"
#include "Date.h"
#include "Places.h"
#include "Tickets.h"
#include "Genre.h"

using namespace std;


int main() {
	
	Spectacl q;
	q.rewrite_spectacl();
	
	/*
	Spectacl z;
	z.show_all_spetacl();
	Spectacl h;
	h.add_spectacl();
	h.delete_spectacl();
	Places a;
	a.change_sit_nums();
	Spectacl j;
	j.show_all_spetacl();
	Actors n;
	n.show_actors();
	Date c;
	c.show_date();
	Spectacl b;
	b.show_all_spetacl();
	Spectacl a;
	a.add_spectacl();
	
	Places gamlet(20, 30, 10);
	gamlet.set_string("balcony: ","parter: ","side: ");
	gamlet.get_string();
	gamlet.show_places();
	Places kaydashewa(40, 10, 30);
	kaydashewa.set_string("balcony: ", "parter: ", "side: ");
	kaydashewa.get_string();
	kaydashewa.show_places();
	Places romeo(50, 35, 20);
	romeo.set_string("balcony: ", "parter: ", "side: ");
	romeo.get_string();
	romeo.show_places();
	Tickets tgamlet(20);
	gamlet.change_price(20);
	Tickets tkaydashewa(40);
	tkaydashewa.change_price(40);
	Tickets tromeo(50);
	tromeo.change_price(50);
	
	

	
	_getch();
	return 0;
}
*/

#include<iostream>
#include <string>
#include<conio.h>
#include "Actors.h"
#include "Date.h"
#include "Genre.h"
#include"Places.h"
#include "Spectacl.h"
#include "Theater.h"
#include "Tickets.h"
#include "Visitor.h"
#include "Bufet.h"

using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

//#include "stdafx.h"

// from HKEY_USERS\.DEFAULT\Keyboard Layout\Preload
#define ENG_KEYBOARD_LAYOUT "00000409"
#define UKR_KEYBOARD_LAYOUT "00000422"
#define RUS_KEYBOARD_LAYOUT "00000419"

#include "stdio.h"
#include <stdlib.h>
#include <conio.h>
#include <wchar.h>
#include <windows.h>

//#define DISABLE_DEFAULT_ACTION

#define MAX_MENU_SPACE 1000
#define MAX_LENGTH_MENU_NAME 1000
#define MAX_MENU_ITEMS_COUNT 1000

void goToXY(int x, int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void clearGoToXY(int x, int y) {
	COORD topLeft = { x, y };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_BACKSPACE 8
#define KEY_ESCAPE 27

unsigned int runSpaceOp(int x, int y, int kolommen, char spaceOp[MAX_MENU_SPACE][MAX_MENU_SPACE], int rijen = MAX_MENU_SPACE)
{
	int index = 0, indey = 0, keuze, lol = MAX_MENU_SPACE;
	do {
		goToXY(index + x, indey + y);
		keuze = 0;
		keuze = _getch();
		if (keuze == 0 || keuze == 0xE0 || keuze == 224)
		{
			keuze = _getch();
			goToXY(index + x, indey + y);
			switch (keuze)
			{
			case KEY_UP:indey--;
				break;
			case KEY_LEFT: index--;
				break;
			case KEY_DOWN:indey++;
				break;
			case KEY_RIGHT: index++;
				break;
			}
			indey = (indey <= 0) ? 0 : (indey > kolommen) ? kolommen : indey;
			index = (index <= 0) ? 0 : (index > rijen) ? rijen : index;
		}
		if (keuze == 32 || (keuze >= 46 && keuze <= 57) || (keuze <= 64 && keuze >= 126))
		{
			spaceOp[index][indey] = (char)keuze;
			printf("%c", spaceOp[index][indey]);
			index++;
			index = (index <= 0) ? 0 : (index > rijen) ? rijen : index;
		}
		if (keuze == KEY_ENTER)
		{
			return indey;
		}
	} while (keuze != KEY_ESCAPE);

	return -1; //
}

void runTextOp(int x, int y, int kolommen, char spaceOp[MAX_MENU_SPACE][MAX_MENU_SPACE], int rijen = MAX_MENU_SPACE)
{
	int index = 0, indey = 0, keuze, lol = MAX_MENU_SPACE;
	do {
		goToXY(index + x, indey + y);
		keuze = 0;
		keuze = _getch();
		if (keuze == 0 || keuze == 0xE0 || keuze == 224)
		{
			keuze = _getch();
			goToXY(index + x, indey + y);
			switch (keuze)
			{
			case KEY_UP:indey--;
				break;
			case KEY_LEFT: index--;
				break;
			case KEY_DOWN:indey++;
				break;
			case KEY_RIGHT: index++;
				break;
			}
			indey = (indey <= 0) ? 0 : (indey > kolommen) ? kolommen : indey;
			index = (index <= 0) ? 0 : (index > rijen) ? rijen : index;
		}
		if (keuze == 32 || (keuze >= 46 && keuze <= 57) || (keuze <= 64 && keuze >= 126))
		{
			spaceOp[index][indey] = (char)keuze;
			printf("%c", spaceOp[index][indey]);
			index++;
			index = (index <= 0) ? 0 : (index > rijen) ? rijen : index;
		}
		if (keuze == KEY_BACKSPACE)
		{
			index = index--;
			goToXY(index + x, indey + y);
			printf(" ");
			index = (index <= 0) ? 0 : (index > rijen) ? rijen : index;
		}
		if (keuze == KEY_ENTER)
		{
			index = 0;
			indey++;
			indey = (indey >= kolommen) ? kolommen : indey++;
		}
	} while (keuze != KEY_ESCAPE);
}

void defaultAction() {
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	printf("default action");
	getchar();
#endif
}
Genre a;
Actors b;
Date c;
/*void show_date()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	
	c.show_date();
	getchar();
#endif
}
*/
/*void change_date()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	
	c.change_date();
	getchar();
#endif
}
*/
Places d;
Places xx;
Places ch;
void show_places()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	
	d.show_places(1);
	getchar();
#endif
}
/*void change_sit_nums()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	Places d;
	d.change_sit_nums();
	getchar();
#endif
}
*/
/*void get_string()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	Genre a;
	a.show_genre();
	getchar();
#endif
}
*/
Spectacl e;
Visitor k;
void add_spectacl()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	e.add_spectacl();
	getchar();
#endif
}
void show_all_spetacl()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	e.show_all_spetacl();
	getchar();
#endif
}
Tickets f;
Bufet l;
void starttickets()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	f.change_price(0);
	getchar();
#endif
}
void starttickets1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	f.change_price(1
);
	getchar();
#endif
}
void starttickets2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	f.change_price(2);
	getchar();
#endif
}
void startbuyfood()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	l.buy_food(0);
	getchar();
#endif
}
void startbuyfood1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	l.buy_food(1);
	getchar();
#endif
}
void startbuyfood2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	l.buy_food(2);
	getchar();
#endif
}
void startbuyfood3()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	l.buy_food(3);
	getchar();
#endif
}
void startbuy()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.buy_tickets(0);
	getchar();
#endif
}
void startbuy1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.buy_tickets(1);
	getchar();
#endif
}
void startbuy2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.buy_tickets(2);
	getchar();
#endif
}
void startplaces()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.show_places(0);
	getchar();
#endif
}
void startplaces1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.show_places(1);
	getchar();
#endif
}
void startplaces2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.show_places(2);
	getchar();
#endif
}
void startPlaces()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.change_sit_nums(0);
	getchar();
#endif
}
void startPlaces1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.change_sit_nums(1);
	getchar();
#endif
}
void startPlaces2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	d.change_sit_nums(2);
	getchar();
#endif
}
void startspectacl()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.show_spectacl(0);
	getchar();
#endif
}
void startspectacl1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.show_spectacl(1);
	getchar();
#endif
}
void startspectacl2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	k.show_spectacl(2);
	getchar();
#endif
}
void startdel ()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	e.delete_spectacl (0);
	getchar();
#endif
}
void startdel1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	e.delete_spectacl(1);
	getchar();
#endif
}
void startdel2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	e.delete_spectacl(2);
	getchar();
#endif
}
void startdate()
{
#ifndef DISABLE_DEFAULT_ACTION
		clearGoToXY(0, 0);

		c.show_date(0);
		getchar();
#endif
}
void startdate1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	c.show_date(1);
	getchar();
#endif
}
void startdate2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	c.show_date(2);
	getchar();
#endif
}
void startDate()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	c.change_date(0);
	getchar();
#endif
}
void startDate1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	c.change_date(1
);
	getchar();
#endif
}
void startDate2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	c.change_date(2);
	getchar();
#endif
}
void startGenre()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	a.show_genre(0);
	getchar();
#endif
}
void startGenre1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	a.show_genre(1
);
	getchar();
#endif
}
void startGenre2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	a.show_genre(2);
	getchar();
#endif
}
void startactors()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	b.show_actors(0);
	getchar();
#endif
}
void startactors1()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	b.show_actors(1);
	getchar();
#endif
}
void startactors2()
{
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);

	b.show_actors(2);
	getchar();
#endif
}
void Exit()
{
	exit(0);
}


struct MenuElement {
	char menuName[MAX_LENGTH_MENU_NAME];
	struct MenuElement * SubMenuSet;
	void(*action)();
};

extern struct MenuElement menuA[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuB[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuC[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuSpec[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuActors[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuDate[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuDate1[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuGenre[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuPlaces[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuDEL[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuTickets[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menubuyTickets[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menushowSpec[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuBufet[MAX_MENU_ITEMS_COUNT];




struct MenuElement
	baseMenu[MAX_MENU_ITEMS_COUNT] = {
		
		{ "Visitor", menuA, (void(*)())NULL },
		{ "Cashier",menuB, (void(*)())NULL},
		{ "Admin", menuC, (void(*)())NULL },
		{ "Exit", (struct MenuElement *)NULL, Exit },
		{ "", (struct MenuElement *)NULL, (void(*)())NULL }

}
, 

menuA[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", baseMenu, (void(*)())NULL },
	{ "Show all spectacl", (struct MenuElement *)NULL, show_all_spetacl },
	{ "List of places for the selected spectacl",menuSpec,(void(*)())NULL },
	{ "The genres of available spectacl ", menuGenre, (void(*)())NULL },
	{ "Date of holding",menuDate, (void(*)())NULL},
	{ "List of actors for selected spectacl",menuActors, (void(*)())NULL},
	{ "Buy tickets for spectacl",menubuyTickets, (void(*)())NULL},
	{ "Show spectacl",menushowSpec, (void(*)())NULL},
	{ "Bufet",menuBufet, (void(*)())NULL},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuSpec[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Gamlet", (struct MenuElement *)NULL, startplaces },
{"Kaydashewa simya",(struct MenuElement *)NULL,startplaces1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startplaces2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuBufet[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Coffe          | 10 UAH ", (struct MenuElement *)NULL, startbuyfood },
     {"Water          |  5 UAH",(struct MenuElement *)NULL,startbuyfood1},
     {"Chips          |  20 UAH",(struct MenuElement *)NULL,startbuyfood2},
     {"Crackers       |  15 UAH",(struct MenuElement *)NULL,startbuyfood3},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menushowSpec[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Gamlet", (struct MenuElement *)NULL, startspectacl },
{"Kaydashewa simya",(struct MenuElement *)NULL,startspectacl1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startspectacl2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menubuyTickets[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Tickets for spectacl Gamlet", (struct MenuElement *)NULL, startbuy },
{"Tickets for spectacl Kaydashewa simya",(struct MenuElement *)NULL,startbuy1},
{"Tickets for spectacl Romeo and Juliet",(struct MenuElement *)NULL,startbuy2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuActors[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Gamlet", (struct MenuElement *)NULL, startactors },
{"Kaydashewa simya",(struct MenuElement *)NULL,startactors1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startactors2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuDate[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuA, (void(*)())NULL },
	{ "Gamlet", (struct MenuElement *)NULL, startdate },
{"Kaydashewa simya",(struct MenuElement *)NULL,startdate1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startdate2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuDate1[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", menuC, (void(*)())NULL },
	{ "Gamlet", (struct MenuElement *)NULL, startDate },
{"Kaydashewa simya",(struct MenuElement *)NULL,startDate1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startDate2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuGenre[MAX_MENU_ITEMS_COUNT] = {
   { "PREV MENU", menuA, (void(*)())NULL },
   { "Gamlet", (struct MenuElement *)NULL, startGenre },
{"Kaydashewa simya",(struct MenuElement *)NULL,startGenre1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startGenre2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuPlaces[MAX_MENU_ITEMS_COUNT] = {
   { "PREV MENU", menuC, (void(*)())NULL },
   { "Gamlet", (struct MenuElement *)NULL, startPlaces },
{"Kaydashewa simya",(struct MenuElement *)NULL,startPlaces1},
{"Romeo and Juliet",(struct MenuElement *)NULL,startPlaces2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuTickets[MAX_MENU_ITEMS_COUNT] = {
   { "PREV MENU", menuC, (void(*)())NULL },
   { "Gamlet price", (struct MenuElement *)NULL, starttickets },
{"Kaydashewa simya price ",(struct MenuElement *)NULL,starttickets1},
{"Romeo and Juliet price",(struct MenuElement *)NULL,starttickets2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,
menuDEL[MAX_MENU_ITEMS_COUNT] = {
   { "PREV MENU", menuC, (void(*)())NULL },
   { "Gamlet", (struct MenuElement *)NULL, startdel },
{"Kaydashewa simya",(struct MenuElement *)NULL,startdel1 },
{"Romeo and Juliet",(struct MenuElement *)NULL,startdel2},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
,


menuB[MAX_MENU_ITEMS_COUNT] = {

	{ "PREV MENU", baseMenu, (void(*)())NULL },
	{ "Show available spectacl", (struct MenuElement *)NULL, show_all_spetacl },
	{ "List of places for the selected spectacl",menuSpec, (void(*)())NULL},
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuC[MAX_MENU_ITEMS_COUNT] = {
	{ "PREV MENU", baseMenu, (void(*)())NULL },
	{ "Show all spectacl", (struct MenuElement *)NULL, show_all_spetacl },
	{ "List of places for the selected spectacl",menuSpec, (void(*)())NULL },
	{ "Add spectacl", (struct MenuElement *)NULL, add_spectacl },
	{ "Delete spectacl", menuDEL,(void(*)())NULL },
	{ "Change ticket price", menuTickets, (void(*)())NULL},
	{ "Change the number of places for the selected spectacl",menuPlaces, (void(*)())NULL },
	{ "Change the date of the spectacl", menuDate1,(void(*)())NULL },
	{ "", (struct MenuElement *)NULL, (void(*)())NULL }

 
};

unsigned int render(struct MenuElement * menu) {
	unsigned int index = 0;

	clearGoToXY(0, 0);

	if (menu) {
		for (; menu[index].menuName[0]; ++index) {
			printf(menu[index].menuName);
			clearGoToXY(40, index);
			printf("[ ]\r\n");
		}
	}

	return --index;
}

int main() {
	struct MenuElement * menu = baseMenu;
	char spaceOp[MAX_MENU_SPACE][MAX_MENU_SPACE];

	PostMessage(
		GetForegroundWindow(),
		WM_INPUTLANGCHANGEREQUEST,
		2,
		(UINT)LoadKeyboardLayoutA(ENG_KEYBOARD_LAYOUT, KLF_ACTIVATE)
	);

	while (true) {

		unsigned int lastIndex = render(menu);
		if ((int)lastIndex == -1) {
			return 0;
		}

		unsigned int selectedIndex = runSpaceOp(41, 0, lastIndex, spaceOp, 0);
		if ((int)selectedIndex == -1) {
			return 0;
		}

		if (menu[selectedIndex].action != NULL) {
			menu[selectedIndex].action();
		}

		if (menu[selectedIndex].SubMenuSet != NULL) {
			menu = menu[selectedIndex].SubMenuSet;
		}

	}

	return 0;
}
