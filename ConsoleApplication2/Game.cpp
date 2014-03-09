#include "stdafx.h"
#include "Game.h"



Game::Game()
{
}


//Dat co len ban co
void Game::XepCo()
{
	for (int i = 0; i<8;i++)
		{
			for (int j=0; j<8; j++)
			{
				BanCo[i][j] = new Cell();
				BanCo[i][j]->setoX(i);
				BanCo[i][j]->setoY(j);
			}
		}



	for (int i = 1; i < 8; i = i+5)
		for (int j = 0; j<8; j ++)
		{
			BanCo[i][j] = new Pawn();
			BanCo[i][j]->setoX(i);
			BanCo[i][j]->setoY(j);
		}

	for (int j = 0; j<8; j ++)
	{
		BanCo[1][j]->setPhe("T");
	}
	for (int j = 0; j<8; j ++)
	{
		BanCo[6][j]->setPhe("D");
	}
	BanCo[0][0] = new Rook();
	BanCo[0][0]->setPhe("T");
	BanCo[0][0]->setoX(0);
	BanCo[0][0]->setoY(0);
	BanCo[0][7] = new Rook();
	BanCo[0][7]->setPhe("T");
	BanCo[0][7]->setoX(0);
	BanCo[0][7]->setoY(7);
	BanCo[7][0] = new Rook();
	BanCo[7][0]->setPhe("D");
	BanCo[7][0]->setoX(7);
	BanCo[7][0]->setoY(0);
	BanCo[7][7] = new Rook();
	BanCo[7][7]->setPhe("D");
	BanCo[7][7]->setoX(7);
	BanCo[7][7]->setoY(7);

	BanCo[0][2] = new Bishop();	
	BanCo[0][2]->setPhe("T");
	BanCo[0][2]->setoX(0);
	BanCo[0][2]->setoY(2);
	BanCo[0][5] = new Bishop();	
	BanCo[0][5]->setPhe("T");
	BanCo[0][5]->setoX(0);
	BanCo[0][5]->setoY(5);
	BanCo[7][2] = new Bishop();	
	BanCo[7][2]->setPhe("D");
	BanCo[7][2]->setoX(7);
	BanCo[7][2]->setoY(2);
	BanCo[7][5] = new Bishop();	
	BanCo[7][5]->setPhe("D");
	BanCo[7][5]->setoX(7);
	BanCo[7][5]->setoY(5);

	BanCo[0][1] = new Knight();	
	BanCo[0][1]->setPhe("T");
	BanCo[0][1]->setoX(0);
	BanCo[0][1]->setoY(1);
	BanCo[0][6] = new Knight();		
	BanCo[0][6]->setPhe("T");
	BanCo[0][6]->setoX(0);
	BanCo[0][6]->setoY(6);
	BanCo[7][1] = new Knight();	
	BanCo[7][1]->setPhe("D");
	BanCo[7][1]->setoX(7);
	BanCo[7][1]->setoY(1);
	BanCo[7][6] = new Knight();	
	BanCo[7][6]->setPhe("D");
	BanCo[7][6]->setoX(7);
	BanCo[7][6]->setoY(6);

	BanCo[0][4] = new King();
	BanCo[0][4]->setPhe("T");
	BanCo[0][4]->setoX(0);
	BanCo[0][4]->setoY(4);
	BanCo[7][3] = new King();
	BanCo[7][3]->setPhe("D");
	BanCo[7][3]->setoX(7);
	BanCo[7][3]->setoY(3);
	BanCo[0][3] = new Queen();
	BanCo[0][3]->setPhe("T");
	BanCo[0][3]->setoX(0);
	BanCo[0][3]->setoY(3);
	BanCo[7][4] = new Queen();
	BanCo[7][4]->setPhe("D");
	BanCo[7][4]->setoX(7);
	BanCo[7][4]->setoY(4);


	pointermove = new Cell();
	this->pointermove->setoX(4);
	this->pointermove->setoY(4);
	this->pointermove->setnX(4);
	this->pointermove->setnY(4);
}

