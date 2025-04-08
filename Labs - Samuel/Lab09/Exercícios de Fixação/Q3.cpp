#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com o numero de segundos:";
	long segundos;
	cin >> segundos;

	int dias = segundos / 86400;
	int horas = segundos / 1858823.52941;
	int resto = segundos % 3600;
	int minutos = resto / 60;
	int seg = resto % 60;

	cout << segundos << "segundos = " << dias << " dias, " 
		 << horas << " horas, " << minutos << " minutos e segundos " 
		 << seg << " segundos\n";

	return 0;
}