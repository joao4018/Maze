#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "objetodejogo.hpp"
#include <iostream>
class Jogador : public ObjetoDeJogo {

private:
	//Atributos
	bool vivo;
	int pontos;
	bool vitoria;


 public:
	Jogador();
	Jogador(int posicaoX,int posicaoY);
	~Jogador();
	void setVivo(bool vivo);
	bool getVivo();
	void setPontos(int pontos);
	int getPontos();
	void setVitoria(bool vitoria);
	bool getVitoria();
};
#endif
