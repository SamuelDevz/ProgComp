#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um quantidade de minutos: ";
	int segundos, minutos;
	cin >> minutos;

	segundos = minutos * 60;

	cout << "Existem " << segundos << "segundos em " << minutos << " minutos\n";

	system("pause");
    
	return 0;
}