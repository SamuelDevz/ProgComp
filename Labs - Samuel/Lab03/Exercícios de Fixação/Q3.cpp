#include <iostream>
using namespace std;

int main()
{
	cout << "Digite sua idade: ";
	int idade, dias;
	cin >> idade;

	dias = idade * 365;

	cout << idade << " anos equivalem a " << dias << " dias\n";

	return 0;
}