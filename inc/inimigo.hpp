#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include "objetodejogo.hpp"
#include <iostream>

class Inimigo : public ObjetoDeJogo
{

	private:
		int dano;

	public:
		Inimigo();
		Inimigo(int posicaoX,int posicaoY);
		~Inimigo();
		void setDano(int dano);
		int getDano();

};

#endif
