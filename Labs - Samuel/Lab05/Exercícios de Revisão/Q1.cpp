// versão 1

/*

#include <iostream>
using namespace std;

void alarme();
int lerSenha();

int main()
{
    cout << "Iniciando...\n";

    alarme();
    cout << "Senha: ";
    int senha = lerSenha();
    
    cout << "Finalizando...\n";
    alarme();
    
    return 0;
}

void alarme()
{
    cout << '\a';
}

int lerSenha()
{
    int n;
    cin >> n;
    return n;
}

*/

// versão 2

#include <iostream>
using namespace std;

void alarme();
void lerSenha();
void finalizando();

int main()
{
    alarme();
    lerSenha();
    finalizando();

    return 0;
}

void alarme()
{
    cout << "Iniciando...\n";
    cout << '\a';
}

void lerSenha()
{
    cout << "Senha: ";
    int senha;
    cin >> senha;
}

void finalizando()
{
    cout << "Finalizando...\n";
    cout << '\a';
}