void Game::Move()
{
/*	
	int n_oX;
	string t_oX;
	int n_oY;
	int n_nX;
	string t_nX;
	int n_nY;
	ConsoleHelper::gotoxy(37,10);




	cout << "Nhap quan muon di chuyen: "<<endl;
	
	
	ConsoleHelper::gotoxy(38,10);
	cout << "Chu: ";
	cin >> t_oX;
	if (t_oX == "A")
	{
		n_oX = 0;
	}
	else if (t_oX == "B")
	{
		n_oX = 1;
	}
	else if (t_oX == "C")
	{
		n_oX = 2;
	}
	else if (t_oX == "D")
	{
		n_oX = 3;
	}
	else if (t_oX == "E")
	{
		n_oX = 4;
	}
	else if (t_oX == "F")
	{
		n_oX = 5;
	}
	else if (t_oX == "G")
	{
		n_oX = 6;
	}
	else if (t_oX == "H")
	{
		n_oX = 7;
	}

	ConsoleHelper::gotoxy(39,10);
	cout << "So: ";
	cin >> n_oY;
	n_oY =n_oY-1;
	
	
	this->BanCo[n_oX][n_oY]->setoX(n_oX);
	this->BanCo[n_oX][n_oY]->setoY(n_oY);
	
	
	ConsoleHelper::gotoxy(40,10);
	cout << "Nhap nuoc di: " <<endl;
	ConsoleHelper::gotoxy(41,10);
	cout << "Chu: ";
	cin >> t_nX;
	if (t_nX == "A")
	{
		n_nX = 0;
	}
	else if (t_nX == "B")
	{
		n_nX = 1;
	}
	else if (t_nX == "C")
	{
		n_nX = 2;
	}
	else if (t_nX == "D")
	{
		n_nX = 3;
	}
	else if (t_nX == "E")
	{
		n_nX = 4;
	}
	else if (t_nX == "F")
	{
		n_nX = 5;
	}
	else if (t_nX == "G")
	{
		n_nX = 6;
	}
	else if (t_nX == "H")
	{
		n_nX = 7;
	}
	
	ConsoleHelper::gotoxy(42,10);
	cout << "So: ";
	cin >> n_nY;
	n_nY= n_nY-1;
	this->BanCo[n_oX][n_oY]->setnX(n_nX);
	this->BanCo[n_oX][n_oY]->setnY(n_nY);
	*/

	int spacecount = 0;
	while (spacecount == 0)
	{
		char c = _getch();
		if (c == 'w' )
		{
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
			pointermove->setoX(pointermove->getoX()-1);
			pointermove->setnX(pointermove->getoX());
			if(CountturnG %2 == 0)
			{
				ConsoleHelper::SetColor(2);
				pointermove->setColorP();
			}
			else
			{
				ConsoleHelper::SetColor(4);
				pointermove->setColorP();
			}
		}
		else if (c == 's' )
		{
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
			pointermove->setoX(pointermove->getoX()+1);
			pointermove->setnX(pointermove->getoX());
			if(CountturnG %2 == 0)
			{
				ConsoleHelper::SetColor(2);
				pointermove->setColorP();
			}
			else
			{
				ConsoleHelper::SetColor(4);
				pointermove->setColorP();
			}
		}
		else if (c == 'a' )
		{
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
			pointermove->setoY(pointermove->getoY()-1);
			pointermove->setnY(pointermove->getoY());
			if(CountturnG %2 == 0)
			{
				ConsoleHelper::SetColor(2);
				pointermove->setColorP();
			}
			else
			{
				ConsoleHelper::SetColor(4);
				pointermove->setColorP();
			}
		}
		else if (c == 'd' )
		{
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
			pointermove->setoY(pointermove->getoY()+1);
			pointermove->setnY(pointermove->getoY());
			if(CountturnG %2 == 0)
			{
				ConsoleHelper::SetColor(2);
				pointermove->setColorP();
			}
			else
			{
				ConsoleHelper::SetColor(4);
				pointermove->setColorP();
			}
		}
		else if (c == ' ' )
		{
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->setoX(this->pointermove->getoX());
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->setoY(this->pointermove->getoY());
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
			this->pointermove->setnX(this->pointermove->getoX());
			this->pointermove->setnY(this->pointermove->getoY());
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->setnX(this->pointermove->getnX());
			this->BanCo[pointermove->getoX()][pointermove->getoY()]->setnY(this->pointermove->getnY());
			spacecount = spacecount + 1;
			
		}
		else {NULL;}
		
	}
		
	while (spacecount == 1)
	{
			char c = _getch();
			if (c == 'w' )
			{
				this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
				pointermove->setnX(pointermove->getnX()-1);
				if(CountturnG %2 == 0)
				{
					ConsoleHelper::SetColor(2);
					pointermove->setColorP();
				}
				else
				{
					ConsoleHelper::SetColor(4);
					pointermove->setColorP();
				}
			}
			else if (c == 's' )
			{
				this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
				pointermove->setnX(pointermove->getnX()+1);
				if(CountturnG %2 == 0)
				{
					ConsoleHelper::SetColor(2);
					pointermove->setColorP();
				}
				else
				{
					ConsoleHelper::SetColor(4);
					pointermove->setColorP();
				}
			}
			else if (c == 'a' )
			{
				this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
				pointermove->setnY(pointermove->getnY()-1);
				if(CountturnG %2 == 0)
				{
					ConsoleHelper::SetColor(2);
					pointermove->setColorP();
				}
				else
				{
					ConsoleHelper::SetColor(4);
					pointermove->setColorP();
				}
			}
			else if (c == 'd' )
			{
				this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
				pointermove->setnY(pointermove->getnY()+1);
				if(CountturnG %2 == 0)
				{
					ConsoleHelper::SetColor(2);
					pointermove->setColorP();
				}
				else
				{
					ConsoleHelper::SetColor(4);
					pointermove->setColorP();
				}
			}
			else if (c == ' ' )
			{
				this->BanCo[pointermove->getoX()][pointermove->getoY()]->setnX(this->pointermove->getnX());
				this->BanCo[pointermove->getoX()][pointermove->getoY()]->setnY(this->pointermove->getnY());


				if (this->BanCo[pointermove->getoX()][pointermove->getoY()]->CheckMove() == "True" && (this->BanCo[pointermove->getoX()][pointermove->getoY()]->getPhe() != this->BanCo[pointermove->getnX()][pointermove->getnY()]->getPhe()) && (this->BanCo[pointermove->getoX()][pointermove->getoY()]->getPhe() == checkturn))
				{
					this->BanCo[pointermove->getnX()][pointermove->getnY()] = this->BanCo[pointermove->getoX()][pointermove->getoY()];
					this->BanCo[pointermove->getnX()][pointermove->getnY()]->setoX(pointermove->getnX());
					this->BanCo[pointermove->getnX()][pointermove->getnY()]->setoY(pointermove->getnY());
					this->BanCo[pointermove->getoX()][pointermove->getoY()] = new Cell();
					this->BanCo[pointermove->getoX()][pointermove->getoY()]->setoX(pointermove->getoX());
					this->BanCo[pointermove->getoX()][pointermove->getoY()]->setoY(pointermove->getoY());
					this->BanCo[pointermove->getoX()][pointermove->getoY()]->showcell();
					this->pointermove->setoX(pointermove->getnX());
					this->pointermove->setoY(pointermove->getnY());
		
				}
				else
				{
					ConsoleHelper::gotoxy(37,20);
					cout << "Can't move, press anykey to continue" << endl;
					this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
					this->pointermove->setnX(pointermove->getoX());
					this->pointermove->setnY(pointermove->getoY());
					
					_getch();
					this->Move();	
				}
				this->BanCo[pointermove->getnX()][pointermove->getnY()]->showcell();
				spacecount = spacecount + 1;				
			}
			
			else {NULL;}
			
	}


	
	
}




