#include <iostream>
using namespace std;

float IMC(float, float);

int main()
{
    cout << "Indice de Massa Corporal (IMC)\n";
    cout << "------------------------\n";

    cout << "Altura:";
    float altura;
    cin >> altura;

    cout << "Massa:";
    float massa;
    cin >> massa;

    float imc = IMC(massa, altura);

    cout << "IMC:" << imc << '\n';

    return 0;
}

float IMC(float altura, float massa)
{
    float imc = massa / (altura * altura);
}