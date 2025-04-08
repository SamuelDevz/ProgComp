#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Que horas são?\n";
	int horas, min;
	//char ch;

	cin >> horas;
	//cin >> ch;
	cin.ignore();
	cin >> min;

	cout << horas << "horas\n";
	cout << min << "minutos\n";
	
	return 0;
}