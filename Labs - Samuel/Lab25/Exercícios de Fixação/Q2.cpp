#include <iostream>
using namespace std;

const int MAX = 10;

int preencher(double[], int);
void mostrar(const double[], int);
void inverter(double[], int);

int main() 
{
    double vetor[MAX];
    int tamanho = preencher(vetor, MAX);
    
    mostrar(vetor, tamanho);
    inverter(vetor, tamanho);
	mostrar(vetor, tamanho);

    if (tamanho > 2) 
    {
        inverter(vetor + 1, tamanho - 2);
        mostrar(vetor, tamanho);
    }

	return 0;
}

int preencher(double vetor[], int tam) 
{
    cout << "Entre com ate " << tam << " valores:\n";
    int contador = 0;
    double valor;

    while (contador < tam && cin >> valor) 
    {
        vetor[contador] = valor;
        contador++;
    }

    return contador;
}

void mostrar(const double vetor[], int tam) 
{
    cout << "Vetor:\n";
    for (int i = 0; i < tam; i++)
        cout << vetor[i] << " ";
    cout << endl;
}

void inverter(double vetor[], int tam) 
{
    for (int i = 0; i < tam / 2; i++) 
    {
        double temp = vetor[i];
        vetor[i] = vetor[tam - i - 1];
        vetor[tam - i - 1] = temp;
    }
}