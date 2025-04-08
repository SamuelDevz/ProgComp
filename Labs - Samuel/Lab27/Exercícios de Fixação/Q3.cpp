#include <iostream>
using namespace std;

double calcular(const double, const double, double (*)(const double, const double));
double multiplicacao(const double x, const double y);
double soma(const double x, const double y);

int main()
{
    double (*pf[2])(double, double) { soma, multiplicacao};

    char opcao;
    double x, y;

    do 
    {
        cout << "Digite dois valores separados por espaço: ";
        cin >> x >> y;

        cout << "Escolha a operação (s para soma, m para multiplicação): ";
        cin >> opcao;

        double resultado;

        if (opcao == 's' || opcao == 'm') {
            resultado = calcular(x, y, pf[opcao == 's' ? 0 : 1]);
            cout << "Resultado: " << resultado << endl;
        } else {
            cout << "Opção inválida." << endl;
        }

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