#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

constexpr int tam = 60;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "==================\n";
	cout << "\tPalíndromo\n";
	cout << "==================\n";
	cout << "Digite a frase:\n";
	char frase[tam];
	cin.getline(frase, tam);

	char sem_espaco[tam] {};
	char invertida[tam] {};

	for(int i = 0,j = 0; i < strlen(frase);++i)
	{
		if(frase[i] != ' ')
			sem_espaco[j++] = frase[i];
	}

	for(int i = 0,k = strlen(sem_espaco) - 1; i < strlen(sem_espaco); ++i, --k)
		invertida[i] = sem_espaco[k];

	if (strcmp(sem_espaco, invertida)) 
		cout << "Não é um palíndromo.\n";
	else
		cout << "É um palíndromo.\n";

	return 0;
}