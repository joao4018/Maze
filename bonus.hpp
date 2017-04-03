#ifndef BONUS_HPP
#define BONUS_HPP
#include <iostream>
#include "objetodejogo.hpp"

class Bonus : public ObjetoDeJogo{
private:
	int pontos;

public:
	Bonus();
	Bonus(int posicaoX, int posicaoY);
	~Bonus();
	
	void setPontos(int pontos);
	int getPontos();
};



#endif
