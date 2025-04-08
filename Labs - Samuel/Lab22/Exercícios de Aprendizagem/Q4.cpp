#include <iostream>
#include <string>
using namespace std;

string obterProcedencia(int codigoOrigem)
{
    switch (codigoOrigem)
	{
        case 1:
        case 2: return "Sul";

        case 3: return "Norte";
        case 4: return "Centro-oeste";
        
        case 5:
        case 6: return "Nordeste";
        
        case 7:
        case 8:
        case 9: return "Sudeste";
        
        default: return "Codigo Invalido";
    }
}

int main()
{
    int codigoOrigem;
    double preco;

    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "Digite o codigo de origem do produto: ";
    cin >> codigoOrigem;

    string procedencia = obterProcedencia(codigoOrigem);

    cout << "Procedencia: " << procedencia << endl;

    return 0;
}