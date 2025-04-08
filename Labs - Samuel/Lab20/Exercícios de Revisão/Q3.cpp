#include <iostream>
using namespace std;

int main()
{
    int x, v;
    x = v = 0;

    if (x < 0)
        v = 1;
    if (x < 5)
        v = 2;
    else if (x < 10)
        v = 3;

	return 0;
}

/*

Qual o resultado do trecho de código abaixo se x e v forem inicializados com zero?
É possível usar o depurador com o código escrito todo em uma linha? Faça o teste
e em seguida quebre o programa em várias linhas de forma a facilitar a leitura do
código. Aplique a indentação correta em cada linha.

if (x < 0) v = 1; if (x < 5) v = 2; else if (x < 10) v = 3;

R: Se x e v forem inicializados com 0 o resultado será v = 2 e x = 0

*/