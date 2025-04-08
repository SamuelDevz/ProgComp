#include <iostream>
using namespace std;

void (*print)(const char[]);

void normal(const char texto[]);
void alternativo(const char texto[]);
void mensagem();

int main()
{
	cout << "Usar print normal [s/n]? ";
	char opcao;
	cin >> opcao;

	if (opcao == 's') print = normal;
	else              print = alternativo;
	
	mensagem();

    return 0;
}

void normal(const char texto[])
{ 
	cout << texto << endl; 
}

void alternativo(const char texto[])
{ 
	cout << "<<< " << texto << " >>>\n"; 
}