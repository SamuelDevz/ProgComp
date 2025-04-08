#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

float VolumeCilindro(float, float);

int main ()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Calcula o Volume de um Cilindro\n";
	cout << "-------------------------------\n";
	cout << "Entre com o raio da base:";
	float raio;
	cin >> raio;

	cout << "Entre com a altura:";
	float altura;
	cin >> altura;

	float volume = VolumeCilindro(altura, raio);

	cout << "O volume do cilindro é " << volume << '\n';

	return 0;
}

float VolumeCilindro(float altura, float raio)
{
	float pi = 3.14159;
	float volume = pi * pow(raio, 2) * altura;
	return volume;
}