#include <iostream>
#include <cstring>
using namespace std;

void FirstName(char*, char*);
void LastName(char*, char*);

int main() 
{
    char nome[100], primeiroNome[50], ultimoNome[50];

    while(true) 
    {
        cout << "Entre com os nomes a cadastrar ('.' para encerrar): ";
        cin.getline(nome, 100);
        if(strcmp(nome, ".") == 0) 
            break;

        FirstName(nome, primeiroNome);
        LastName(nome, ultimoNome);
        cout << ultimoNome << ", " << primeiroNome << endl;
    }
}

void FirstName(char* origem, char* destino)
{
    int i{};
    while(origem[i] != ' ' && origem[i] != '\0') 
    {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

void LastName(char* origem, char* destino)
{
    int i = strlen(origem) - 1;

    for(; i >= 0 && origem[i] != ' '; --i);
    
    int j{};
    while(origem[i] != '\0') 
    {
        destino[j] = origem[i];
        i++;
        j++;
    }
    destino[j] = '\0';
}