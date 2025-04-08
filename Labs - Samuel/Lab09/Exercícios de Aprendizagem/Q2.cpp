#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite dois números inteiros:";
	int num1, num2;
	cin >> num1 >> num2;

	cout << "O quociente " << num1 << " / " << num2 << " é " << int(num1 / num2) << endl;
	cout << "O resto da divisão " << num1 << " % " << num2 << " é " << num1 % num2 << endl;

    return 0;
}