#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
    cout << "Digite uma letra:";
    char ch;
    cin >> ch;

    cout << "Deseja codificar ou descodificar a letra:\n";
    cout << "0) descodificar\n";
    cout << "1) codificar\n\n";
    cout << "Sua resposta:";
    bool resposta;
    cin >> resposta;

    if(resposta)
    {
        codificar(ch);
        cout << "O caractere codificado:" << ch << '\n';
    }
    else
    {
        decodificar(ch);
        cout << "O caractere descodificado:" << ch << '\n';
    }

    return 0;
}

char codificar(char ch)
{
    return ch += 3;
}

char decodificar(char ch)
{
    return ch -= 3; 
}