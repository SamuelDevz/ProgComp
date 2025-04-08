#include <iostream>
using namespace std;

int main()
{
	cout << "Digite o tamanho do vetor: ";
	int tam;
	cin >> tam;

	int * vet = new int[tam];

	delete[] vet;

	return 0;
}