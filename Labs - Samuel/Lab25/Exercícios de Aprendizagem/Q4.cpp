#include <iostream>
using namespace std;

int* unirVetores(const int[], int, const int[], int);

int main() 
{
    int vetorA[] {1, 4, 5, 7};
    int tamanhoA = sizeof(vetorA) / sizeof(int);

    int vetorB[] {3, 2, 8, 9};
    int tamanhoB = sizeof(vetorB) / sizeof(int);

    int * vetorUniao = unirVetores(vetorA, tamanhoA, vetorB, tamanhoB);

    cout << "Vetor A: ";
    for (int i = 0; i < tamanhoA; i++)
        cout << vetorA[i] << " ";

    cout << "\nVetor B: ";
    for (int i = 0; i < tamanhoB; i++)
        cout << vetorB[i] << " ";

    cout << "\nUnião: ";
    for (int i = 0; i < tamanhoA + tamanhoB; i++)
        cout << vetorUniao[i] << " ";
    cout << endl;

    delete[] vetorUniao;

    return 0;
}

int* unirVetores(const int vetor1[], int tamanho1, const int vetor2[], int tamanho2) 
{
    int tamanhoResultado = tamanho1 + tamanho2;
    int * resultado = new int[tamanhoResultado];

    for (int i = 0; i < tamanho1; i++)
        resultado[i] = vetor1[i];

    for (int i = 0; i < tamanho2; i++)
        resultado[i + tamanho1] = vetor2[i];

    return resultado;
}