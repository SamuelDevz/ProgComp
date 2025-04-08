#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um numero positivo ou negativo: ";
	int num;
	cin >> num;
	
	cout << "O valor absoluto de " << num << " e " 
         << (num > 0 ? num : -num) << endl;

    return 0;
}