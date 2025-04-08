#include <iostream>
#include <cstring>
using namespace std;

constexpr int tam = 6;

struct Tigela
{
	char estado[tam];
	char tipoAlimento[tam];
};

void Fome(Tigela*);

int main()
{
	Tigela minhaTigela { "cheia", "canja" };
	Tigela * ptr_tigela = &minhaTigela;

	cout << "A tigela antes da janta:\n";
	cout << "Estado da tigela:" << minhaTigela.estado;
	cout << "Tipo de alimento:" << minhaTigela.tipoAlimento;

	Fome(ptr_tigela);

	cout << "A tigela depois da janta";
	cout << "Estado da tigela:" << minhaTigela.estado;
	cout << "Tipo de alimento:" << minhaTigela.tipoAlimento;	

	return 0;
}

void Fome(Tigela * t)
{
	strcpy(t->estado, "vazia");
}