//bat dau va kiem tra ket thuc tran dau
void Game::start()
{
	int CKing = 0;
	for (int i = 0; i<8;i++)
	{
		for (int j = 0; j< 8;j ++)
		{
			if (this->BanCo[i][j]->getKyHieu() == "King")
			{
				CKing = CKing + 1;
			}
		}
	}
	if (CKing == 2)
	{
		if (this->CountturnG % 2 == 0)
		{
			checkturn = "D";
			this->Move();
			CountturnG = CountturnG+1;
			this->start();			
		}
		else
		{
			checkturn = "T";
			this->Move();
			CountturnG = CountturnG+1;
			this->start();	
		}
	}
	else
	{
		for (int i = 0; i<8;i++)
		{
			for (int j = 0; j< 8;j ++)
			{
				if (this->BanCo[i][j]->getKyHieu() == "King")
				{
					if (this->BanCo[i][j]->getPhe() == "T")
					{
						cout << "Phe Trang thang"<<endl;
					}
					else
					{
						cout << "Phe Den thang" <<endl;
					}
				}
			}
		}
	}
}


//Hien ban co
void Game::showBanco()
{
			//Ke khung ban co
			ConsoleHelper::SetColor(15);
			ConsoleHelper::SetBGColor(0);
			ConsoleHelper::gotoxy (1, 8);
			cout << (char) 201;
			ConsoleHelper::gotoxy (1, 72);
			cout << (char) 187;
			ConsoleHelper::gotoxy (33, 8);
			cout << (char) 200;
			ConsoleHelper::gotoxy (33, 72);
			cout << (char) 188;
			ConsoleHelper::gotoxy (3,6);
			cout << "A";
			ConsoleHelper::gotoxy (7,6);
			cout << "B";
			ConsoleHelper::gotoxy (11,6);
			cout << "C";
			ConsoleHelper::gotoxy (15,6);
			cout << "D";
			ConsoleHelper::gotoxy (19,6);
			cout << "E";
			ConsoleHelper::gotoxy (23,6);
			cout << "F";
			ConsoleHelper::gotoxy (27,6);
			cout << "G";
			ConsoleHelper::gotoxy (31,6);
			cout << "H";
			ConsoleHelper::gotoxy (35,12);
			cout << "1";
			ConsoleHelper::gotoxy (35,20);
			cout << "2";
			ConsoleHelper::gotoxy (35,28);
			cout << "3";
			ConsoleHelper::gotoxy (35,36);
			cout << "4";
			ConsoleHelper::gotoxy (35,44);
			cout << "5";
			ConsoleHelper::gotoxy (35,52);
			cout << "6";
			ConsoleHelper::gotoxy (35,60);
			cout << "7";
			ConsoleHelper::gotoxy (35,68);
			cout << "8";
			for (int i = 9; i < 72; i++)
			{
				ConsoleHelper::gotoxy(1, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(5, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(9, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(13, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(17, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(21, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(25, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(29, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(33, i);
				cout << (char) 205;
			}
			for (int i = 2; i < 33; i++)
			{
				ConsoleHelper::gotoxy(i, 8);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 16);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 24);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 32);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 40);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 48);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 56);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 64);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 72);
				cout << (char) 186;
			}

			//khung intro
			ConsoleHelper::gotoxy (39, 16);
			cout << (char) 201;
			ConsoleHelper::gotoxy (39, 64);
			cout << (char) 187;
			ConsoleHelper::gotoxy (49, 16);
			cout << (char) 200;
			ConsoleHelper::gotoxy (49, 64);
			cout << (char) 188;
			for (int i = 17; i < 64; i++)
			{
				ConsoleHelper::gotoxy(39, i);
				cout << (char) 205;
				ConsoleHelper::gotoxy(49, i);
				cout << (char) 205;
			}
			for (int i = 40; i < 49; i++)
			{
				ConsoleHelper::gotoxy(i, 16);
				cout << (char) 186;
				ConsoleHelper::gotoxy(i, 64);
				cout << (char) 186;
			}
			ConsoleHelper::gotoxy(41, 35);
			cout << "HOW TO PLAY";
			ConsoleHelper::gotoxy(43, 18);
			cout << "w: move up";
			ConsoleHelper::gotoxy(43, 46);
			cout << "s: move down";
			ConsoleHelper::gotoxy(44, 18);
			cout << "a: move left";
			ConsoleHelper::gotoxy(44, 46);
			cout << "d: to move right";
			ConsoleHelper::gotoxy(46, 27);
			cout << "Press space to select";


			// Ve background ban co
			for (int k = 0; k<8; k++)
			{
				cout <<""<<endl;
				for (int h = 0; h<8; h++)
				{
					this->BanCo[k][h]->showcell();
				}
			}

				

/*
				for (int k = 1; k<8; k = k+2)
				{
					for (int i = 2; i<5; i++)
					{
						for (int j= k*8+1;j<k*8+8;j++)
						{
							ConsoleHelper::gotoxy (i,j);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+8,j);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+16,j);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+24,j);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+4,j+8);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+12,j+8);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+20,j+8);
							cout<< (char) 219;
							ConsoleHelper::gotoxy (i+28,j+8);
							cout<< (char) 219;
						}
					}
				}

				*/


// Hien pointer

	int k = this->pointermove->getoX();
	int h = this->pointermove->getoY();
	int m = this->pointermove->getnX();
	int n = this->pointermove->getnY();
	ConsoleHelper::SetColor(5);
	for (int i = 1; i< 4; i= i++)
		{
			for (int j = 1; j<8; j++)
			{
				if(CountturnG %2 == 0)
				{
					ConsoleHelper::SetColor(2);
					ConsoleHelper::gotoxy ((k+1)*4+i-3,(h+1)*8+j);
					cout<< (char) 219;
					ConsoleHelper::gotoxy ((m+1)*4+i-3,(n+1)*8+j);
					cout<< (char) 219;
				}
				else
				{
					ConsoleHelper::SetColor(4);
					ConsoleHelper::gotoxy ((k+1)*4+i-3,(h+1)*8+j);
					cout<< (char) 219;
					ConsoleHelper::gotoxy ((m+1)*4+i-3,(n+1)*8+j);
					cout<< (char) 219;
				}

			}
		}
}





