#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
    cout << "Digite um caractere:";
    char ch;
    cin >> ch;

    ch = codificar(ch);
    cout << "O caractere codificado:" << ch << endl;

    ch = decodificar(ch);
    cout << "O caractere decodificado:" << ch << endl;

    return 0;
}

char codificar(char ch)
{
    return ch + 3;
}

char decodificar(char ch)
{
    return ch - 3; 
}