#include <iostream>
using namespace std;

int main()
{
	long a = 2009032809;
	float b = a;
	double c = a;

	cout << "valor long: " << a << endl;
	cout << endl;
	
	cout << "Mostrando em formato cientifico:" << endl;
	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;
	cout << endl;
	
	cout << "Mostrando no formato decimal:" << endl;
	cout << fixed;
	cout.precision(0);
	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;
	
	return 0;
}

/*

Saída do programa:

valor long: 2009032809

Mostrando em formato científico:
valor float: 2.00903e+09
valor double: 2.00903e+09

Mostrando no formato decimal:
valor float: 2009032832
valor double: 2009032809

Por que os valores são iguais em formato científico, mas diferentes em formato
decimal?

R: são diferentes os valores no formato decimal pois quando fazemos um casting do tipo
long para ponto fluante(float), por natureza, o tipo float gera números imprecisos

*/