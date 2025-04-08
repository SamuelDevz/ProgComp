#include <iostream>
using namespace std;

int main()
{
	int * ptr = new int;
	*ptr = 100;

	cout << "Conteudo armazenado: " << *ptr << endl;
	cout << "Digite novo valor para esse bloco de memoria: ";
	int valor;
	cin >> valor;

	*ptr = valor;

	delete ptr;

	return 0;
}