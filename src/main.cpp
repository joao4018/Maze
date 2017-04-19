#include "objetodejogo.hpp"
#include "desenhar.hpp"
#include "jogador.hpp"
#include "mapa.hpp"
#include "inimigo.hpp"
#include "bonus.hpp"
#include "colisao.hpp"
#include <cstdlib>
#include <iostream>
#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv){
	int i[20],d[20],c,cont=0,by[5],hx[5],contador = 0;
	Jogador * jogador1 = new Jogador();
	Mapa * lab = new Mapa();
	Desenhar *labi = new Desenhar();
	lab->importaMapa();
	Inimigo * inimigos[20];
	Bonus * bonus[5];
	Colisao * colisor = new Colisao();

	for(c = 0;c<20; c++){
		d[c] = 1+(rand() % 19);
		i[c] = 1+(rand() % 49);
		inimigos[c] = new Inimigo();
		if(c%4 == 0){
			by[cont] = 1+(rand() % 19);
			hx[cont] = 1+(rand() % 49);
		  bonus[cont] = new Bonus();
		  cont++;
	}}
	for(c = 0;c < 20; c++){
		lab->Constroi(inimigos[c]->getTipo(),d[c],i[c]);


	}
	for(cont = 0; cont < 5; cont++){
		lab->Constroi(bonus[cont]->getTipo(),by[cont],hx[cont]);

	}


while(!jogador1->getVitoria() && !(jogador1->getVidas() == 0)){
	initscr();
  clear();
	if(contador%4 == 0){
	for(c = 0;c < 20; c++){
		lab->Constroi('-',d[c],i[c]);
		d[c] = 1+(rand() % 19);
		i[c] = 1+(rand() % 49);
		lab->Constroi(inimigos[c]->getTipo(),d[c],i[c]);
	}
	for(cont = 0; cont < 5; cont++){
		lab->Constroi('-',by[cont],hx[cont]);
		by[cont] = 1+(rand() % 19);
		hx[cont] = 1+(rand() % 49);
		lab->Constroi(bonus[cont]->getTipo(),by[cont],hx[cont]);
	}
}
	contador++;
	lab->addElemento(jogador1->getTipo(),jogador1->getPosicaoY(),jogador1->getPosicaoX());
  labi->PrintaComandos(jogador1,lab);
	colisor->Colisor(jogador1,lab);
	colisor->ColisBon(jogador1,lab);
	refresh();
  endwin();
}

return 0;
}
