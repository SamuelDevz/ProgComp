#include <iostream>
using namespace std;

int main()
{
	cout << "Digite as idades do grupo:\n";
	int idade, maior_idade = 0;
    cin >> idade;

	while(idade != 0)
	{
		if(idade >= 18)
			maior_idade++;
		cin >> idade;
	}

	cout << "Nesse grupo " << maior_idade << " pessoas sao maiores de idade.\n";
    
    return 0;
}