#include <iostream>
using namespace std;

int main()
{
    int termo1 = 1;
    int termo2 = 2;
    int soma = 2;

    while (termo2 < 4000000)
    {
        int novoTermo = termo1 + termo2;
        if (novoTermo % 2 == 0)
            soma += novoTermo;
        termo1 = termo2;
        termo2 = novoTermo;
    }

    cout << "A soma dos termos pares da sequencia de Fibonacci menores que quatro milhoes é: " << soma << endl;
    
    return 0;
}