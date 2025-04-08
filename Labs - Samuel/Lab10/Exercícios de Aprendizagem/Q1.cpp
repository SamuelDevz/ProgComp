#include <iostream>
using namespace std;

int main()
{
	int vet[5] = { 10, 80, 30, 45, 15 };

	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << vet[4] << endl;
	cout << "---------------------\n";
	cout << "Alterar posicao:";
	int index;
	cin >> index;
	
	cout << "Novo valor:";
	int valor;
	cin >> valor;
	cout << "---------------------\n";

	vet[index] = valor;
	
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << vet[4] << endl;

	return 0;
}