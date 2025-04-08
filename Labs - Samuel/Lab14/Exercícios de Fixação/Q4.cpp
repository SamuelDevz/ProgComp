#include <iostream>
using namespace std;

union Cor
{
	struct
	{
		short red;
		short green;
		short blue;
		short alpha;	
	} RGBA;

	long all; 
};

void ler_RGBA(Cor*);
void ler_int32(Cor*);

int main()
{
	cout << "Digite uma cor no formato\n";
	Cor cor;
	Cor * ptr = &cor;
    
	ler_RGBA(ptr);
	ler_int32(ptr);

    return 0;
}

void ler_RGBA(Cor * cor)
{
	cout << "RGBA: ";
	cin >> cor->RGBA.red;
    cin >> cor->RGBA.green;
    cin >> cor->RGBA.blue;
    cin >> cor->RGBA.alpha;
}

void ler_int32(Cor * cor)
{
	cout << "Int32: ";
	cin >> cor->all;
}