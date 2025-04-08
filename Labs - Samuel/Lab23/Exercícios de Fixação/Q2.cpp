#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("resultado.txt");
	if(!fout.is_open())
	{
		cout << "Abertura do arquivo resultado.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin;
	fin.open("situação.txt");
	if(!fin.is_open())
	{
		cout << "Abertura do arquivo situação.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char nome[20];
	fin >> nome;

	float notas[3], media;
	while(!fin.eof())
	{
		fin >> notas[0];
		fin >> notas[1];
		fin >> notas[2];

		media = (notas[0] + notas[1] + notas[2]) / 3;

		if(media >= 6)
			fout << nome << " aprovado\n";
		else if(media > 5 && media < 6)
			fout << nome << " quarta prova\n";
		else
			fout << nome << " reprovado\n";	

		fin >> nome;
	}

	fout.close();
	fin.close();
}