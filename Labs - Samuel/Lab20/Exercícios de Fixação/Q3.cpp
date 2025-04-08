#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite ate 10 valores de donativos (zero para encerrar):\n";
    int vet[10], soma, num_lidos, maior_media;
    soma = num_lidos = maior_media = 0;

    for(int i = 0; i < 10; ++i)
    {
        cin >> vet[i];
        if(vet[i] != 0)
        {
            soma += vet[i];
            num_lidos++;
        }
        else
		{
            break;
		}
    }

    float media = soma / float(num_lidos);

    for(int i = 0;i < num_lidos;++i)
        if(vet[i] > media)
            maior_media++;

    cout << "A media dos valores doados foi de R$" << media << endl;
    cout << maior_media << " valores foram maiores que a media.\n";

	return 0;
}