#include <iostream>
using namespace std;

void inserir();
void remover();
void buscar();
void sair();
void erro();

int main()
{
	cout << "Menu do Sistema\n\n";
	
	cout << "a) Inserir\n";
	cout << "b) Remover\n";
	cout << "c) Buscar\n";
	cout << "d) Sair\n\n";
	
	cout << "Escolha: ";
	char opcao;
	cin >> opcao;
	
	while(opcao != 'd')
	{
		switch(opcao)
		{
			case 'a': inserir(); break;
			case 'b': remover(); break;
			case 'c': buscar(); break;
			default: erro(); break;
		}
		cout << "Escolha: ";
		cin >> opcao;
	}
	
	sair();
}

void erro()
{
	cout << "Opcao Invalida\n\n";
}

void inserir()
{
	cout << "Inserindo elementos...\n\n";
}

void remover()
{
	cout << "Removendo elementos...\n\n";
}

void buscar()
{
	cout << "Buscando elementos...\n\n";
}

void sair()
{
	cout << "Tchau!\n";
}