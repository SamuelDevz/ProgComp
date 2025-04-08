#include <iostream>
using namespace std;

int main()
{
	int mat[2][3]
	{
 		{ 1, 2, 3},
 		{ 4, 5, 6}
	};

	cout << mat[0][0] << endl;
	cout << mat[0] << endl;
	cout << &mat[0][0] << endl;

	return 0;
}

/*

Uma matriz é um vetor de vetores. Sendo assim se usarmos a notação de vetor com
matrizes, o resultado deve ser um vetor, correto? Por exemplo, considere a matriz
abaixo.

int mat[2][3]
{
 	{ 1, 2, 3 },
 	{ 4, 5, 6 }
};

Podemos exibir o elemento na posição (0,0) da matriz através de mat[0][0], mas
o que acontece se mandarmos exibir apenas mat[0]?

Para descobrir, crie um programa que exiba na tela:
• mat[0][0]
• mat[0]
• &mat[0][0]

R:

• mat[0][0] exibe o elemento da posição(0,0) de mat
• mat[0] representa o primero vetor de mat 
• &mat[0][0] representa o endereço de memória do primeiro elemento de mat

*/