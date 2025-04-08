#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Informe a distância da viagem em quilômetros: ";
    int distancia;
    cin >> distancia;

    double preco;
    if (distancia <= 200)
        preco = distancia * 0.5;
    else if (distancia <= 400)
        preco = distancia * 0.4;
    else
        preco = distancia * 0.3;

    cout << "O preço da passagem é: R$" << preco << endl;

	return 0;
}