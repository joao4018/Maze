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

Colisao::Colisao()
{
}

bool Colisao::getIdentifica()
{
  return identifica;
}

void Colisao::setIdentifica(bool identifica)
{
  this->identifica = identifica;
}

void Colisao::Colisor(Jogador *jogador, Mapa *mapa)
{
  Mapa *local;
  char direcao;
  direcao = getch();

  if(direcao == 'w' && local->Detectora(jogador->getPosicaoY()-1,jogador->getPosicaoX()) != '=')
  {
    jogador->setPosicaoY(-1);
  }

  else if(direcao == 's' && local->Detectora(jogador->getPosicaoY()+1,jogador->getPosicaoX()) != '=')
  {
    jogador->setPosicaoY(1);
  }

  else if(direcao == 'a' && local->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()-1) != '=')
  {
    jogador->setPosicaoX(-1);
  }

  else if(direcao == 'd' && local->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()+1) != '=')
  {
    jogador->setPosicaoX(1);
  }
}

void Colisao::ColisBon(Jogador *jogador,Mapa *mapa)
{
  if(mapa->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()) == '*' )
  {
    jogador->setPontos(+1);
    mapa->Constroi('-',jogador->getPosicaoY(),jogador->getPosicaoX());
  }

  else if(mapa->Detectora(jogador->getPosicaoY(),jogador->getPosicaoX()) == '#' )
  {
    jogador->setVidas(-1);
    mapa->Constroi('-',jogador->getPosicaoY(),jogador->getPosicaoX());
  }
}

void Colisao::Fim(Jogador *jogador, Mapa *mapa)
{
	char local;
	local = mapa->Detectora((jogador->getPosicaoY()),(jogador->getPosicaoX()));

	if(local == '8')
  {
		jogador->setVitoria(TRUE);
	}
}
