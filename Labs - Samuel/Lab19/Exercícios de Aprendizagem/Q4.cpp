#include <iostream>
using namespace std;

void exibirVetor(int vetor[] ,int);

int main()
{
    int mat[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "mat[0][0]: " << mat[0][0] << endl;
    cout << "mat[0]: "; 
    exibirVetor(mat[0], 3);
    cout << "&mat[0][0]: " << &mat[0][0] << endl;

	return 0;
}

void exibirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        cout << vetor[i] << " ";
    cout << endl;
}