#include <iostream>
#include <fstream>
using namespace std;

constexpr int tam = 50;

int main()
{
	system("vol > vol.txt");

	ifstream fin;
    fin.open("vol.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	char volume[tam];
	for (int i=0; i < 6; i++)
		fin >> volume;

	char numSerie[tam];
	for (int i=0; i < 5; i++)
		fin >> numSerie;

	fin.close();

	cout << "Volume: " << volume << endl;
	cout << "Numero de Serie: " << numSerie << endl;

    return 0;
}