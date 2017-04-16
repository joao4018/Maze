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
}
