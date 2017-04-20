#include "mapa.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>

using namespace std;

Mapa::Mapa()
{
}

void Mapa::importaMapa()
{
	ifstream mapas("doc//mapa.txt");
	string auxiliar;
	int i,j;

	for(i = 0; i < 20; i++)
	{
		getline(mapas,auxiliar);
		for( j = 0; j < 50; j++)
		{
			this->local[i][j]=auxiliar[j];
			this->iniciamapa[i][j]=auxiliar[j];
		}
	}
	mapas.close();
}

void Mapa::PrintaMapa()
{
	for(int i = 0; i < 20; i++)
	{
		for(int u = 0; u < 50; u++)
		{
    	printw("%c", this->local[i][u]);
      this->local[i][u] = this->iniciamapa[i][u];
      if(u >= 49)
			{
      	printw("\n");
			}
    }
  }
}

char Mapa::Detectora(int posy, int posx)
{
	char sprite;
	sprite = this->iniciamapa[posy][posx];
	return sprite;
}

void Mapa::addElemento(char forma, int posy, int posx)
{
	this->local[posy][posx] = forma;
}

void Mapa::Constroi(char forma,int posy, int posx)
{
	this->iniciamapa[posy][posx] = forma;
}
char Mapa::Detect(int posy, int posx)
{
	char sprite;
	sprite = this->local[posy][posx];
	return sprite;
}
