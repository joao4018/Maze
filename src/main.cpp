#include "objetodejogo.hpp"
#include "desenhar.hpp"
#include "jogador.hpp"
#include "mapa.hpp"
#include "inimigo.hpp"
#include "bonus.hpp"
#include "colisao.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char ** argv){

	int i[20],d[20],c,cont=0,by[5],hx[5],contador = 0;
	char fase;
	string nome,vivo,pontuacoes;
	ofstream rank;
	rank.open("doc//rank.txt",ios::app);

	Jogador * jogador1 = new Jogador();
	Mapa * lab = new Mapa();
	Desenhar *labi = new Desenhar();
	Inimigo * inimigos[20];
	Bonus * bonus[5];
	Colisao * colisor = new Colisao();

	lab->importaMapa();
	labi->ImportaDerrota();
	labi->ImportaVitoria();
	labi->ImportaInicio();

	system("clear");
	cout << "MAXIMIZE A TELA DO JOGO" << endl;
	cout << "Escreva seu nome 'Mazer runner':" << endl;
	getline (cin,nome);


	initscr();
	clear();
	labi->PrintaInicio();
	fase = getch();
	refresh();
	endwin();


	srand(time(NULL));

	for(c = 0;c<20; c++)
	{
		d[c] = 1+(rand() % 18);
		i[c] = 1+(rand() % 48);
		inimigos[c] = new Inimigo();
		lab->Constroi(inimigos[c]->getTipo(),d[c],i[c]);
		if(c%4 == 0)
		{
			by[cont] = 1+(rand() % 18);
			hx[cont] = 1+(rand() % 48);
		  bonus[cont] = new Bonus();
			lab->Constroi(bonus[cont]->getTipo(),by[cont],hx[cont]);
			cont++;
	  }
	}


while(!jogador1->getVitoria() && !(jogador1->getVidas() == 0))
{
	initscr();
  clear();

	if(contador%10 == 0 && fase == '1')
	{
		for(c = 0;c < 2; c++)
		{
			d[c] = 1+(rand() % 18);
			i[c] = 1+(rand() % 48);
			lab->Constroi(inimigos[c]->getTipo(),d[c],i[c]);

		}
		for(cont = 0; cont < 4; cont++)
		{
			by[cont] = 1+(rand() % 18);
			hx[cont] = 1+(rand() % 48);
			lab->Constroi(bonus[cont]->getTipo(),by[cont],hx[cont]);
	}
}
	contador++;

	lab->addElemento(jogador1->getTipo(),jogador1->getPosicaoY(),jogador1->getPosicaoX());
  labi->PrintaComandos(jogador1,lab);
	colisor->Colisor(jogador1,lab);
	colisor->ColisBon(jogador1,lab);
	colisor->Fim(jogador1,lab);

	refresh();
  endwin();
}

if(!(jogador1->getVidas() == 0))
{
	initscr();
	clear();
	labi->PrintaVitoria();
	fase = getch();
	refresh();
	endwin();
}
else
{
	initscr();
	clear();
	labi->PrintaDerrota();
	fase = getch();
	refresh();
	endwin();
}
if(jogador1->getVitoria() == 1)
{
	vivo = "Sobrevivente";
}
else
{
	vivo = "Perdededor";
}

rank << "Nome: "<< nome << " | Pontos: " << jogador1->getPontos() << " | Vidas restantes: "<< jogador1->getVidas() <<" | "<< vivo << " \n" << endl;
rank.close();

system("clear");
ifstream in("doc//rank.txt");

char ca = in.get();
pontuacoes.push_back(ca);

while(in.good())
{
	ca = in.get();
	pontuacoes.push_back(ca);
}

cout << pontuacoes << endl;

return 0;
}
