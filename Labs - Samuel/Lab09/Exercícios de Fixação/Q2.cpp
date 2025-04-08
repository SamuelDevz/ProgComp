#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite um ponto-flutuante:";
	float num;
	cin >> num;

	cout << "Notação padrão:" << int(num) << endl;
	cout << scientific;
	cout << "Notação científica:" << num << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Notação decimal:" << num << endl;

    return 0;
}