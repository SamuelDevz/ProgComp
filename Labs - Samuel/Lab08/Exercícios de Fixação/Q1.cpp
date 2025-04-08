#include <iostream>
using namespace std;

float imc(float, float);
double imc(double, double);

int main()
{
	float imc1 = imc(1.75f,80.0f);
	double imc2 = imc(1.75,80);

	cout.precision(6);

	cout << imc1 << endl;
	cout << imc2 << endl;

	cout.precision(10);

	cout << imc1 << endl;
	cout << imc2 << endl;

    return 0;
}

float imc(float altura, float peso)
{
	float imc = peso / (altura * altura);
	return imc;
}

double imc(double altura, double peso)
{
	double imc = peso / (altura * altura);
	return imc;
}

/*

Mostre o resultado das funções usando a exibição padrão do cout (com 6
dígitos significativos no total). Depois configure o cout para mostrar 10
dígitos depois da vírgula e mostre novamente os mesmos resultados. Como
você explica a diferença nos resultados obtidos?

R: houve diferença entre os resultados pois o tipo float tem uma precisão menor
que o double, ou seja, o float pode guardar até 6 dígitos significativos enquanto
o double, tem uma precisão de até 15 dígitos significativos.


Use uma calculadora comum para fazer essa mesma conta e compare com
o resultado do programa. O programa está fazendo algum tipo de
arredondamento? O resultado obtido com valores float está correto?

R: Sim, o resultado do programa com o tipo float é aproximado, mas 
isso quer dizer que o valor é completamente errado.


Com base nos resultados obtidos, o que seria melhor para este programa?
Usar float e economizar memória ou utilizar double e ter resultados mais
precisos?

R: O melhor para este programa é o tipo float, não precisamos de valores 
tão precisos.

*/