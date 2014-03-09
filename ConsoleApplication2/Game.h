#pragma once
#include <iostream>
#include "King.h"
#include "Pawn.h"
#include "Rook.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include <string>
#include "ConsoleHelper.h"
using namespace std;

class Game
{
public:
	Game();
	Cell*BanCo[8][8];
	Cell*pointermove;
	void start ();
	void showBanco();
	void Move();
	void XepCo();
	void showpointer();
	static int CountturnG;
	string checkturn;
//	void Pointermove();
//	void Player1;
//	void Player2;
};

