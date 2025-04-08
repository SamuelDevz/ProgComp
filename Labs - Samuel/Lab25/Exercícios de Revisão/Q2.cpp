#include <iostream>
#include <fstream>
using namespace std;

double maior_valor(const double[], int);

int main() 
{
	cout << "Nome do arquivo: ";
	char arquivo[40];
	cin >> arquivo;
	
	ifstream fin(arquivo, ios_base::in);
	if (!fin.is_open()) 
	{
		cout << "Erro ao abrir arquivo " << arquivo << endl;
		return EXIT_FAILURE;
	}

	double temp{};
	int tam{};
	while (fin >> temp)
		tam++;

	double * vetor = new double[tam];

	for (int i = 0; i < tam; ++i) 
		fin >> vetor[i];

	fin.close();

	double valor = maior_valor(vetor, tam);

	cout << "O maior valor e " << valor << endl;

	delete[] vetor;

	return 0;
}

double maior_valor(const double vet[], int tam) 
{
	double valor = vet[0];

	for (int i = 1; i < tam; ++i) 
		if (vet[i] > valor)
			valor = vet[i];

	return valor;
}