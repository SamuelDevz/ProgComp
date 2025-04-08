#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	cout << "Tabuada de n\n";
	cout << "------------\n";
	cout << "Entre com um número n (0 a 9): ";
	int num;
	cin >> num;

	for(int i = 0; i < 10;++i)
		cout << num << " x " << i << " = " << num * i;

	return 0;
}