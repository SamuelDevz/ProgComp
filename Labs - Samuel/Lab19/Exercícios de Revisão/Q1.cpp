#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite palavras(pronto para acabar):\n";
	char palavra[20];
	cin >> palavra;
	
	int palavra_total{};
	while(strcmp(palavra, "pronto"))
	{
		palavra_total++;
		cin >> palavra;
	}

	cout << "Foram digitadas um total " << palavra_total << " palavras.\n";

	return 0;
}