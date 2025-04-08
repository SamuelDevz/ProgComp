#include <iostream>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char, int);

int main()
{
    cout << "Digite um valor entre 0 e 255: ";
    int num;
    cin >> num;

    unsigned char valor = num;

    exibirBits(valor);

	return 0;
}

void exibirBits(unsigned char num)
{
	bool estado;

	for(int i = 7; i >= 0; --i)
	{
		estado = testarBit(num, i);
		cout << (estado) ? 1 : 0;
	}
}

bool testarBit(unsigned char num, int bit)
{
	unsigned char mascara = 1 << bit;
	bool estado_bit = (mascara & num) ? true : false;
    return estado_bit;
}