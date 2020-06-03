#include<iostream>
#include<conio.h>
#include <string>
#include "Actors.h"
#include "Date.h"
#include "Genre.h"
#include"Places.h"
#include "Spectacl.h"
#include"Theater.h"
#include"Tickets.h"
using namespace std;


#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

//#include "stdafx.h"

// from HKEY_USERS\.DEFAULT\Keyboard Layout\Preload
#define ENG_KEYBOARD_LAYOUT "00000409"
#define UKR_KEYBOARD_LAYOUT "00000422"
#define RUS_KEYBOARD_LAYOUT "00000419"

#include "stdio.h"
#include "conio.h"
#include <stdlib.h>
#include <wchar.h>
#include <windows.h>

//#define DISABLE_DEFAULT_ACTION

#define MAX_MENU_SPACE 1000
#define MAX_LENGTH_MENU_NAME 100
#define MAX_MENU_ITEMS_COUNT 100

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
void WITHDRAW() {
#ifndef DISABLE_DEFAULT_ACTION
	clearGoToXY(0, 0);
	
	_getch();
#endif
}
void Exit()
{
	exit(0);
}

struct MenuElement {
	char menuName[1000];
	struct MenuElement * SubMenuSet;
	void(*action)();
};

extern struct MenuElement menuA[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuB[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuC[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuD[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuE[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuF[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuG[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuH[MAX_MENU_ITEMS_COUNT];
extern struct MenuElement menuK[MAX_MENU_ITEMS_COUNT];

struct MenuElement
	baseMenu[MAX_MENU_ITEMS_COUNT] = {

	  { "Schedule", menuA, (void(*)())NULL },
	  { "information about cinema", menuB, (void(*)())NULL },
	  { "WiFi pass", menuC, (void(*)())NULL },
	  { "Ententainment", menuD, (void(*)())NULL },
	  { "FoodDrink", menuE, (void(*)())NULL },
	  { "Exit", (struct MenuElement *)NULL, Exit },
	  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuA[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Choose and buy ticket", menuH,(void(*)())NULL },
  { "Information about films  ", menuK,(void(*)())NULL},
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuB[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Get information about cinema", (struct MenuElement *)NULL, defaultAction },
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuC[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Get WiFi password", (struct MenuElement *)NULL, defaultAction },
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuD[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Play Air-hockey", (struct MenuElement *)NULL, defaultAction },
  { "Play Need for speed", (struct MenuElement *)NULL, defaultAction },
  { "Play Ping-pong", (struct MenuElement *)NULL, defaultAction },
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}, menuE[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Wirhdraw money",(struct MenuElement *)NULL, defaultAction  },
  { "Buy Food",  menuG, (void(*)())NULL },
  { "Buy Drink",   menuF, (void(*)())NULL},
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}, menuF[MAX_MENU_ITEMS_COUNT] = {
{ "Back to previous", menuE, (void(*)())NULL },
{ "Coca-Cola", (struct MenuElement *)NULL, defaultAction  },
{ "Pepsi", (struct MenuElement *)NULL, defaultAction  },
{ "Shweeeepsss", (struct MenuElement *)NULL, defaultAction },
{ "Oranje juice", (struct MenuElement *)NULL, defaultAction },
{ "Mineral water", (struct MenuElement *)NULL, defaultAction },
{ "Fanta", (struct MenuElement *)NULL, defaultAction },
{ "Bear", (struct MenuElement *)NULL, defaultAction },
{ "", (struct MenuElement *)NULL, (void(*)())NULL }
},
menuG[MAX_MENU_ITEMS_COUNT] = {
{ "Back to previous", menuE, (void(*)())NULL },
{ "Potato Chips Lays ", (struct MenuElement *)NULL, defaultAction},
{ "Popcorn",(struct MenuElement *)NULL, defaultAction},
{ "Cotton candy", (struct MenuElement *)NULL, defaultAction },
{ "Apple", (struct MenuElement *)NULL, defaultAction },
{ "Banana", (struct MenuElement *)NULL, defaultAction },
{ "Ice cream", (struct MenuElement *)NULL, defaultAction },
{ "", (struct MenuElement *)NULL, (void(*)())NULL }
}
, menuH[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Avengers : The End", (struct MenuElement *)NULL, defaultAction },
  { "Kung-fu Panda 4", (struct MenuElement *)NULL, defaultAction },
  { "Alpha", (struct MenuElement *)NULL, defaultAction },
  { "Love in big city", (struct MenuElement *)NULL, defaultAction },
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
}

, menuK[MAX_MENU_ITEMS_COUNT] = {
  { "Back to previous", baseMenu, (void(*)())NULL },
  { "Avengers : The End", (struct MenuElement *)NULL, defaultAction },
  { "Kung-fu Panda 4", (struct MenuElement *)NULL, defaultAction },
  { "Alpha", (struct MenuElement *)NULL, defaultAction },
  { "Love in big city", (struct MenuElement *)NULL, defaultAction },
  { "", (struct MenuElement *)NULL, (void(*)())NULL }
};


unsigned int render(struct MenuElement * menu) {
	unsigned int index = 0;

	clearGoToXY(0, 0);

	if (menu) {
		for (; menu[index].menuName[0]; ++index) {
			printf(menu[index].menuName);
			clearGoToXY(31, index);
			printf("[ ]\r\n");
		}
	}

	return --index;
}

int main() {
	/*Cinema CCinema("Miracle", "CCinemathebest", "Paradise", "Alpha", "Space", 100, 30, 270);

	string a; int b; int c; int choose; int choose1; int choose2; int choose3;

	cout << "Hello my friend! What is your name?:";
	cin >> a;
	cout << "How much money do you have?:";
	cin >> b;
	cout << "How much money do you have on your card?:";
	cin >> c;

	*/
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
			_getch();
			return 0;
		}

		unsigned int selectedIndex = runSpaceOp(32, 0, lastIndex, spaceOp, 0);
		if ((int)selectedIndex == -1) {
			_getch();
			return 0;
		}

		if (menu[selectedIndex].action != NULL) {
			menu[selectedIndex].action();
		}

		if (menu[selectedIndex].SubMenuSet != NULL) {
			menu = menu[selectedIndex].SubMenuSet;
		}

	}
	_getch();
	return 0;
}