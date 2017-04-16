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
	Jogador * jogador1 = new Jogador();
	Mapa * lab = new Mapa();
	Desenhar *labi = new Desenhar();
	lab->importaMapa();
	Inimigo * inimigos[20];
	Bonus * bonus[5];
	int i[20],d[20],c,cont=0,by[5],hx[5],contador = 0;
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
char porra;
while(jogador1->getVitoria() != TRUE){
	initscr();
  clear();
	lab->addElemento(jogador1->getTipo(),jogador1->getPosicaoY(),jogador1->getPosicaoX());
  lab->PrintaMapa();
  //labi->PrintaComandos(jogador1);
	colisor->Colisor(jogador1,lab);
	colisor->ColisBon(jogador1,lab);
	colisor->Fim(jogador1,lab);
  contador++;//porra = getch();
	//jogador1->movimento();

	refresh();

  endwin();

}

return 0;
}
