#include <iostream>
using namespace std;

int qtd_valor(int *, int *, int);

int main()
{
	int vet[] { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };
	int tam = sizeof(vet) / sizeof(int);

	int zeros = qtd_valor(vet,vet + tam,0); 
	int uns = qtd_valor(vet,vet + tam,1);

	cout << "Existem " << zeros << " zeros e " << uns << " um/uns na faixa indicada\n";

	return 0;
}

int qtd_valor(int * inicio, int * fim, int valor)
{
	int qtd_valor{};
	for(int * ptr = inicio;ptr < fim;++ptr)
		if(*ptr == valor)
			qtd_valor++;
	return qtd_valor;
}