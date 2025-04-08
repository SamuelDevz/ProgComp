#include <iostream>
using namespace std;

const int tam = 20;

int main()
{
	cout << "Primeiro nome?";
	char nome[tam];
	cin >> nome;

	cout << "Segundo nome?";
	char sobrenome[tam];
	cin >> sobrenome;

	cout << "Bom dia, " << nome << " " << sobrenome << '\n';
	cout << "Seja bem vindo " << nome[0] << sobrenome[0] << endl;

	return 0;
}