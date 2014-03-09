#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include "ConsoleHelper.h"
using namespace std;

class Cell
{
protected:
	int oX;
	int oY;
	int nX;
	int nY;
	string KyHieu;
	string Phe;
public:
	Cell();

	int getoX();
	void setoX(int n_oX);
	int getoY();
	void setoY(int n_oY);

	int getnX();
	void setnX(int n_nX);
	int getnY();
	void setnY(int n_nY);

	string getKyHieu();
	void setKyHieu(string n_KyHieu);

	string getPhe();
	void setPhe(string n_Phe);

	void setColorP();
	void showcell();
	virtual string CheckMove();
};

