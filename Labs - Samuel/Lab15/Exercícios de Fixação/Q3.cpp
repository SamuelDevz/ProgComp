#include <iostream>
using namespace std;

struct Carro
{
    char modelo[20];
    int ano;
    double preco;
};

int main() 
{
    Carro garagem[10]
    {
        { "Vectra", 2009, 58000 },
        { "Polo", 2008, 45000 }
    };

    Carro * car = &garagem[1];

    cout << "===== Carro 2 =====\n";
    cout << "Modelo: " << car->modelo;
    cout << "Ano: " << car->ano;
    cout << "Preco: " << car->preco;

	return 0;
}