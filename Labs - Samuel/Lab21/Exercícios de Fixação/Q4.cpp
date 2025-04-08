#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Caixa Eletrônico\n";
    cout << "----------------\n";
    cout << "Saque: ";
    int saque;
    cin >> saque;

    int cedulas50 = saque / 50;
    saque = saque % 50;

    int cedulas20 = saque / 20;
    saque = saque % 20;

    int cedulas10 = saque / 10;
    saque = saque % 10;

    int cedulas5 = saque / 5;
    saque = saque % 5;

    cout << "Entregando:\n";
    cout << cedulas50 << " cédula(s) de R$50\n";
    cout << cedulas20 << " cédula(s) de R$20\n";
    cout << cedulas10 << " cédula(s) de R$10\n";
    cout << cedulas5 << " cédula(s) de R$5\n";

    return 0;
}