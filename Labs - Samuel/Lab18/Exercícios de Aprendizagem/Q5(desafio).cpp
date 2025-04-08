#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite as idades do grupo:\n";
	int idade, idade_novo, idade_velho, maior_idade = 0;
	cin >> idade;
	idade_novo = idade_velho = idade;

	while(idade != 0)
	{
		if(idade >= 18)
			maior_idade++;

		if(idade_novo > idade)
			idade_novo = idade;

		if(idade >= idade_velho)
			idade_velho = idade;

		cin >> idade;
	}

	cout << "Nesse grupo " << maior_idade << " pessoas são maiores de idade.\n";
	cout << "A pessoa mais nova têm " << idade_novo << "anos e a pessoa mais "
		 << "velha têm " << idade_velho << " anos.\n";

	return 0;
}