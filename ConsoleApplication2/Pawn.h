#pragma once
#include "Cell.h"


class Pawn: public Cell
{
public:
	Pawn();
	string CheckMove();
};
