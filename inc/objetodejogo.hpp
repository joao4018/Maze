#ifndef OBJETODEJOGO_HPP
#define OBJETODEJOGO_HPP

#include <iostream>

using namespace std;

class ObjetoDeJogo
{

private:
	//Atributos
	int posicaoX;
	int posicaoY;
	char tipo;

public:
	ObjetoDeJogo();
	~ObjetoDeJogo();
	int getPosicaoX();
	void setPosicaoX(int posicaoX);
	int getPosicaoY();
	void setPosicaoY(int posicaoY);
	char getTipo();
  void setTipo(char tipo);

};

#endif
