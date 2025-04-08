#include <iostream>
#include <cstring>
using namespace std;

struct Nadador
{
	char nome[20];
	int idade;
	char categoria[12];
};

int main()
{
	cout << "Digite o nome: ";
	Nadador a;
	cin >> a.nome;
	
	cout << "Digite a idade: ";
	cin >> a.idade;
	
	if(a.idade >= 5 && a.idade <= 7)
		strcpy(a.categoria, "Infantil");
	else if(a.idade >= 8 && a.idade <= 10)
		strcpy(a.categoria, "Juvenil");
	else if(a.idade >= 11 && a.idade <= 15)
		strcpy(a.categoria, "Adolescente");
	else if(a.idade >= 16 && a.idade <= 30)
		strcpy(a.categoria, "Adulto");
	else if(a.idade > 30)
		strcpy(a.categoria, "Senior");
	else
		cout << "Ele e muito novo para a natacao\n"; return 0;
	
	cout << "Nome: " << a.nome << endl;
	cout << "Idade: " << a.idade << endl;
	cout << "Categoria: " << a.categoria << endl;

    return 0;
}