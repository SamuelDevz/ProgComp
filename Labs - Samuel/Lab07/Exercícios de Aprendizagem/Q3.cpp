#include <iostream>
using namespace std;

int bitsBaixos(int);

int main()
{
	cout << "Digite um valor inteiro:";
	int num;
	cin >> num;

	int resul = bitsBaixos(num);
	cout << "Os 16 bits mais baixos desse valor correspondem ao numero " << resul << '\n';

    return 0;
}

int bitsBaixos(int num)
{
	int mascara = 0x7FFF;
    return num & mascara;
}