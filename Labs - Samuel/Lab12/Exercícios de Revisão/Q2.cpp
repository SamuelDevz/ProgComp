#include <iostream>
#include <clocale>
using namespace std;

struct Complexo
{
    float real;
    float img;
};

Complexo operator*(Complexo, Complexo);
Complexo operator+(Complexo, Complexo);
ostream& operator<<(ostream&, Complexo&);
istream& operator>>(istream&, Complexo&);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite o primeiro número Complexo: ";
    Complexo c1;
    cin >> c1;

    cout << "Digite o segundo número Complexo: ";
    Complexo c2;
    cin >> c2;

	Complexo soma = c1 + c2;
    cout << "A soma dos números: ";
    cout << soma << endl;

	Complexo mult = c1 * c2;
    cout << "A multiplicação dos números: ";
    cout << mult << endl;

    return 0;
}

Complexo operator+(Complexo a, Complexo b)
{
    Complexo c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

ostream& operator<<(ostream& os, Complexo& c)
{
    os << c.real;
    os << showpos;
    os << c.img;
    os << noshowpos;
    os << "i";

    return os;
}

istream& operator>>(istream& is, Complexo& temp)
{
    is >> temp.real >> temp.img;
    is.ignore();
    return is;
}

Complexo operator*(Complexo a, Complexo b)
{
    Complexo x;
    x.real = (a.real * b.real) - (a.img * b.img);
    x.img = (a.real * b.img) + (a.img * b.real);
    return x;
}