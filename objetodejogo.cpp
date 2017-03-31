#include "objetodejogo.hpp"
#include <iostream>

using namespace std;

ObjetoDeJogo::ObjetoDeJogo(){
	posicaoX = 1;
	posicaoY = 1;
	tipo = "";
}

ObjetoDeJogo::ObjetoDeJogo(int posicaoX, int posicaoY, int tipo){
	setPosicaoX(posicaoX);
	setPosicaoY(posicaoY);
	setTipo(tipo);

}

ObjetoDeJogo::~ObjetdoDeJogo(){}

int ObjetoDeJogo::getPosicaoX(){
	return posicaoX;
}
void ObjetoDeJogo::setPosicaoX(){
	this->posicaoX = posicaoX;
}
int ObjetoDeJogo::getPosicaoY(){
	return posicaoY;
}
void ObjetoDeJogo::setPosicaoY(){
	this->PosicaoY = PosicaoY;
}
char ObjetoDeJogo::getTipo(){
	return tipo;
}
void ObjetoDeJogo::setTipo(tipo){
	this->tipo = tipo;
}

