#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	a = 1 + 2; 	   // linha 1
	b = 1 + a;     // linha 2
	c = 1 % 5;     // linha 3
	a = a + 2;     // linha 4
	b = a - c;     // linha 5
	b = 5 * c / 2; // linha 6
}

/*

Considere que o trecho de código abaixo faz parte de um programa válido. Qual o
valor das variáveis após cada instrução de atribuição? Responda preenchendo a
tabela.

int a, b, c;
	
a = 1 + 2; 	   // linha 1
b = 1 + a;     // linha 2
c = 1 % 5;     // linha 3
a = a + 2;     // linha 4
b = a - c;     // linha 5
b = 5 * c / 2; // linha 6

i = indefinido

	a		b		c
    -----------------
1	3		i		i
2	3		4		i
3	3		4		1
4	5		4		1
5	5		4		1
6	5		2.5		1

R : a, b e c correspondem a 5, 2 e 1, respectivamente.

*/