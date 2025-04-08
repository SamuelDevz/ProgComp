#include <iostream>
using namespace std;

struct Carro
{
    char modelo[20];
    int ano;
    double preco;
};

void ler_carro(Carro *);

int main() 
{
    Carro * garagem = new Carro[2];
    ler_carro(garagem);
    delete[] garagem; 

	return 0;
}

void ler_carro(Carro * garagem)
{
    cout << "Entre com os dados de 2 carros: ";
    cin >> garagem[0].modelo >> garagem[0].ano >> garagem[0].preco;
    cin >> garagem[1].modelo >> garagem[1].ano >> garagem[1].preco;
    cout << "O valor total e R$" << garagem[0].preco + garagem[1].preco;
}