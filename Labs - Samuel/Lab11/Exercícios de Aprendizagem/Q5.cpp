#include <iostream>
using namespace std;

int main()
{
	cout << "Digite seu nome e seu sobrenome: ";
	char nome[20], sobrenome[20];
	cin >> nome >> sobrenome;

	cout << "Bom dia, senhor(a)" << sobrenome << ". Ou devo chama-lo de " << nome << "?";

    return 0;
}