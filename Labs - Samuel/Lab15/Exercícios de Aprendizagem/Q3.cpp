#include <iostream>
using namespace std;

int main()
{
	cout << "Quantos valores deseja guardar? ";
	int tam;
	cin >> tam;

	int * vet = new int[tam];

	cout << "Quais os valores? ";
	for(int i = 0; i < tam;++i)
		cin >> vet[i];
  	
  	cout << "\nOs valores ";
	for(int i = 0; i < tam - 2; ++i)
		cout << vet[i] << ", ";

	cout << vet[tam - 2] << " e " << vet[tam - 1] 
  	     << " foram armazendados.";

	delete [] vet;

    return 0;
}