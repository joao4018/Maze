#include "jogador.hpp"
#include <iostream>
#include <ncurses.h>

using namespace std;

Jogador::Jogador()
{
	setTipo('@');
	setPosicaoX(3);
	setPosicaoY(3);
	setVivo(1);
	setVitoria(FALSE);
	setPontos(0);
	setVidas(3);
}

Jogador::Jogador(int posicaoX,int posicaoY)
{
	setPosicaoX(posicaoX);
	setPosicaoY(posicaoY);
	setVivo(true);
	setPontos(0);
	setVitoria(false);
  setTipo('@');
	setVidas(3);
}

bool Jogador::getVivo()
{
	return vivo;
}

void Jogador::setVivo(bool vivo)
{
	this->vivo = vivo;
}

bool Jogador::getVitoria()
{
	return vitoria;
}

void Jogador::setVitoria(bool vitoria)
{
	this->vitoria = vitoria;
}

int Jogador::getPontos()
{
	return pontos;
}

void Jogador::setPontos(int pontos)
{
	this->pontos += pontos;

}

int Jogador::getVidas()
{
	return vidas;
}

void Jogador::setVidas(int vidas)
{
	this->vidas += vidas;

}/*
void Jogador::movimento(){

        char direcao = 'l';

        direcao = getch();

        if(direcao == 'w'){
                this->setPosicaoY(-1);
        } else if (direcao == 's'){
                this->setPosicaoY(1);
        } else if (direcao == 'a'){
                this->setPosicaoX(-1);
        } else if (direcao == 'd'){
                this->setPosicaoX(1);
        }

}*/
