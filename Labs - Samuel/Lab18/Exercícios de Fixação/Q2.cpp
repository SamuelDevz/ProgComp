#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite números inteiros (0 para finalizar):\n";
	int num_lidos, num,soma;
	float media;
	num_lidos = num = soma = 0;

	cin >> num;

	while(num != 0)
	{
		num_lidos++;
		soma += num;
		cin >> num;
	}

	media = soma / float(num_lidos);

	cout << "Foram lidos " << num_lidos << " números\n";
    cout << "A soma dos números é " << soma << '\n';
    cout << "A média é " << media;

    return 0;
}