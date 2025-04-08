#include <iostream>
using namespace std;

const int num_carros = 10;
const int limite_velocidade = 80;
const int valor_multa = 8;

int main()
{
    int velocidades[num_carros], numMultados, totalArrecadado;
    numMultados = totalArrecadado = 0;

    cout << "Digite as velocidades dos carros:\n";
    for (int i = 0; i < num_carros; i++)
    {
        cin >> velocidades[i];
        if (velocidades[i] > limite_velocidade)
        {
            int kmExcedidos = velocidades[i] - limite_velocidade;
            int multa = kmExcedidos * valor_multa;
            numMultados++;
            totalArrecadado += multa;
            cout << velocidades[i] << " Km/h excede o limite = multa de R$" << multa << endl;
        }
    }

    cout << "Total de carros multados: " << numMultados << endl;
    cout << "Valor total arrecadado em multas: R$" << totalArrecadado << endl;
    cout << "Valor de multa que cada carro deve pagar: R$" << totalArrecadado / numMultados << endl;

	return 0;
}