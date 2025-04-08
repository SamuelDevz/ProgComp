#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("numeros.txt");
	ofstream print("numeros.bin", ios_base::binary);

	for(int i = 0; i < 100; ++i)
	{
		fout << i;
		print.write((char*) &i,sizeof(int));
	}

	return 0;
}

/*

Os tamanhos dos arquivos diferem devido aos tipos escolhidos.

No arquivo de texto, cada número é armazenado como uma 
sequência de caracteres, incluindo dígitos e espaços e
quebras de linha.

No arquivo binário, cada número é armazenado como uma
sequência de bytes representando a representação 
binária do número.

*/