#include <iostream>
#include <clocale>
using namespace std;

int soma(int, int, int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite três números inteiros a, b e c (\"a\" maior que 1):\n";
    int a, b, c;
    cin >> a >> b >> c;
    
    int resul = soma(a,b,c);
    cout << "A soma é igual a " << resul;

    return 0;
}

int soma(int divisor, int inicio, int fim)
{
    int soma{};
    for(int i = inicio;i <= fim;++i)
        if(i % divisor == 0)
            soma += i;
    return soma;
}