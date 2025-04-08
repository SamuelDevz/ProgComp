#include <iostream>
#include <clocale>
using namespace std;

struct ContaBancaria
{
	char nome[40];
	float saldo;
};

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	ContaBancaria cliente_01;
	cout << "=== Conta bancária ===\n";
	cout << "Criando conta bancária";
	cout << "Digite o nome:";
	cin >> cliente_01.nome;
	cliente_01.saldo = 0;

	cout << "Nome: " << cliente_01.nome << endl;
	cout << "Saldo: R$" << cliente_01.saldo << endl;

	cout << "Qual o valor que deseja depositar:";
	float saldo;
	cin >> saldo;

	cliente_01.saldo = saldo;

	cout << "Nome: " << cliente_01.nome << endl;
	cout << "Saldo: R$" << cliente_01.saldo << endl;

	return 0;
}