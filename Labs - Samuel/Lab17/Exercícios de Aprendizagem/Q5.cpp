#include <iostream>
using namespace std;

int main()
{
	int soma_dos_quadrados, quadrado_da_soma, resul;
	soma_dos_quadrados = quadrado_da_soma = resul = 0;

	for(int i = 1; i < 11; ++i)
		soma_dos_quadrados += i * i;

	for(int i = 1; i < 11; ++i)
		quadrado_da_soma += i;

	quadrado_da_soma *= quadrado_da_soma;

	resul = quadrado_da_soma - soma_dos_quadrados;

	cout << resul;

	return 0;
}