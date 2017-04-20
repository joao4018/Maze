#ifndef DESENHAR_HPP
#define DESENHAR_HPP

#include "mapa.hpp"
#include "jogador.hpp"

class Desenhar{
  private:
    char locala[20][80];
    char vitoria[9][123];
    char derrota[8][70];
  public:
    Desenhar();
    void ImportaInicio();
    void ImportaDerrota();
    void ImportaVitoria();
    void PrintaVitoria();
    void PrintaDerrota();
    void PrintaInicio();
    void PrintaComandos(Jogador *jogador,Mapa *mapa);

};

#endif
