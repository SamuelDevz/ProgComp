#include <iostream>
#include <fstream>
using namespace std;

int maior_valor(int[]);
int menor_valor(int[]);

int main()
{
	cout << "Arquivo: ";
	char arquivo[40];
	cin >> arquivo;

	ifstream fin(arquivo, ios_base::in);
	if(!fin.is_open())
	{
		cout << "Erro ao abrir arquivo " << arquivo << endl;
		return EXIT_FAILURE; 
	}
	
	int vet[100];
	for(int i = 0;i < 100;++i)
		fin >> vet[i];

	int posicao_maior_valor = maior_valor(vet);
	int posicao_menor_valor = menor_valor(vet);

	cout << "A posicao " << posicao_menor_valor << " contem o menor numero (" << vet[posicao_menor_valor] << ")\n";
	cout << "A posicao " << posicao_maior_valor << " contem o menor numero (" << vet[posicao_maior_valor] << ")\n";

    return 0;
}

int maior_valor(int vet[]) 
{
	int pos{};

	for(int i = 0, valor = vet[0]; i < 100 ;++i)
	{
		if(vet[i] > valor)
		{
			valor = vet[i];
			pos = i;
		}
	}

	return pos;
}

int menor_valor(int vet[])
{
	int pos{};

	for(int i = 0, valor = vet[0]; i < 100 ;++i)
	{
		if(vet[i] < valor)
		{
			valor = vet[i];
			pos = i;
		}
	}

	return pos;
}