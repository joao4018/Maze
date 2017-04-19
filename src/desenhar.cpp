#include <iostream>
#include <stdio.h>
#include <string>
#include <ncurses.h>
#include "desenhar.hpp"
#include "mapa.hpp"
#include "jogador.hpp"


using namespace std;
Desenhar::Desenhar()
{
}

void Desenhar::PrintaInicio()
{
  printw("             INICIE O JOGO EM TELA CHEIA PARA MELHOR EXPERIENCIA\n****************Para comecar precione um comando de movimento****************\n");
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
