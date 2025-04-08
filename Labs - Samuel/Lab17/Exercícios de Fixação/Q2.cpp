#include <iostream>
using namespace std;

int main()
{    
    cout << "Entre com o numero de linhas: ";
    int numLinhas;
    cin >> numLinhas;

    for (int i = 1; i <= numLinhas; i++)
    {
        for (int j = 1; j <= numLinhas - i; j++)
            cout << ".";

        for (int k = 1; k <= i; k++)
            cout << "*";

        cout << endl;
    }

    return 0;
}