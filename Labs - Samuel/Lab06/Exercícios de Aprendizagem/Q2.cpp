#include <iostream>
#include <clocale>
using namespace std;

#define PRECO_PAO 0.3
#define PRECO_PASTEL 0.25

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Pães&Cia\n\n";

    cout << "Quantos pães? ";
    int paes;
    cin >> paes;

    cout << "Quantos pastéis? ";
    int pasteis;
    cin >> pasteis;

    float total = paes * PRECO_PAO + PRECO_PASTEL * pasteis;

    cout << "O total das compras é R$" << total << '\n';

	return 0;
}