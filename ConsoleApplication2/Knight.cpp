#include "stdafx.h"
#include "Knight.h"


Knight::Knight(void)
{
	this->setKyHieu("Knight");
}


string Knight::CheckMove()
{
	if ((abs(this->getnX() - this->getoX())== 2 && abs(this->getnY() - this->getoY())==1) || (abs(this->getnX() - this->getoX())==1 && abs(this->getnY() - this->getoY())==2))
	{
		
		return "True";
	}
	else
	{
		return "Faile";
	}
}
