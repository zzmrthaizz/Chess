
#pragma once
#include "time.h"
#include <windows.h>
#include <conio.h>


class ConsoleHelper
{
public:
	ConsoleHelper(void);
	~ConsoleHelper(void);

	// Set background color
	static void SetBGColor(WORD color);

	// clear screen
	static void clrscr(void);

	// go to [x, y] in console 
	static void gotoxy(short row, short col);

	// Set cursor color
	static void SetColor(WORD color);

	// show cursor based on invi. invi = false --> hide cursor
	static void showCursor(bool invi);

	// sleep (stop process/program) for mseconds 
	static void sleep(unsigned int mseconds);
};

