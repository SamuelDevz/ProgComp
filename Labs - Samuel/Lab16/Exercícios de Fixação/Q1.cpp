#include <iostream>
#include <clocale>
using namespace std;

const int meses_totais = 12;
const char meses[meses_totais][10]
{
	"Janeiro", "Fevereiro", "Março", "Abril",
	"Maio", "Junho", "Julho", "Agosto",
	"Setembro", "Outubro", "Novembro", "Dezembro"
};

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int vendas_mes[meses_totais];
	
	cout << "Digite o número de livros vendidos:\n";

	for(int i = 0; i < meses_totais; ++i)
	{
		cout << meses[i] << ": ";
		cin >> vendas_mes[i];
	}

	int vendas_totais{};

	for(int i = 0; i < meses_totais; ++i)
		vendas_totais += vendas_mes[i];

	cout << "Em um ano foram vendidos " << vendas_totais << " livros.\n";

	return 0;
}