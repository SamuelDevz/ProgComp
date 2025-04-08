#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool corrigirNome(char[]);

int main() 
{
    cout << "Entre com os nomes dos aprovados (fim para encerrar):\n";
    char nome[100];

    while (cin.getline(nome, sizeof(nome)) && strcmp(nome, "fim") != 0) 
    {
        bool alterado = corrigirNome(nome);
        cout << nome << (alterado ? " <-- Corrigido\n" : " <-- OK\n");
    }

	return 0;
}

bool corrigirNome(char nome[]) 
{
    bool alterado = false;
    bool novaPalavra = true;

    for (int i = 0; nome[i]; i++) 
    {
        if (nome[i] == ' ') 
        {
            novaPalavra = true;
        } 
        else if (novaPalavra && nome[i] >= 'a' && nome[i] <= 'z') 
        {
            nome[i] -= 'a' - 'A';
            alterado = true;
            novaPalavra = false;
        } 
        else if (!novaPalavra && nome[i] >= 'A' && nome[i] <= 'Z') 
        {
            nome[i] += 'a' - 'A';
            alterado = true;
        } 
        else 
        {
            novaPalavra = false;
        }
    }

    return alterado;
}