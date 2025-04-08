#include <iostream>
using namespace std;

int bitsAltos(int);

int main() 
{
    cout << "Digite um valor inteiro: ";
    int num;
    cin >> num;
    
    int resul = bitsAltos(num);
    
    cout << "Os 16 bits mais altos desse valor correspondem ao numero " << resul << '\n';

	return 0;
}

int bitsAltos(int num)
{
	return num >> 16;
}