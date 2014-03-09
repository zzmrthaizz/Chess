#pragma once
#include "Cell.h"


class Queen: public Cell
{
public:
	Queen();
	string CheckMove();
};
