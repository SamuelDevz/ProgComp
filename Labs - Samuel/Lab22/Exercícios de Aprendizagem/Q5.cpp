#include <iostream>
using namespace std;

void somar(float, float);
void subtrair(float, float);
void multiplicar(float, float);
void dividir(float, float);

int main()
{
    char resp = 'S';
    while(resp != 'N' && resp != 'n')
    {
        cout << "Digite o operador: ";
        char operador;
        cin >> operador;

        cout << "Digite dois numeros: ";
        float n1, n2;
        cin >> n1 >> n2;

        switch(operador)
        {
            case '+': somar(n1, n2); break;
            case '-': subtrair(n1, n2); break;
            case '*': multiplicar(n1, n2); break;
            case '/': dividir(n1, n2); break;
        }

        cout << "Deseja continuar (S/N)? ";
        cin >> resp;
    }

    return 0;
}

void somar(float n1, float n2)
{
    cout << "A soma de " << n1 << " e " << n2 << " e igual a " << n1 + n2 << endl;
}

void subtrair(float n1, float n2)
{
    cout << "A subtracao de " << n1 << " e " << n2 << " e igual a " << n1 - n2 << endl;
}

void multiplicar(float n1, float n2)
{
    cout << "A multiplicacao de " << n1 << " e " << n2 << " e igual a " << n1 * n2 << endl;
}

void dividir(float n1, float n2)
{
    if(n2 == 0)
        cerr << "Impossivel dividir por zero";
    else
        cout << "A divisao de " << n1 << " e " << n2 << " e igual a " << n1 / n2 << endl;
}