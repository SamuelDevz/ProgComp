//#define _CRT_SECURE_NO_WARNINGS // para visual studio
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite 4 palavras:\n";
	char palavra_1[20];
	char palavra_2[20];
	char palavra_3[20];
	char palavra_4[20];
	cin >> palavra_1 >> palavra_2 >> palavra_3 >> palavra_4;

	int tam = strlen(palavra_1) + strlen(palavra_2) + strlen(palavra_3) + strlen(palavra_4);

	char * frase = new char[tam + 3];

	strcpy(frase, palavra_1);
	strcat(frase, " ");
	strcat(frase, palavra_2);
	strcat(frase, " ");
	strcat(frase, palavra_3);
	strcat(frase, " ");
	strcat(frase, palavra_4);

	cout << "Concatenando as palavras obtem-se:\n";
	cout << frase;

	return 0;
}