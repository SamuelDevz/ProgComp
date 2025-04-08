#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite um número: ";
    int x = 0;
    if (cin >> x; x > 0)
        cout << "Número positivo!" << endl;
    else
        cout << "Número negativo!" << endl;

    return 0;
}