#ifndef MAPA_HPP
#define MAPA_HPP

#include <iostream>
#include <string>

class Mapa
{

	public:
		char local[20][50];
		char iniciamapa[20][50];

	public:
		Mapa();
		~Mapa();

		void importaMapa();
		char Detectora(int posy, int posx);
		void addElemento(char forma,int posy,int posx);
		void Constroi(char forma,int posy,int posx);
		void setMapa(char forma,int posy,int posx);
		void PrintaMapa();



};

#endif
