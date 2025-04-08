#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd; 			               // gerador não determinístico.
	mt19937 mt(rd()); 			               // semente para o Mersenne twister.
	uniform_int_distribution<int> dist(0, 10); // distribui os resultados entre 0 e 10.

	int CPU = dist(mt);

    cout << "Digite um numero entre 0-10:\n";
    int num;
    cin >> num;

    while(CPU != num)
    {
        if(CPU > num) cout << "Muito baixo\n";
        else          cout << "Muito alto\n";
        cin >> num;
    }

    cout << "Você acertou o numero!!";

    return 0;
}