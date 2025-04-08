#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("intro.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char ch;
	fin >> ch;
	fin.close();
	
	cout << ch << endl;

	return 0;
}

/*

a) 

// Codigo restante

char ch;

for(int i = 1; i <= 8; ++i)
	fin >> ch;

fin.close();

cout << ch << endl;


b) 

// Codigo restante

char palavra[20];

fin >> palavra;

fin.close();

cout << palavra << endl;

c)

// Codigo restante

char palavra[20];

for(int i = 1; i <= 5; ++i)
	fin >> palavra;

fin.close();

cout << palavra << endl;

d)

// Codigo restante

char frase[120];

fin.getline(frase, 120);

fin.close();

cout << frase << endl;

*/