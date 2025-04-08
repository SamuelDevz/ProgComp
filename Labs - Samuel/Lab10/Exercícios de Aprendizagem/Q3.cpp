#include <iostream>
using namespace std;

double operacao(double vet[]);

int main()
{
	double vet[3];
	cout << "Digite 3 valores:";
	cin >> vet[0] >> vet[1] >> vet[2];

	float resul = operacao(vet);
	cout << vet[0] << " x " << vet[2] << " - " << vet[1] << " e igual a " << resul << '\n';

	return 0;
}

double operacao(double vet[])
{
	return vet[0] * vet[2] - vet[1];
}