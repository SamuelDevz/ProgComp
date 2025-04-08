#include <iostream>
#include <clocale>
using namespace std;

double calcular(const double, const double, double (*)(const double, const double));
double multiplicacao(const double x, const double y);
double soma(const double x, const double y);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char opcao;
    double x, y;

    do 
    {
        cout << "Digite dois valores separados por espaço: ";
        cin >> x >> y;

        cout << "Escolha a operação (s para soma, m para multiplicação): ";
        cin >> opcao;

        double resultado;

        if (opcao == 's') 
        {
            resultado = calcular(x, y, soma);
        } 
        else if (opcao == 'm') 
        {
            resultado = calcular(x, y, multiplicacao);
        } 
        else 
        {
            cout << "Opção inválida." << endl;
            continue;
        }

        cout << "Resultado: " << resultado << endl;

        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;
    } while (opcao == 's');

    return 0;
}

inline double calcular(const double a, const double b, double (*pf)(const double, const double))
{
    return pf(a, b);
}

inline double soma(const double x, const double y)
{
    return x + y;
}

inline double multiplicacao(const double x, const double y)
{
    return x * y;
}