#pragma once
#include "Cell.h"


class Bishop: public Cell
{
public:
	Bishop();
	string CheckMove();
};
