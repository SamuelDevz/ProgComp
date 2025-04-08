#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite o ângulo: ";
	float angulo;
	cin >> angulo;

	float resul = sin(angulo * 3.14159265/180);

	cout << "Seno = " << resul << '\n';
	
	return 0;
}