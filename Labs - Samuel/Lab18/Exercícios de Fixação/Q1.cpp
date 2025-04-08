#include <iostream>
using namespace std;

int main()
{
	cout << "Digite números inteiros (0 para finalizar):";
	int n, soma = 0;
	cin >> n;

	while(n != 0)
	{
		soma += n;
		cout << "Soma Parcial: " << soma << endl;
		cin >> n;
	}

    return 0;
}