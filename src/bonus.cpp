#include "bonus.hpp"
#include <iostream>

using namespace std;
Bonus::Bonus(){
	setTipo('*');
}
Bonus::Bonus(int posicaoX, int posicaoY){
	setPosicaoX(posicaoX);
	setPosicaoY(posicaoY);
	setPontos(5);
}

int Bonus::getPontos(){
	return pontos;
}
void Bonus::setPontos(int pontos){
	this->pontos=pontos;
}
