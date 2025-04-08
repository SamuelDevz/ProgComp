#include <iostream>
using namespace std;

struct Par
{
    int x;
    int y;
};

void calcular(const Par&, int&, int&);

int main() 
{
    cout << "Digite um par de valores:\n";
    Par valores;
    cin >> valores.x >> valores.y;

    int soma, multiplicacao;
    calcular(valores, soma, multiplicacao);

    cout << "Soma: " << soma << endl;
    cout << "Multiplicação: " << multiplicacao << endl;

    return 0;
}

inline void calcular(const Par& entrada, int& soma, int & multiplicacao) 
{
    soma = entrada.x + entrada.y;
    multiplicacao = entrada.x * entrada.y;
}