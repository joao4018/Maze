#include "objetodejogo.hpp"
#include <iostream>

using namespace std;

ObjetoDeJogo::ObjetoDeJogo()
{
  setPosicaoX(1);
	setPosicaoY(1);
	setTipo(' ');
}

ObjetoDeJogo::ObjetoDeJogo(int posicaoX, int posicaoY)
{
	setPosicaoX(posicaoX);
	setPosicaoY(posicaoY);
}

ObjetoDeJogo::~ObjetoDeJogo()
{
}

void ObjetoDeJogo::setPosicaoX(int posicaoX)
{
  this->posicaoX += posicaoX;
}

int ObjetoDeJogo::getPosicaoX()
{
	return posicaoX;
}

int ObjetoDeJogo::getPosicaoY()
{
	return posicaoY;
}

void ObjetoDeJogo::setPosicaoY(int posicaoY)
{
	this->posicaoY += posicaoY;
}

char ObjetoDeJogo::getTipo()
{
	return tipo;
}

void ObjetoDeJogo::setTipo(char tipo)
{
	this->tipo = tipo;
}
