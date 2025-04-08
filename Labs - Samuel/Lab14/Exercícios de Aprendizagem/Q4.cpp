#include <iostream>
using namespace std;

enum Tipo { JPG, PNG, BMP };

struct Imagem
{
	char nome[40];
	int altura;
	int largura;
	Tipo tipo; 
};

ostream& operator<<(ostream&, Tipo&);

void Detalhes(Imagem*);

int main()
{
	Imagem backg { "backg.png", 1920, 1080, PNG };
	Detalhes(&backg);
    return 0;
}

ostream& operator<<(ostream& os, Tipo& t)
{
	switch(t)
	{
		case JPG: os << "JPG"; break;
		case PNG: os << "PNG"; break;
		case BMP: os << "BMP"; break;
	}
	return os;
}

void Detalhes(Imagem * img)
{
	cout << "A imagem \"" << img->nome << "\" com tamanho "
         << img->altura << 'x' << img->largura << " tem formato "
         << img->tipo;
}