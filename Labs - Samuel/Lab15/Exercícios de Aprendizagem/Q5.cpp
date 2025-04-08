#include <iostream>
using namespace std;

struct ASCII
{
	char ch;
	int valor;
};

ASCII* alocarASCII(char, int);

int main()
{
	char ch;
	int valor;

	cout << "Digite um caractere: ";
	cin >> ch;
	cout << "Digite um valor inteiro: ";
	cin >> valor;

	ASCII * elemento = alocarASCII(ch,valor);

	cout << "Caractere: " << elemento->ch << endl;
    cout << "Valor: " << elemento->valor << endl;

	delete[] elemento;

    return 0;
}

ASCII* alocarASCII(char ch, int valor)
{
	ASCII * ascii = new ASCII;
	ascii->ch = ch;
	ascii->valor = valor;
	return ascii;
}