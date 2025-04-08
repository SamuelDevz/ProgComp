#include <iostream>
#include <clocale>
using namespace std;

double valor_maximo(const double, const double);
double valor_minimo(const double, const double);
char converter_maiusculo(char);
double absoluto(const double);

int main() 
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite dois números separados por espaço: ";
	double num1, num2;
    cin >> num1 >> num2;

    cout << "Digite uma letra em minúsculo: ";
    char letra;
    cin >> letra;

    double maximo = valor_maximo(num1, num2);
    double minimo = valor_minimo(num1, num2);
    char maiusculo = converter_maiusculo(letra);
    double valorAbsoluto = absoluto(num1);

    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Letra em maiúsculo: " << maiusculo << endl;
    cout << "Valor absoluto do primeiro número: " << valorAbsoluto << endl;

    return 0;
}

inline double valor_maximo(const double a, const double b)
{
	return (a > b) ? a : b;
}

inline double valor_minimo(const double a, const double b)
{
	return (a > b) ? b : a;
}

inline double absoluto(const double numero)
{
	return (numero < 0) ? -numero : numero;
}

inline char converter_maiusculo(char ch)
{
	return ch -= 32;
}