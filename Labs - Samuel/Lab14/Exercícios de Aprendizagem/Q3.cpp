#include <iostream>
using namespace std;

int main()
{
    int valor = 10, *temp, soma = 0;
    temp = &valor;
    *temp = 20;
    temp = &soma;
    *temp = valor;
    
    cout << "valor: " << valor << "\nsoma: " << soma << endl;

	return 0;
}

/*

Depuração passo a passo:

linha 6: valor = 10, soma = 0, temp = indefinido
linha 7: valor = 10, soma = 0, temp = 0x7fffe626976(endereço de valor)
linha 8: valor = 20, soma = 0, temp = 0x7fffe626976
linha 9: valor = 20, soma = 0, temp = 0x7fff787f353(endereço de soma)
linha 10: valor = 20, soma = 20, temp = 0x7fff787f353
linha 11: valor = 20, soma = 20, temp = 0x7fff787f353

*/