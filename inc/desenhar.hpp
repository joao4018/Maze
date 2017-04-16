#ifndef DESENHAR_HPP
#define DESENHAR_HPP

#include <iostream>
#include <stdio.h>
#include <string>
#include <ncurses.h>
#include "mapa.hpp"
#include "jogador.hpp"


class Desenhar
{

  public:
    Desenhar();
    void PrintaInicio();
    void PrintaComandos(Jogador *jogador);
    void FimdeJogo();

};

#endif
