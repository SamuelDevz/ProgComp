#include <iostream>
#include <clocale>
using namespace std;

float media(int, int);

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite um valor inteiro:";
    int num;
    cin >> num;

    cout << "Digite outro valor inteiro:";
    int num2;
    cin >> num2;

    float resul = media(num, num2);

    cout << "A média dos números é " << resul << '\n';

    return 0;
}

float media(int a, int b)
{
    float media = (a + b) / 2;
    return media;
}