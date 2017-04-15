#include "objetodejogo.hpp"
#include "jogador.hpp"
#include "mapa.hpp"
#include "inimigo.hpp"
#include "bonus.hpp"
#include <cstdlib>
#include <iostream>
#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv){
	Jogador * jogador1 = new Jogador();
	Mapa * lab = new Mapa();
	lab->importaMapa();
	Inimigo * inimigos[20];
	Bonus * bonus[5];
	int i[20],d[20],c,cont=0,by[5],hx[5];

	for(c = 0;c<20; c++){
		d[c] = rand() % 19;
		i[c] = rand() % 49;
		inimigos[c] = new Inimigo();
		if(c%4 == 0){
			by[cont] = rand() % 19;
			hx[cont] = rand() % 49;
		  bonus[cont] = new bonus;
		  cont++;
	}
	}


while(1){
	initscr();
	lab->addElemento(jogador1->getTipo(),jogador1->getPosicaoY(),jogador1->getPosicaoX());
	for(c = 0;c < 20; c++){
		lab->addElemento(inimigos[c]->getTipo(),d[c],i[c]);
	}
  lab->PrintaMapa();
	jogador1->movimento();
//	c = getch();
	refresh();
	clear();
  endwin();
}

return 0;
}
