#include <iostream>
using namespace std;

void exibir(int[], int);
int* expandir(int[], int, int);

int main() 
{
	cout << "Digite pares de valores (0 para encerrar):\n";
	int num;
	cin >> num;

	int * vetor = nullptr;
	int tam = 0;

	while(num != 0)
	{
		vetor = expandir(vetor, tam, num);
		tam++;
		cin >> num;
	}

	exibir(vetor,tam);
	delete [] vetor;

    return 0;
}

void exibir(int vet[], int tam) 
{
	cout << "Pares organizados:\n";
    for (int i = 0; i < tam; i+=2)
        cout << '(' << vet[i] << ',' << vet[i+1] << ')' << endl;
}

int* expandir(int vetor_velho[], int tam, int valor)
{
	int * vetor_novo = new int[tam + 1];

	for(int i = 0;i < tam;++i)
		vetor_novo[i] = vetor_velho[i];
	vetor_novo[tam] = valor;

	delete[] vetor_velho;

	return vetor_novo;
}