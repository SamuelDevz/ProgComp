#include <iostream>
using namespace std;

int main()
{
	char escolha;
	cin >> escolha;
	while (escolha != 5)  
    {
 		switch (escolha) 
        {
			case 'a' : cout << "Boa escolha\n."; break;
			case 'b' : cout << "Estou na duvida\n."; break;
			case 'c' : cout << "Nao sei o que dizer.\n"; break;
			case 'd' : cout << "Quatro e um numero\n."; break;
			default: cout << "Esta nao e uma opcao.\n";
		}
		cin >> escolha;
	}

	return 0;
}