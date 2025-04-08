#include <iostream>
using namespace std;

void exibir();

int main()
{
	for(int i = 0;i < 3;++i)
		exibir();
    return 0;
}

void exibir() 
{
	static int cont = 1;
	cout << cont++ << "a chamada da funcao.\n";
}