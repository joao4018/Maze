#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "objetodejogo.hpp"
#include <iostream>

class Jogador : public ObjetoDeJogo
{

	private:
		bool vivo;
		int pontos;
		bool vitoria;
		int vidas;

	public:
		Jogador();
		Jogador(int posicaoX,int posicaoY);
		~Jogador();
		void setVivo(bool vivo);
		bool getVivo();
		void setVidas(int vidas);
		int getVidas();
		void setPontos(int pontos);
		int getPontos();
		void setVitoria(bool vitoria);
		bool getVitoria();
		void movimento();

};

#endif
