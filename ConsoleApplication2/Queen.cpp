#include "stdafx.h"
#include "Queen.h"


Queen::Queen(void)
{
	this->setKyHieu("Queen");
}

string Queen::CheckMove()
{
	if ((this->getnX() <=7 && (this->getnY() == this->getoY())) || (this->getnY() <= 7 && (this->getnX() == this->getoX())) || (abs(this->getnY() - this->getoY())==abs(this->getnX() - this->getoX())))
	{
		return "True";
	}
	else
	{
		return "Faile";
	}
}
