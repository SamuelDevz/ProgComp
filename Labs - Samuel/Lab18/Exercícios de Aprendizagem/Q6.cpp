#include <iostream>
#include <cstring>
using namespace std;

constexpr int tam = 20;

struct Pessoa
{
	char nome[tam];
	int idade;
	char sexo;
};

int main()
{
	cout << "Encha seu caderno com registros de pessoas. Digite \"fim\" para finalizar:\n";
	int idtotal{};

	Pessoa p;

	for(int i = 0; strcmp(p.nome, "fim"); ++i)
	{
		cout << "Nome: ";
		cin.getline(p.nome, tam);

		if(strcmp(p.nome, "fim"))
		{
			cout << "Idade: ";
			cin >> p.idade;
			idtotal += p.idade;

			cout << "Sexo (M/F): ";
			cin >> p.sexo;

			cout << endl;
		}
		else
		{
			cout << "Fim da lista.\n";
		}
	}

	cout << "A soma das idade de todos na lista e de: " << idtotal << endl;

    return 0;
}