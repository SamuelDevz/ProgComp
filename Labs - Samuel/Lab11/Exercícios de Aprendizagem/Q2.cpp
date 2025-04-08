#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Entre com dois numeros: ";
	char num1[2];
	cin >> num1;
	
	int num2;
	cin >> num2;

	int mult = atoi(num1) * num2;
	cout << "A multiplicacao entre eles é " << mult << '\n';

	return 0;
}