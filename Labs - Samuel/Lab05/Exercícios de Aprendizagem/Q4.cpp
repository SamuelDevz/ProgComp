#include <iostream>
#include <cmath>
using namespace std;

float modulo_vetor(float, float);

int main()
{
    cout << "Digite as coordenadas do vetor:\n";
    cout << "x:";
    float x;
    cin >> x;

    cout << "y:";
    float y;
    cin >> y;

    float vetor = modulo_vetor(x,y);

    cout << "O tamanho do vetor e " << vetor << '\n';

	return 0;
}

float modulo_vetor(float x, float y)
{
    float vetor = sqrt(pow(x, 2) + pow(y, 2));
    return vetor;
}