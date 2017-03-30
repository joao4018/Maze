#ifdef OBJETODEJOGO_HPP
#define OBJETODEJOGO_HPP


#include <string>
using namespace std;

class ObejetoDeJogo{

private:
	//Atributos
	int posicaoX;
	int posicaoY;
	char tipo;
public:
	//Metodos
	ObjetoDeJogo();
	ObjetoDeJogo(int posicaoX, int posicaoY, int tipo);
	~ObjetoDeJogo();
	int getPosicaoX();
	void setPosicaoX(int posicaoX);
	int getPosicaoY();
	void setPosicaoX(int posicaoY);
	int getTipo();
	void setTipo(int tipo);

	
	
};



#endif
