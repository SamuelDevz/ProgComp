#include <iostream>
using namespace std;

int main()
{
	int vet[5];
	for (int i = 0; i < 60; ++i)
	{
		vet[i] = 50;
	}
}

/*

Tente descobrir a primeira posição em que o Sistema Operacional vai intervir e fechar o
programa. Essa posição é sempre a mesma? O que podemos deduzir desse
experimento?

R: O SO sempre vai fechar o programa. Podemos deduzir que SO está fechando o programa, pois 
estamos acessando um região de memória que não pertence ao nosso programa.

*/