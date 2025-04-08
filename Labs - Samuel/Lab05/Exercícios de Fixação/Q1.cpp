#include <iostream>
#include <clocale>
using namespace std;

void exibir(int, int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Entre com o número de horas:";
    int horas;
    cin >> horas;

    cout << "Entre com o número de minutos:";
    int min;
    cin >> min;

    exibir(horas, min);

	return 0;
}

void exibir(int h, int min)
{
    cout << "Agora são " << h << ":" << min;
}