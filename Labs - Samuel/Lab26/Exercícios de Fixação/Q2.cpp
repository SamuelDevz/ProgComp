#include <iostream>
using namespace std;

const char * Meses[4] { "Marco", "Abril", "Junho", "Julho" };

struct GastosMes 
{
    double gastos;
};

void preencher(GastosMes[], int);
void mostrar(GastosMes[], int);

int main() 
{
    constexpr int MAX = 4;
    GastosMes gastos[MAX];

    preencher(gastos, MAX);
    mostrar(gastos, MAX);

    return 0;
}

void preencher(GastosMes vet[], int tam) 
{
    for (int i = 0; i < tam; ++i) 
    {
        cout << "Entre com o gasto de " << Meses[i] << ": ";
        cin >> vet[i].gastos;
    }
}

void mostrar(GastosMes vet[], int tam) 
{
    double total{};
    cout << "\nGastos\n";
    for (int i = 0; i < tam; i++) 
    {
        cout << Meses[i] << ": R$" << vet[i].gastos << endl;
        total += vet[i].gastos;
    }
    cout << "Total de gastos: R$" << total << endl;
}