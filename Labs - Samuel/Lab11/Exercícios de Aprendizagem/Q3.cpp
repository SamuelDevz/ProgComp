#include <iostream>
using namespace std;

int main()
{
	cout << "Nome: ";
	char nome_completo[40];
	cin >> nome_completo;

	cout << "Data:";
	char data[10];
	cin >> data;

	char frase[] = " esteve aqui em ";

	cout << nome_completo << frase << data << '\n';

	return 0;
}