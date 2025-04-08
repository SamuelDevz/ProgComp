#include <iostream>
#include <cmath>
using namespace std;

int Absoluto(int);

int main()
{
	cout << "Digite um número inteiro:";
	int num;
	cin >> num;

	int absoluto = Absoluto(num);

	cout << "O valor absoluto e " << absoluto << '\n';

    return 0;
}

int Absoluto(int a)
{
	int absoluto = sqrt(pow(a, 2));
	return absoluto;
}