#include <iostream>
#include <clocale>
using namespace std;

enum Mes
{
	Jan=1,
	Fev,
	Mar,
	Abr,
	Mai,
	Jun,
	Jul,
	Ago,
	Set,
	Out,
	Nov,
	Dez
};

istream& operator>>(istream&, Mes);
ostream& operator<<(ostream&, Mes);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
    Mes inicio, fim;
    inicio = Mar; // inicio do semestre
    fim = Jun;    // fim do semestre
    cout << "Digite o número do mês atual: ";
    Mes atual;
    cin >> atual;

    cout << atual << endl;

    if (atual >= inicio && atual <= fim)
        cout << "Você está em período de aulas.\n";
    else
        cout << "Férias!\n";
    return 0;
}

istream& operator>>(istream& is, Mes m)
{
    int temp;
    is >> temp;
    m = (Mes)temp;
    return is;
}

ostream& operator<<(ostream& os, Mes m)
{
    switch (m) 
    {
        case Jan: os << "Janeiro"; break;
        case Fev: os << "Fevereiro"; break;
        case Mar: os << "Março"; break;
        case Abr: os << "Abril"; break;
        case Mai: os << "Maio"; break;
        case Jun: os << "Junho"; break;
        case Jul: os << "Julho"; break;
        case Ago: os << "Agosto"; break;
        case Set: os << "Setembro"; break;
        case Out: os << "Outubro"; break;
        case Nov: os << "Novembro"; break;
        case Dez: os << "Dezembro"; break;
        default: os.setstate(ios_base::failbit);
    }
    return os;
}