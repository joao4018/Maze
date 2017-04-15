#ifndef COLISAO_HPP
#define COLISAO_HPP

#include <iostream>
#include <stdio.h>
#include "inimigo.hpp"
#include "objetodejogo.hpp"
#include "bonus.hpp"
#include "mapa.hpp"
#include "jogador.hpp"
#include <string>
#include <ncurses.h>




class Colisao {
    private:
      bool identifica=TRUE;

		public:

			Colisao();
      bool getIdentifica();
      void setIdentifica(bool identifica);

      void Colisor(Jogador *jogador, Mapa *mapa);//, Inimigo *inimigo, Bonus *bonus);


};

#endif
