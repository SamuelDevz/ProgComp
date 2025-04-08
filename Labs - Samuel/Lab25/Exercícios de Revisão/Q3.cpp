#include <iostream>
#include <fstream>
using namespace std;

void preencher_faixa(int*, int*, int);

int main() 
{
	cout << "Nome do arquivo: ";
	char arquivo[40];
	cin >> arquivo;

    ifstream fin(arquivo, ios::binary);
    if (!fin.is_open()) 
    {
        cerr << "Erro ao abrir arquivo " << arquivo << endl;
        return EXIT_FAILURE;
    }

    int valor;
    fin.read((char*)&valor, sizeof(valor));

    fin.close();

    int vetor[10];
    int inicio{}, fim = 4;

    preencher_faixa(&vetor[inicio], &vetor[fim], valor);

    for (int i = 0; i < 4; ++i)
        cout << "vetor[" << i << "] = " << vetor[i] << endl;

    return 0;
}

void preencher_faixa(int* inicio, int* fim, int valor) 
{
    for (int* ptr = inicio; ptr <= fim; ++ptr) 
        *ptr = valor;
}