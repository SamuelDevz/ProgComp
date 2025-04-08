#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Que horas são? ";
    int horas, minutos;
    char pontos;    
    cin >> horas >> pontos >> minutos;

    cout << "O seu relógio está atrasado.\n";
    cout << "Agora são " << horas + 1 << pontos << minutos << '\n';

    return 0;
}