#include <iostream>
using namespace std;

void Linha();
void Pequena();
void Media();
void Grande();

int main()
{
	Pequena();
	cout << endl;

	Media();
	cout << endl;

	Grande();
	cout << endl;

	cout << "Programaçao de Computadores\n";

	Grande();
	cout << endl;

	Media();
	cout << endl;

	Pequena();

	return 0;
}

void Linha()
{
	cout << "----------";
}

void Pequena()
{
	Linha(); 
}

void Media()
{
	Linha();
	Linha();
}

void Grande()
{
	Linha();
	Linha();
	Linha();
}