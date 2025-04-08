#include <iostream>
#include <clocale>
using namespace std;

bool Num_Primo(int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite um número inteiro maior que zero: ";
    int num;
    cin >> num;

    while(num <= 0)
    {
        cout << "Digite um novamente um número inteiro maior que zero: ";
        cin >> num;
    }

    if (Num_Primo(num))
        cout << num << " é um número primo.\n";
    else
        cout << num << " não é um número primo.\n";
}

bool Num_Primo(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;

    return true;
}