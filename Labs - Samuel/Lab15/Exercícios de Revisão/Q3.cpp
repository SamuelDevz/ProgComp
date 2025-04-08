#include <iostream>
using namespace std;

struct Peixe
{
 	char tipo[20];
 	float peso;
 	unsigned comp;
};

int main()
{
	cout << "Tamanho do vetor: ";
	int tam;
	cin >> tam;

	Peixe * aquario = new Peixe[tam];

	cout << endl << endl;

	cout << "Tipo: ";
	cin >> aquario->tipo;

	cout << "Peso: ";
	cin >> aquario->peso;

	cout << "Comprimento: ";
	cin >> aquario->comp;

	cout << endl;

	cout << "O peso do peixe e " << aquario->peso << " gramas\n";

	delete[] aquario;

	return 0;
}