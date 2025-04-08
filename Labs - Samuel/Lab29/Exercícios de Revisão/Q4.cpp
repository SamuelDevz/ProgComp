#include <iostream>
using namespace std;

template<typename T>
T max5(T []); 

int main()
{
	int vet[5] {1, 2, 3, 4, 5};
	double vet2[5] {1.0, 2.0, 3.0, 4.0, 5.0};

	int maior_valor = max5(vet);
	int maior_valor2 = max5(vet2);

	cout << "O maior valor do vetor 1 é: " << maior_valor << endl;
	cout << "O maior valor do vetor 2 é: " << maior_valor2 << endl;

    return 0;
}

template<typename T>
T max5(T vet[])
{
	T maior_valor = 0;
	for(int i = 0;i < 5;++i)
		if(vet[i] > maior_valor)
			maior_valor = vet[i];

	return maior_valor;
}