#include <iostream>
using namespace std;

int main() 
{
    // alterando o codigo de página silenciosamente
    system("chcp 1252 > nul");

    // exibindo uma frase contem acentos
    cout << "Acentuação é possível?" << endl;

    // leia uma palavra que contem acentos
    char palavra[40];
    cin >> palavra;

    // exibindo o que foi lido
    cout << palavra << endl;

    return 0;
}