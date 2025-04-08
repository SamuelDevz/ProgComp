#include <iostream>
using namespace std;

struct Candidato
{
 	char nome[30];
 	int notas[3];
};

void exibir_candidato(Candidato);
void exibir_candidato(Candidato*);
void exibir_candidato(Candidato[], int);

int main() 
{
}

void exibir_candidato(Candidato c)
{
	cout << "Nome: " << c.nome << endl;
	cout << "Notas: " << c.notas[0] << " " 
					  << c.notas[1] << " " 
					  << c.notas[2] << endl; 
}

void exibir_candidato(Candidato * c) 
{
	cout << "Nome: " << c->nome << endl;
	cout << "Notas: " << c->notas[0] << " " 
					  << c->notas[1] << " " 
					  << c->notas[2] << endl;	
}

void exibir_candidato(Candidato grupo_de_candidatos[],int tam)
{
	for(int i = 0;i < tam;++i)
	{
		cout << "Candidato " << i + 1 << endl;
		cout << "Nome: " << grupo_de_candidatos[i].nome;
		cout << "Notas: " << grupo_de_candidatos[i].notas[0] << " "
						  << grupo_de_candidatos[i].notas[1] << " "
						  << grupo_de_candidatos[i].notas[2] << endl;
	}
}