#ifndef DESENHAR_HPP
#define DESENHAR_HPP

#include "mapa.hpp"
#include "jogador.hpp"

class Desenhar{

  public:
    Desenhar();
    void PrintaInicio();
    void PrintaComandos(Jogador *jogador,Mapa *mapa);

};

#endif
