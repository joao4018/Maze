#ifndef MAPA_HPP
#define MAPA_HPP

#include <iostream>
#include <string>

class Mapa {

public:
	char local[20][50];
	char iniciamapa[20][50];
public:
	Mapa();
	~Mapa();
	void PrintaMapa();	
	void importaMapa();
	
};

#endif
