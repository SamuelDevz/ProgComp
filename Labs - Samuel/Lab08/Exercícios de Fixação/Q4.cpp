#include <iostream>
#include <clocale>
using namespace std;

#define molecula_da_agua 3e-23
#define um_quarto_do_galao 950

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite a quantidade de galões de água:";
	float qtd_galao;
	cin >> qtd_galao;

	float molecula_totais = qtd_galao *  um_quarto_do_galao / molecula_da_agua * 4;

	cout << "Em " << qtd_galao << " galões existem " << molecula_totais << " moléculas de água.";

    return 0;
}