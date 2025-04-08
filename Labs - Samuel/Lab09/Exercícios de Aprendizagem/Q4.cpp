#include <iostream>
using namespace std;

#define metro_quilometro 1000

int main()
{
	cout << "Entre com a distancia em metros:";
	float distancia;
	cin >> distancia;

	cout << distancia << " metros equivalem a " << int(distancia / metro_quilometro) 
	     << " quilometros e " <<  distancia - (int(distancia / metro_quilometro) * 1000) << " metros";

    return 0;
}