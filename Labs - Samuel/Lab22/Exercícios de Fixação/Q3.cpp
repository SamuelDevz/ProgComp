#include <iostream>
using namespace std;

constexpr int tam = 50;

struct bop
{
	char nome[tam];
	char cargo[tam];
	char apelido[tam];
	int pref; 		  // 0 = nome, 1 = cargo, 2 = apelido
};

void exibir_nome(bop func[]);
void exibir_cargo(bop func[]);
void exibir_apelido(bop func[]);
void exibir_preferencia(bop func[]);

int main()
{
	bop empresa[4]
	{
		{ "Jose", "Paquito", "Ze", 1 },
		{ "Marcos", "Porteiro", "Marcao", 1 },
		{ "Joao", "Seguranca", "Jao", 1 },
		{ "Carlos", "Faxineiro", "Carlao", 0 }
	};
	
	cout << "Listagem de Funcionarios\n\n";
	cout << "\ta. Mostrar por nome\n";
	cout << "\tb. Mostrar por cargo\n";
	cout << "\tc. Mostrar por apelido\n";
	cout << "\td. Mostrar por preferencia\n";
	cout << "\te. Sair\n\n";
	
	char opcao;
	while(opcao != 'e')
	{
		cout << "Digite sua opcao: ";
		cin >> opcao;
		
		switch(opcao)
		{
			case 'a': exibir_nome(empresa);	break;
			case 'b': exibir_cargo(empresa); break;
			case 'c': exibir_apelido(empresa); break;
			case 'd': exibir_preferencia(empresa); break;
			case 'e': cout << "Tchau!"; break;
			default: cout << "Opcao invalida"; break;
		}
		
		cout << endl;
	}
}

void exibir_nome(bop func[])
{
	for(int i = 0;i < 4;++i)
		cout << func[i].nome << endl;
}

void exibir_cargo(bop func[])
{
	for(int i = 0;i < 4;++i)
		cout << func[i].cargo << endl;
}

void exibir_apelido(bop func[])
{
	for(int i = 0;i < 4;++i)
		cout << func[i].apelido << endl;
}

void exibir_preferencia(bop func[])
{
	for(int i = 0;i < 4;++i)
	{
		if(func[i].pref == 0)
			cout << func[i].nome << endl;
		else if(func[i].pref == 1)
			cout << func[i].cargo << endl;
		else if(func[i].pref == 2)
			cout << func[i].apelido << endl;
	}
}