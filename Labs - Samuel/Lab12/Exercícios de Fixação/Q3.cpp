#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// não foi usado "using namespace std;" porque o espaço de nomes std
// já contém um elemento de nome "Data", o que causaria um choque 
// com o tipo "Data" definido no programa

struct Data
{
	int dia;
	int mes;
	int ano;
};

int DiasDeVida(Data, Data);

int main() 
{
	Data nascimento, atual;
	char barra;

	cout << "Data de nascimento: ";
	cin >> nascimento.dia >> barra >> nascimento.mes >> barra >> nascimento.ano;

	cout << "Data de hoje: ";
	cin >> atual.dia >> barra >> atual.mes >> barra >> atual.ano;

	cout << "Voce tem " << DiasDeVida(nascimento, atual) << " dias de vida." << endl;

	return 0;
}

int DiasDeVida(Data nascimento, Data hoje) 
{	
	// Na Data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
	// Essa é a justificativa para subtrair 1 do valor do mês
	int ini = (nascimento.ano * 365) + ((nascimento.mes - 1) * 31) + nascimento.dia;
	int fim = (hoje.ano * 365) + ((hoje.mes - 1) * 31) + hoje.dia;

	return fim - ini;
}