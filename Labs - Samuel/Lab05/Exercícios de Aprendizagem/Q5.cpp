#include <iostream>
#include <cmath>
using namespace std;

float coordenadas_polares(float, float);

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

    cout << "O angulo do vetor e " << angulo_vetor << '\n';

	return 0;    
}

float coordenadas_polares(float a, float b)
{
    float pi = 3.14159265;
    float angulo = atan2(b,a) * 180 / pi;
    return angulo;
}