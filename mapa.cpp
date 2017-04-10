#include "mapa.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
using namespace std;

Mapa::Mapa(){
}

void Mapa::importaMapa(){
	ifstream mapas ("mapa.txt");
	string auxiliar;
	int i,j;
	for(i = 0; i < 20; i++){
		getline(mapas,auxiliar);
		for( j = 0; j < 50; j++){
			this->local[i][j]=auxiliar[j];
			this->iniciamapa[i][j]=auxiliar[j];
		}
	}
	mapas.close();
}



void Mapa::PrintaMapa(){

                for(int i = 0; i < 20; i++){
                        for(int u = 0; u < 50; u++){
                                printw("%c", this->local[i][u]);
                                this->local[i][u] = this->iniciamapa[i][u];
                                        if(u >= 49){
                                                printw("\n");
                                        }
                        }
                }







}
