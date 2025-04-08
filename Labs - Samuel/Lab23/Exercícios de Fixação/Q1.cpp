#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo pescado.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char nome[20];
	float peso, total{};
	int comp;
	
	do
	{
		fin >> nome;
		fin >> peso;
		total += peso;	
		fin >> comp;
		fin.get();
	} while(!fin.eof());
	
	cout << "a quantidade total de quilos de peixe pescado e " << total << endl;

    return 0;
}