#include <iostream>
using namespace std;

void exibir_vetor(int vet[]);
void exibir_vetor(int vet[], int);

int main()
{
	int vet[5] { 15, 29, 48, 10, 35 };
	exibir_vetor(vet);
	exibir_vetor(vet, 5);
	return 0;
}

void exibir_vetor(int vet[])
{
	for(int i = 0;i < 5;++i)
		cout << vet[i] << ' ';
	cout << endl;
}

void exibir_vetor(int vet[], int index)
{
	for(int i = 0;i < index;++i)
		cout << vet[i];
	cout << endl;
}