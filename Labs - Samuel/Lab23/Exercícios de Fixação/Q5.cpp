#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

constexpr int tam = 50;

int main()
{
	cout << "Nome do arquivo: ";
	char arquivo[tam];
	cin >> arquivo;

	cout << "Palavra: ";
	char palavra[tam];
	cin >> palavra;

	ifstream fin;
    fin.open(arquivo);
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	bool encontrada = false;
	char token[tam];

	while (fin >> token && !encontrada)
		if (strcmp(token, palavra))
			encontrada = true;

	fin.close();

	if (encontrada)
		cout << "A palavra \"" << palavra << "\" esta presente no texto." << endl;
	else
		cout << "A palavra \"" << palavra << "\" nao esta no texto." << endl;

	return 0;
}