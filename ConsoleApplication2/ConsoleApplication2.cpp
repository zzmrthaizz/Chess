// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConsoleHelper.h"
#include <iostream>
#include "Game.h"

using namespace std;

int Game::CountturnG = 0;

int _tmain(int argc, _TCHAR* argv[])
{

	 Game b;
	 b.XepCo();
	 b.showBanco();
	 b.start();

	_getch();
/*
	ConsoleHelper::SetBGColor(0);
	ConsoleHelper::SetColor(14);
	ConsoleHelper::gotoxy(3, 35);
	cout << "CHESS PROJECT";

	ConsoleHelper::SetColor(15);
	ConsoleHelper::gotoxy (7, 25);
	cout << "1. New Game		<Press 1>";
	ConsoleHelper::gotoxy (9, 25);
	cout << "2. Load Game		<Press 2>";
	ConsoleHelper::gotoxy (11, 25);
	cout << "3. How to use		<Press 3>";
	ConsoleHelper::gotoxy (13, 25);
	cout << "4. Custom Game		<Press 4>";
	ConsoleHelper::gotoxy (15, 25);
	cout << "5. Quit game		<Press 5>";

	int i;
	//Ke Khung
	ConsoleHelper::SetColor(10);
	ConsoleHelper::SetBGColor(0);
	ConsoleHelper::gotoxy (1, 10);
	cout << (char) 201;
	ConsoleHelper::gotoxy (1, 70);
	cout << (char) 187;
	ConsoleHelper::gotoxy (18, 10);
	cout << (char) 200;
	ConsoleHelper::gotoxy (18, 70);
	cout << (char) 188;

	for (i = 11; i < 70; i++)
	{
		ConsoleHelper::gotoxy(1, i);
		cout << (char) 205;
		ConsoleHelper::gotoxy(18, i);
		cout << (char) 205;
	}
	for (i = 2; i < 18; i++)
	{
		ConsoleHelper::gotoxy(i, 10);
		cout << (char) 186;
		ConsoleHelper::gotoxy(i, 70);
		cout << (char) 186;
	}

	ConsoleHelper::SetColor (9);
	ConsoleHelper::gotoxy (20, 27);
	cout << "SV:	 Ngo Ngoc Truong Han";
	ConsoleHelper::gotoxy (21, 27);
	cout << "MSSV: 0912138";

	ConsoleHelper::showCursor(false);

	_getch();
*/
	return 0;
}

