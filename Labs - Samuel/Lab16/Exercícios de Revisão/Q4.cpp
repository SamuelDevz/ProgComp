#include <iostream>
using namespace std;

struct Jogador
{
 	char nome[20];
 	float salario;
 	unsigned gols;
};

void exibir_jogador(Jogador vet[], int);

int main()
{
	Jogador * time = new Jogador[2];
	exibir_jogador(time, 2);
	delete[] time;
	return 0;
}

void exibir_jogador(Jogador vet[], int index)
{
	for(int i = 0;i < index;++i)
	{
		cout << "Jogador " << i + 1 << endl;
		cout << "Nome: " << vet[i].nome << endl
			 << "Salario: " << vet[i].salario << endl
			 << "Gols: " << vet[i].gols << endl << endl;
	}
}