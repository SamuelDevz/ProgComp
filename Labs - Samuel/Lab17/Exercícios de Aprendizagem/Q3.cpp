#include <iostream>
using namespace std;

int soma(int, int);

int main()
{
	cout << "Digite um valor inicio e de fim: ";
	int inicial, final;
	cin >> inicial >> final;
	
	int resul = soma(inicial, final);
	
	cout << "A soma do invervalo entre " << inicial 
		 << " e " << final << " é " << resul;
}

int soma(int inicio, int fim)
{
	int soma{};
	for(int i = inicio; i <= fim; ++i)
		soma += i;
	return soma;
}