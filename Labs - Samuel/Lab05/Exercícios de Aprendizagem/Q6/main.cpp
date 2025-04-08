#include <iostream>
#include <cmath>
#include "funcoes.cpp"
using namespace std;

int main()
{
    cout << "Digite as coordenadas de um vetor:\n";
    
    cout << "x:";
    float x;
    cin >> x;

    cout << "y:";
    float y;
    cin >> y;

    float angulo_vetor = coordenadas_polares(x, y);
    float vetor = modulo_vetor(x, y);

    cout << "Coordenadas polares do vetor:\n";
    cout << '(' << vetor << ',' << angulo_vetor << ")\n";

    return 0;
}