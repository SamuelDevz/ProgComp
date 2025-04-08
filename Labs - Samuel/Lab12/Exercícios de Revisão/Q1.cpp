#include <iostream>
#include <clocale>
using namespace std;

struct Complexo
{
	float real;
	float img;	
};

Complexo ler();
void exibir(Complexo);
Complexo soma(Complexo, Complexo);
Complexo mult(Complexo, Complexo);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Primeiro Complexo: ";
	Complexo c1 = ler();

	cout << "Segundo Complexo: ";
	Complexo c2 = ler();

	Complexo resul_soma = soma(c1, c2);
	Complexo resul_mult = mult(c1, c2);

	cout << "A soma dos números: ";
	exibir(resul_soma);

	cout << "A multiplicação dos números: ";
	exibir(resul_mult);

	return 0;
}

Complexo soma(Complexo a, Complexo b)
{
	Complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

void exibir(Complexo c)
{
	cout << c.real;
	cout << showpos;
	cout << c.img;
	cout << noshowpos;
	cout << "i";
}

Complexo ler()
{
	Complexo temp;
	cin >> temp.real >> temp.img;
	cin.ignore();
}

Complexo mult(Complexo a, Complexo b)
{
	Complexo x;
	x.real = (a.real * b.real) - (a.img * b.img);
    x.img = (a.real * b.img) + (a.img * b.real);
	return x;
}