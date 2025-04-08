#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um numero inteiro: ";
    int primeiroValor;
    cin >> primeiroValor;

    cout << "Digite outro numero inteiro: ";
    int segundoValor;
    cin >> segundoValor;

    int menorValor, maiorValor;

    if (primeiroValor < segundoValor)
    {
        menorValor = primeiroValor;
        maiorValor = segundoValor;
    }
    else
    {
        menorValor = segundoValor;
        maiorValor = primeiroValor;
    }

    int soma{};

    for (int i = menorValor + 1; i < maiorValor; i++)
        soma += i;

    cout << "A soma de todos os valores entre " << menorValor 
    	 << " e " << maiorValor << ": " << soma << endl;

	return 0;
}