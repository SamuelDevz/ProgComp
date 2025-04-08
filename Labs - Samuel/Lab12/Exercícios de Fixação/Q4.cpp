#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

struct Data 
{
	int dia;
	int mes;
	int ano;
};

int operator-(Data, Data);
istream& operator>>(istream& is, Data& d);
ostream& operator<<(ostream& os, Data d);

int main() 
{
	Data nasc, hoje;
	
	cout << "Data de nascimento: ";
	cin >> nasc;
	cout << "Data de hoje: ";
	cin >> hoje;

	cout << "Voce tem " << hoje - nasc << " dias de vida." << endl;

	return 0;
}

int operator-(Data hoje, Data nasc) 
{
	// Na data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
	// Essa é a justificativa para subtrair 1 do valor do mês
	int ini = (nasc.ano * 365) + ((nasc.mes - 1) * 31) + nasc.dia;
	int fim = (hoje.ano * 365) + ((hoje.mes - 1) * 31) + hoje.dia;

	return fim - ini;
}

istream& operator>>(istream& is, Data& d) 
{
	is >> d.dia;
	is.get();
	is >> d.mes;
	is.get();
	is >> d.ano;
	return is;
}

ostream& operator<<(ostream& os, Data d) 
{
	os << d.dia << '/' << d.mes << '/' << d.ano;
	return os;
}