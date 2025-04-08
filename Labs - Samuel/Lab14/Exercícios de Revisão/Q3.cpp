#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	int comp;
};

int main()
{
	// como criar uma variável do tipo peixe
	// basta colocar o tipo peixe e o nome
	peixe baiacu;

	// Como criar um ponteiro para uma variável de tipo peixe
	// Primeiro colocamos o tipo que queremos apontar
	// colocamos asterisco e nome do ponteiro
	// O Ponteiro deve receber o endereço de uma variavel
	// existente, nesse caso vamos apontar para baiacu
	peixe * ptrp = &baiacu;
}