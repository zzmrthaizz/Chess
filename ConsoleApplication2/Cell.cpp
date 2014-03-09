#include "stdafx.h"
#include "Cell.h"


Cell::Cell()
{
	this->nX = 0;
	this->nY = 0;
	this->oX = 0;
	this->oY = 0;
	this->KyHieu = "";
}

//Get
int Cell::getnX()
{
	return this->nX;
}
int Cell::getoX()
{
	return this->oX;
}
int Cell::getnY()
{
	return this->nY;
}
int Cell::getoY()
{
	return this->oY;
}
string Cell::getKyHieu()
{
	return this->KyHieu;
}
string Cell::getPhe()
{
	return this->Phe;
}


//Set
void Cell::setnX(int n_nX)
{
	this->nX = n_nX;
}
void Cell::setoX(int n_oX)
{
	this->oX = n_oX;
}
void Cell::setnY(int n_nY)
{
	this->nY = n_nY;
}
void Cell::setoY(int n_oY)
{
	this->oY = n_oY;
}
void Cell::setKyHieu(string n_KyHieu)
{
	this->KyHieu = n_KyHieu;
}
void Cell::setPhe(string n_Phe)
{
	this->Phe = n_Phe;
}

string Cell::CheckMove()
{
	return "";
}

void Cell::setColorP()
{
			int k = this->getoX();
			int h = this->getoY();
			int m = this->getnX();
			int n = this->getnY();
			for (int i = 1; i< 4; i= i++)
			{
				for (int j = 1; j<8; j++)
				{
					ConsoleHelper::gotoxy ((k+1)*4+i-3,(h+1)*8+j);
					cout<< (char) 219;
					ConsoleHelper::gotoxy ((m+1)*4+i-3,(n+1)*8+j);
					cout<< (char) 219;
				}
			}
}



void Cell::showcell()

{				
	for (int i = 1; i< 4; i= i++)
	{
		for (int j = 1; j<8; j++)
		{
			if((this->getoX()+this->getoY()) % 2 == 0)
			{
				ConsoleHelper::SetColor(15);
				ConsoleHelper::gotoxy ((this->getoX()+1)*4+i-3,(this->getoY()+1)*8+j);
				cout<< (char) 219;
				ConsoleHelper::gotoxy((this->getoX()+1)*4-1,(this->getoY()+1)*8+2);
				if ( this->getPhe() == "D")
				{ 
					ConsoleHelper::SetColor(2);
				}
				else if ( this->getPhe() == "T")
				{ 
					ConsoleHelper::SetColor(4);
				}
				cout << this->getKyHieu();
			}
			else
				{
					ConsoleHelper::SetColor(0);
					ConsoleHelper::gotoxy ((this->getoX()+1)*4+i-3,(this->getoY()+1)*8+j);
					cout<< (char) 219;
					ConsoleHelper::gotoxy((this->getoX()+1)*4-1,(this->getoY()+1)*8+2);
					if ( this->getPhe() == "D")
					{ 
						ConsoleHelper::SetColor(2);
					}
					else if ( this->getPhe() == "T")
					{ 
						ConsoleHelper::SetColor(4);
					}
					cout << this->getKyHieu();
				}
			}
		}
}