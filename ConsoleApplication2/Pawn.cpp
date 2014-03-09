#include "stdafx.h"
#include "Pawn.h"


Pawn::Pawn(void)
{
	this->setKyHieu("Pawn");
}

string Pawn::CheckMove()
{
	if ((abs(this->getnX() - this->getoX()) <= 1 && (this->getnY() == this->getoY())) || ((this->getoX() == 1 || this->getoX() == 6) && (abs(this->getnX()-this->getoX()) <=2) && (this->getoY() == this->getnY())) || (abs(this->getoX()-this->getnX()) <=1 && abs(this->getoY()-this->getnY()) <= 1))
	{
		return "True";
	}
	else
	{
		return "Faile";
	}
}
