#include <iostream>
using namespace std;

float quadrado(float);
float cubo(float);

int main()
{
	cout << "Digite um valor:";
	float num;
	cin >> num;

	cout << "Quadrado = " << quadrado(num) << endl;
	cout << "Cubo = " << cubo(num) << endl;
	cout << "Cubo = " << cubo(quadrado(num)) << endl;

	return 0;
}

float quadrado(float a)
{
	float quadrado = a * a;
	return quadrado;
}

float cubo(float b)
{
	float cubo = b * b * b;
	return cubo;	
}