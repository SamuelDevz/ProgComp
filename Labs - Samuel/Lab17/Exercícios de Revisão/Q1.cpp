#include <iostream>
using namespace std;

int main()
{
	int j;
	for (j = 0; j < 11; j += 3)
 		cout << j;
	cout << endl << j << endl;
}

/*

O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int j;
for (j = 0; j < 11; j += 3)
	cout << j;
cout << endl << j << endl;

saída do programa:

0369
12

*/