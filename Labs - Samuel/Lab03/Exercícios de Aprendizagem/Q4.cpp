#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Custo de fábrica: ";
	int custo;
	cin >> custo;

	float impostos_distribuidor = 0.28 * custo;
	float impostos_custo_da_fabrica = 0.45 * custo;
	float custo_final = custo + impostos_distribuidor + impostos_custo_da_fabrica;

	cout << "O custo ao consumindor é de R$ " << custo_final << '\n';

	return 0;
}