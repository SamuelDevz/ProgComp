// terceiro.cpp erros de semantica
#include <iostream>
using namespace std;

int main()
{
	int dias;      // declara uma variavel inteira
    cout << "Numero de Dias: ";
    cin >> dias;   // le um valor para a variavel
	
	int horas = dias * 24;
    cout << dias << " dias tem " << horas << " horas." << endl;
     
    return 0;
}