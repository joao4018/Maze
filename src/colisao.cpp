
#include <iostream>
#include <stdio.h>
#include "colisao.hpp"
#include "inimigo.hpp"
#include "objetodejogo.hpp"
#include "bonus.hpp"
#include "mapa.hpp"
#include "jogador.hpp"
#include <string>
#include <ncurses.h>



using namespace std;

Colisao::Colisao(){
  //setIdentifica(TRUE);
}

bool Colisao::getIdentifica(){
  return identifica;
}
void Colisao::setIdentifica(bool identifica){
  this->identifica = identifica;
}

void Colisao::Colisor(Jogador *jogador, Mapa *mapa){//, Inimigo *inimigo, Bonus *bonus){
  char local;
  local = mapa->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX());

        char direcao = 'l';

        direcao = getch();

        if(direcao == 'w' && mapa->Detectora(jogador->getPosicaoY()-1,jogador->getPosicaoX()) != '='){
                jogador->setPosicaoY(-1);
        } else if (direcao == 's' && mapa->Detectora(jogador->getPosicaoY()+1,jogador->getPosicaoX()) != '='){
                jogador->setPosicaoY(1);
        } else if (direcao == 'a' && mapa->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()-1) != '='){
                jogador->setPosicaoX(-1);
        } else if (direcao == 'd' && mapa->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()+1) != '='){
                jogador->setPosicaoX(1);
        }

}
