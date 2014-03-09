#include "stdafx.h"
#include "Bishop.h"


Bishop::Bishop(void)
{
	this->setKyHieu("Bishop");
}

string Bishop::CheckMove()
{
	if (abs(this->getnY() - this->getoY())==abs(this->getnX() - this->getoX()))
	{
		return "True";
	}
	else
	{
		return "Faile";
	}
}


