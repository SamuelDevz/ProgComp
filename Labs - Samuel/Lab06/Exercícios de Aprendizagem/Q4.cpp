#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
    long long resultado = 200530 * 420800ll;
    
	cout << "Direto: " << resultado << endl;
    cout << "Funcao: " << calculo(200530, 420800) << endl;

    return 0;
}

long long calculo(long long a, long long b)
{
    return a * b;
}