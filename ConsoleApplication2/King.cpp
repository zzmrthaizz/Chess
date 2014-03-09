#include "stdafx.h"
#include "King.h"


King::King()
{
	this->setKyHieu("King");
}



//Check move
string King::CheckMove()
{
	if (abs(this->getnX() - this->getoX()) <= 1 && abs(this->getnY() - this->getoY()) <= 1)
	{
		return "True";
	}
	else
	{
		return "Faile";
	}
}
