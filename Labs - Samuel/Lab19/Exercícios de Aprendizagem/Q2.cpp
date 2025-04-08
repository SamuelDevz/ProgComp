#include <iostream>
#include <clocale>
using namespace std;

const char * meses[12]
{
	"Janeiro", "Fevereiro", "Março", "Abril",
	"Maio", "Junho", "Julho", "Agosto",
	"Setembro", "Outubro", "Novembro", "Dezembro"
};

const int linhas = 3;
const int colunas = 12;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int ** mat = new int* [linhas];
	int vendas_ano[3]{};

	for(int i = 0;i < linhas;++i)
		mat[i] = new int[colunas];

	for(int i = 0;i < linhas;++i)
	{
		cout << "Digite o número de livros vendidos no " << i + 1 <<  "° ano:\n";
		for(int j = 0;j < colunas;++j)
		{
			cout << meses[j] << ": ";
			cin >> mat[i][j];
		}
		cout << endl;
	}

	for(int i = 0;i < linhas;++i)
		for(int j = 0;j < colunas;++j)
			vendas_ano[i] += mat[i][j];

	cout << "Total de vendas\n";
	cout << "1° ano: " << vendas_ano[0] << endl;
	cout << "2° ano: " << vendas_ano[1] << endl;
	cout << "3° ano: " << vendas_ano[2] << endl;

	int vendas_total = vendas_ano[0] + vendas_ano[1] + vendas_ano[2];

	cout << "\n\nNos três anos foram vendidos " << vendas_total << " livros"; 

	for(int i = 0;i < linhas;++i)
		delete [] mat[i];
	delete [] mat;

	return 0;
}