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
	ofstream fout("peixes.bin",ios_base::out | ios_base::binary | ios_base::app);

	if(!fout.is_open())
	{
		cout << "Abertura do arquivo arquivo peixes.bin\n";
		exit(EXIT_FAILURE);
	}

	cout << "Nome do peixe: ";
	cin >> p.nome;

	cout << "Peso do peixe: ";
	cin >> p.peso;

	cout << "Comprimento do peixe: ";
	cin >> p.comp;

	fout.write((char*)&p, sizeof(peixe));
	fout.close(); 

	/*
	//b)

	ifstream fin("peixes.bin",ios_base::in | ios_base::binary);

	if(fin.is_open())
	{
		while(fin.read((char*) &p, sizeof(peixe)))
		{
			cout << p.nome << ' '
				 << p.peso << ' '
				 << p.comp << endl;
		}
		fin.close();
	}
	*/

	return 0;
}