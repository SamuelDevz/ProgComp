#include <iostream>
using namespace std;

template<typename T>
T maxn(const T [], const int); 

int main()
{
	int vet[6] { 1, 2, 3, 4, 5, 6 };
	double vet2[4] { 1.0, 2.0, 3.0, 4.0 };

	int maior_valor = maxn(vet,6);
	int maior_valor2 = maxn(vet2,4);

	cout << "O maior valor do vetor 1 é: " << maior_valor << endl;
	cout << "O maior valor do vetor 2 é: " << maior_valor2 << endl;
}

template<typename T>
T maxn(const T vet[], const int tam)
{
	T maior_valor{};
	for(int i = 0; i < tam; ++i)
		if(vet[i] > maior_valor)
			maior_valor = vet[i];

	return maior_valor;
}