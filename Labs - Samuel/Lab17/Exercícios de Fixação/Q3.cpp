#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	int tam = strlen(palavra);
	char invertida[20];

	for(int i = 0;i < tam;++i)
		invertida[i] = palavra[tam - i - 1];

	invertida[tam] = '\0';

	cout << "Palavra invertida: " << invertida << endl;

	if (strcmp(palavra, invertida))
 		cout << "A palavra não é um palíndromo\n";
	else
 		cout << "A palavra é um palíndromo\n";
}