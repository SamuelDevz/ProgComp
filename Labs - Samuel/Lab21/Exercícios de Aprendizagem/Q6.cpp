#include <iostream>
using namespace std;

int encontrarMenorDivisivel();
int calcularMDC(int, int);
int calcularMMC(int, int);

int main()
{
    int menorDivisivel = encontrarMenorDivisivel();

    cout << "O menor numero divisivel por todos os numeros de 1 a 20 e: " << menorDivisivel << endl;

    return 0;
}

int calcularMDC(int a, int b)
{
    if (b == 0)
        return a;
    else
        return calcularMDC(b, a % b);
}

int calcularMMC(int a, int b)
{
    return (a * b) / calcularMDC(a, b);
}

int encontrarMenorDivisivel()
{
    int mmc = 1;

    for (int i = 2; i <= 20; i++)
        mmc = calcularMMC(mmc, i);

    return mmc;
}