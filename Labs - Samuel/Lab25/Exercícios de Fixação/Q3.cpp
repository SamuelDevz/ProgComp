#include <iostream>
using namespace std;

constexpr int MAX = 10;

double* preencher(double*, double*, double*);
void mostrar(const double*, const double*);
void inverter(double*, double*);

int main() 
{
    double vetor[MAX];
    double * inicio = vetor;
    double * fim = preencher(inicio, vetor + MAX, vetor);
    
    mostrar(inicio, fim);
    inverter(inicio, fim);
    mostrar(inicio, fim);

    if (fim - inicio > 2) 
    {
        inverter(inicio + 1, fim - 1);
        mostrar(inicio, fim);
    }

    return 0;
}

double* preencher(double * inicio, double * fim, double * atual) 
{
    cout << "Entre com ate " << fim - inicio << " valores:\n";
    
    while (atual < fim && cin >> *atual) 
        atual++;

    return atual;
}

void mostrar(const double* inicio, const double* fim) 
{
    cout << "Vetor:\n";
    for (const double* ptr = inicio; ptr < fim; ptr++)
        cout << *ptr << " ";
    cout << endl;
}

void inverter(double * inicio, double * fim) 
{
    while (inicio < fim) 
    {
        double temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}