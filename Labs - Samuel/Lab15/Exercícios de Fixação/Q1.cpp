#include <iostream>
using namespace std;

int main()
{
	cout << "Digite o numero de alunos (mínimo 2): ";
	int tam;
	cin >> tam;

	float * notas = new float[tam];

	cout << "Digite a nota de dois alunos:\n";
	cin >> notas[0] >> notas[1];

	cout << "As notas digitadas foram " << notas[0] << " e " << notas[1];

	delete[] notas;

	return 0;
}