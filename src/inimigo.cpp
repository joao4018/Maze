#include "inimigo.hpp"
#include <iostream>

using namespace std;

Inimigo::Inimigo()
{
	setTipo('#');
}
Inimigo::Inimigo(int posicaoX,int posicaoY)
{
	setDano(1);
	setTipo('#');
}

int Inimigo::getDano()
{
	return dano;
}

void Inimigo::setDano(int dano)
{
	this->dano = dano;
}
