#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Digite um ponto flutuante:";
	float num;
	cin >> num;

	cout << "Notação padrão:" << num << '\n';
	cout << scientific;
	cout << "Notação científica:" << num << endl;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(6);
	cout << "Notação decimal:" << num << endl;

    return 0;
}