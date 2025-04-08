#include <iostream>
using namespace std;

int main() 
{
    // exibindo uma frase contem acentos
    cout << "Acentuação é possível?" << endl;

    // leia uma palavra que contem acentos
    char palavra[40];
    cin >> palavra;

    // exibindo o que foi lido
    cout << palavra << endl;

    return 0;
}

/*

O programa não exibe corretamente os acentos e
o nome lido pelo teclado não pode conter acentos

*/