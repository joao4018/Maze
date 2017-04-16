#include <iostream>
#include <stdio.h>
#include <string>
#include <ncurses.h>
#include "desenhar.hpp"
#include "jogador.hpp"


using namespace std;
Desenhar::Desenhar()
{
}

void Desenhar::PrintaInicio()
{
  printw("             INICIE O JOGO EM TELA CHEIA PARA MELHOR EXPERIENCIA\n****************Para comecar precione um comando de movimento****************\n");
	}


void Desenhar::PrintaComandos(Jogador *jogador)
{

  printw("Comandos de Movimento:\n");
  printw("       -----                                Vidas: %d\n",jogador->getVidas());
  printw("       | W |                                Pontos: %d\n",jogador->getPontos());
  printw("       -----\n");
  printw("-----  -----  -----\n");
  printw("| A |  | S |  | D |\n");
  printw("-----  -----  -----\n");
}

void Desenhar::FimdeJogo()
{
  printw("---------------------------------------------------------------------------------------------------------------------------------\n");
  printw("|   ___                   ___         _____            _________        ________________      ____________       ______         |\n");
  printw("|  |   |                 |   |       /    \\          /        |       |                |   ||            |     |     \\        |\n");
  printw("|  |   |                 |   |      /      \\        /   ______|       |________________|   ||   _________|     |      \\       |\n");
  printw("|  |   |                 |   |     /   ___  \\      /   /                   ||    |         ||   |              |       \\      |\n");
  printw("|  |   |                 |   |    /   /  \\  \\    /    |_____              ||    |         ||   |_____         |   _    \\     |\n");
  printw("|  |   |      _____      |   |    |   |___|   |    |         \\             ||    |         ||         |        |  | \\    |    |\n");
  printw("|  |   |     /    \\     |   |    |    ___    |    |________  \\            ||    |         ||    _____|        |  |  |    |    |\n");
  printw("|  \\  \\   /   __ \\   /    /    |   /  \\   |        __  \\  \\           ||    |         ||   |              |  |__/    |    |\n");
  printw("|   \\  \\_|   / \\  |_/    /     |   |   |   |       |  |  \\  \\          ||    |         ||   |              |         /     |\n");
  printw("|    \\       /   \\       /      |   |   |   |       |  |___\\  \\         ||    |         ||   |________      |        /      |\n");
  printw("|     \\     /     \\     /       |   |   |   |       |           \\        ||    |         ||            |     |       /       |\n");
  printw("|      \\___/       \\___/        |___|   |___|       |____________\\       ||____|         ||____________|     |______/        |\n");
  printw("|                                                                                                                               |\n");
  printw("|_______________________________________________________________________________________________________________________________|\n");
}
