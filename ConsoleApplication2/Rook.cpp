#include "stdafx.h"
#include "Rook.h"


Rook::Rook(void)
{
	this->setKyHieu("Rook");
}

string Rook::CheckMove()
{
	if ((this->getnX() <=7 && (this->getnY() == this->getoY())) || (this->getnY() <= 7 && (this->getnX() == this->getoX())))
	{
		return "True";
	}
	else
	{
		return "Faile";
	}
}
