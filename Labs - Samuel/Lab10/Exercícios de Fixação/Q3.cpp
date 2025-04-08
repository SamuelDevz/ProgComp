#include <iostream>
using namespace std;

int main()
{
	cout << "Digite 5 valores:";
	int vet[5];
	cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];

	int total = vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
	cout << "A soma do vetor e " << total;

	return 0;
}