#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Ponto P:\n";
	int px, py;
	cin >> px >> py;

	cout << "Ponto Q:\n";
	int qx, qy;
	cin >> qx >> qy;

	float D = sqrt(pow(qx - px, 2) + pow(qy - py, 2));

	cout << "A distância entre P e Q é:" << D << '\n';

	return 0;
}