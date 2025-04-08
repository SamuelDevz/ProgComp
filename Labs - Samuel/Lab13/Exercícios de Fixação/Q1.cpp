#include <iostream>
#include <clocale>
using namespace std;

union Cor
{
	char nome[20];
	char codigo[5];
	int num; 	
};

struct Carro
{
	char modelo[30];
	int ano;
	Cor cor;
	double preco; 
};

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	Carro concessionaria[10]
	{
		{ "Vectra", 2009, "Azul", 58000 },
		{ "Polo", 2008, "Preto", 45000 }
	};

	cout << "===== Garagem =====\n";
	cout << "Carro 3\n\n";

	cout << "Modelo:";
	cin.getline(concessionaria[2].modelo,30);

	cout << "Ano:";
	cin >> concessionaria[2].ano;

	cout << "Cor:";
	cin.get();
	cin.getline(concessionaria[2].cor.nome, 20);

	cout << "Preço:";
	cin >> concessionaria[2].preco;

	cout << "\n===== Garagem =====\n";
	cout << "\nCarro 1\n";
	cout << "\nModelo: " << concessionaria[0].modelo << endl;
	cout << "Ano: " << concessionaria[0].ano << endl;
	cout << "Cor: " << concessionaria[0].cor.nome << endl;
	cout << "Preço: R$" << concessionaria[0].preco << endl;

	cout << "\nCarro 2\n";
	cout << "\nModelo: " << concessionaria[1].modelo << endl;
	cout << "Ano: " << concessionaria[1].ano << endl;
	cout << "Cor: " << concessionaria[1].cor.nome << endl;
	cout << "Preço: R$" << concessionaria[1].preco << endl;

	cout << "\nCarro 3\n";
	cout << "\nModelo: " << concessionaria[2].modelo << endl;
	cout << "Ano: " << concessionaria[2].ano << endl;
	cout << "Cor: " << concessionaria[2].cor.nome << endl;
	cout << "Preço: R$" << concessionaria[2].preco << endl;

	return 0;
}