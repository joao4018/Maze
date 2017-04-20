#include <iostream>
#include <stdio.h>
#include <string>
#include <ncurses.h>
#include "desenhar.hpp"
#include "mapa.hpp"
#include "jogador.hpp"
#include "fstream"


using namespace std;
Desenhar::Desenhar()
{
}

void Desenhar::ImportaInicio()
{

  	ifstream Inicio("doc//inicio.txt");
  	string auxiliar;
  	int i,j;

  	for(i = 0; i < 20; i++)
  	{
  		getline(Inicio,auxiliar);
  		for( j = 0; j < 80; j++)
  		{
  			this->locala[i][j]=auxiliar[j];

  		}
  	}
  	Inicio.close();

}
void Desenhar::ImportaDerrota()
{

  	ifstream derrota("doc//derrota.txt");
  	string auxiliar;
  	int i,j;

  	for(i = 0; i < 8; i++)
  	{
  		getline(derrota,auxiliar);
  		for( j = 0; j < 70; j++)
  		{
  			this->derrota[i][j]=auxiliar[j];

  		}
  	}
  	derrota.close();

}
void Desenhar::ImportaVitoria()
{

  	ifstream vitoria("doc//vitoria.txt");
  	string auxiliar;
  	int i,j;

  	for(i = 0; i < 9; i++)
  	{
  		getline(vitoria,auxiliar);
  		for( j = 0; j < 123; j++)
  		{
  			this->vitoria[i][j]=auxiliar[j];

  		}
  	}
  	vitoria.close();

}

void Desenhar::PrintaInicio()
{

  for(int i = 0; i < 20; i++)
	{
		for(int u = 0; u < 80; u++)
		{
    	printw("%c", this->locala[i][u]);

      if(u >= 79)
			{
      	printw("\n");
			}
    }
  }

}

void Desenhar::PrintaVitoria()
{

  for(int i = 0; i < 9; i++)
	{
		for(int u = 0; u < 123; u++)
		{
    	printw("%c", this->vitoria[i][u]);

      if(u >= 122)
			{
      	printw("\n");
			}
    }
  }
}

void Desenhar::PrintaDerrota()
{

  for(int i = 0; i < 8; i++)
	{
		for(int u = 0; u < 70; u++)
		{
    	printw("%c", this->derrota[i][u]);

      if(u >= 69)
			{
      	printw("\n");
			}
    }
  }
}

void Desenhar::PrintaComandos(Jogador *jogador,Mapa *mapa)
{
  mapa->PrintaMapa();
  printw("Comandos de Movimento:\n");
  printw("       -----                                Vidas: %d\n",jogador->getVidas());
  printw("       | W |                                Pontos: %d\n",jogador->getPontos());
  printw("       -----\n");
  printw("-----  -----  -----\n");
  printw("| A |  | S |  | D |\n");
  printw("-----  -----  -----\n");
}