/*
void Game::Pointermove()
{
	Cell a;
	a.setoY(4);
	a.setoX(4);
	int spacecount = 0;
	while (spacecount = 0)
	{
		char c = cin.get();
		if (c == 'w' )
		{
			a.setoX(a.getoX()-1);
		}
		else if (c == 's' )
		{
			a.setoX(a.getoX()+1);
		}
		else if (c == 'a' )
		{
			a.setoX(a.getoY()-1);
		}
		else if (c == 'd' )
		{
			a.setoX(a.getoY()+1);
		}
		else if (c == ' ' )
		{
			a.setoX(this->BanCo[a.getoX()][a.getoY()]->getoX);
			a.setoY(this->BanCo[a.getoX()][a.getoY()]->getoY);
			a.setnX(this->BanCo[a.getoX()][a.getoY()]->getoX);
			a.setnY(this->BanCo[a.getoX()][a.getoY()]->getoY);
			spacecount = spacecount + 1;
		}
		else {NULL;}
	}
		
	while (spacecount = 1)
	{
			char c = cin.get();
			if (c == 'w' )
			{
				a.setnX(a.getnX()-1);
			}
			else if (c == 's' )
			{
				a.setnX(a.getnX()+1);
			}
			else if (c == 'a' )
			{
				a.setnY(a.getnY()-1);
			}
			else if (c == 'd' )
			{
				a.setnY(a.getnY()+1);
			}
			else if (c == ' ' )
			{
				a.setnX(this->BanCo[a.getnX()][a.getnY()]->getnX);
				a.setnY(this->BanCo[a.getnX()][a.getnY()]->getnY);
				spacecount = spacecount + 1;
			}
			else {NULL;}
	}
}
*/