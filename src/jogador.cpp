#include "jogador.hpp"
#include <iostream>
#include <ncurses.h>

using namespace std;

Jogador::Jogador(){
	setTipo('@');
	setPosicaoX(2);
	setPosicaoY(2);
	setVivo(1);
	setVitoria(0);
	setPontos(0);
}

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
void Jogador::movimento(){

        char direcao = 'l';

        direcao = getch();

        if(direcao == 'w' && getPosicaoY() != '='){
                this->setPosicaoY(-1);
        } else if (direcao == 's' && getPosicaoY() != '='){
                this->setPosicaoY(1);
        } else if (direcao == 'a' && getPosicaoX() != '='){
                this->setPosicaoX(-1);
        } else if (direcao == 'd' && getPosicaoX()!= '='){
                this->setPosicaoX(1);
        }

}
