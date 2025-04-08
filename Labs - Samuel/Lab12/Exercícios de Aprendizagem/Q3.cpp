#include <iostream>
#include <clocale>
using namespace std;

struct ContaBancaria 
{
	char nome[40];
	float saldo;
};

struct Palavra 
{
	char ingles[20];
	char portugues[20];
	char espanhol[20];
};

void exibir_palavra(Palavra dicionario[], int);
void exibir_conta(ContaBancaria);

int main() 
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	ContaBancaria cliente_01;
	cout << "=== Conta bancária ===\n";
	cout << "Criando conta bancária";
	cout << "Digite o nome:";
	cin >> cliente_01.nome;
	cliente_01.saldo = 0;

	exibir_conta(cliente_01);

	cout << "Qual o valor que deseja depositar:";
	float saldo;
	cin >> saldo;

	cliente_01.saldo = saldo;

	exibir_conta(cliente_01);

	Palavra dicionario[10]
	{
		{"cat","gato","gato"},
		{"dog","cachorro","perro"}
	};

	cout << "Digite uma palavra em português,ingles e espanhol respectivamente nessa ordem:";
	cin >> dicionario[2].portugues >> dicionario[2].ingles >> dicionario[2].espanhol;

	cout << "=== Dicionário ===\n";

	exibir_palavra(dicionario, 0);
	exibir_palavra(dicionario, 1);
	exibir_palavra(dicionario, 2);

	return 0;
}

void exibir_palavra(Palavra dicionario[], int index) 
{
	cout << "Palavra " << index << '\n';
	cout << "Portugues: " << dicionario[index].portugues << endl;
	cout << "Ingles: " << dicionario[index].ingles << endl;
	cout << "Espanhol: " << dicionario[index].espanhol << endl << endl;
}

void exibir_conta(ContaBancaria cliente) 
{
	cout << "Nome: " << cliente.nome << endl;
	cout << "Saldo: R$" << cliente.saldo << endl;
}