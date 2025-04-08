#include <iostream>
#include <clocale>
using namespace std;

float ajuste_de_salario(float);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Salário atual:";
    float salario;
    cin >> salario;

    float salario_ajustado = ajuste_de_salario(salario);

    cout << "Salário ajustado para R$" << salario_ajustado << '\n';

	return 0;
}

float ajuste_de_salario(float valor)
{
    float salario = valor + valor * 0.15;
    return salario;
}