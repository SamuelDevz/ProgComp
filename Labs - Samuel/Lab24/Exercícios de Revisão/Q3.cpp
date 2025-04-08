#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{	
	char nome[20];
	unsigned peso;
	float comp;
} p;

int main()
{
	ifstream fin("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo pescado.txt falhou!\n";
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	ofstream fout("pescado.bin",ios_base::out | ios_base::binary | ios_base::app);
	if(!fout.is_open())
	{
		cout << "Abertura do arquivo arquivo peixes.bin\n";
		exit(EXIT_FAILURE);
	}

	while(fin >> p.nome >> p.peso >> p.comp)
		fout.write((char*) &p,sizeof(peixe));

	fout.close();
	fin.close();

    return 0;
}