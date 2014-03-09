#include "stdafx.h"
#include "ConsoleHelper.h"
#include "iostream"
using namespace std;



ConsoleHelper::ConsoleHelper(void)
{
}


ConsoleHelper::~ConsoleHelper(void)
{
}

void ConsoleHelper::SetBGColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

void ConsoleHelper::clrscr(void)
{
	system("cls");
}

void ConsoleHelper::gotoxy(short row,short col)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {col, row};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

void ConsoleHelper::SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

void ConsoleHelper::showCursor(bool invi)
{
	CONSOLE_CURSOR_INFO CurInf;
	CurInf.dwSize = 10;
	CurInf.bVisible = invi;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInf);
}

void ConsoleHelper::sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}