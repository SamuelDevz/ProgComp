#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int calcular_palavras(const char*);

int main()
{
    cout << "Entre com uma frase:\n";
    char frase[40];
    cin.getline(frase, 40);
	
    int palavras = calcular_palavras(frase);
    cout << "Existem " << palavras << " palavras nesta frase!\n";

	return 0;
}

int calcular_palavras(const char * str)
{
    int tam = strlen(str);
    int palavras{};
    bool dentroDePalavra = false;

    for (int i = 0; i < tam; ++i) 
    {
        if (isspace(str[i])) 
        {
            dentroDePalavra = false;
        } 
        else if (!dentroDePalavra) 
        {
            palavras++;
            dentroDePalavra = true;
        }
    }

    return palavras;
}