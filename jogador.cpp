#include "jogador.hpp"
#include <iostream>

using namespace std;

/*Jogador::Jogador{
	setTipo('@');
	setPosicaoX(1);
	setPosicaoY(1);
	setVivo(1);
	setVitoria(0);
	setPontos(0);
}*/

Jogador::Jogador(int posicaoX,int posicaoY){
	setPosicaoX(posicaoX);
	setPosicaoY(posicaoY);
	setVivo(true);
	setPontos(0);
	setVitoria(false);
       setTipo('@');
}
//Jogador::~Jogador(){}

bool Jogador::getVivo(){
	return vivo;
}
void Jogador::setVivo(bool vivo){
	this->vivo = vivo;
}
bool Jogador::getVitoria(){
	return vitoria;
}
void Jogador::setVitoria(bool vitoria){
	this->vitoria = vitoria;
}
int Jogador::getPontos(){
	return pontos;
}
void Jogador::setPontos(int pontos){
	this->pontos = pontos;
}



