#include <iostream>
#include <fstream>
#include <cstring>
#include <clocale>
using namespace std;

bool isPalindrome(const char*);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite o nome do arquivo de texto: ";
    char nomeArquivo[40];
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) 
	{
        cout << "Erro ao abrir o arquivo " << nomeArquivo << endl;
        exit(EXIT_FAILURE);
    }

    int totalPalindromos = 0;

    char palavra[40];
    while (arquivo >> palavra) 
	{
        if (isPalindrome(palavra)) 
		{
            cout << "Palíndromo encontrado: " << palavra << endl;
            totalPalindromos++;
        }
    }

    arquivo.close();

    cout << "Total de palíndromos encontrados: " << totalPalindromos << endl;
	
	return 0;
}

bool isPalindrome(const char * palavra) 
{
    int tam = strlen(palavra);
    for (int i = 0; i < tam / 2; i++) 
        if (tolower(palavra[i]) != tolower(palavra[tam - 1 - i]))
            return false;
    return true;
}