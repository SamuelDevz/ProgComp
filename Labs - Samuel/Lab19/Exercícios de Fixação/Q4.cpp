#include <iostream>
using namespace std;

void exibir(char);

int main()
{
	cout << "Digite um caractere: ";
	char ch;
	cin >> ch;

	exibir(ch);
	cout << "Programando em C++\n";
	exibir(ch);

    return 0;
}

void exibir(char c)
{
	for(int i = 0;i < 20;++i)
		cout << c;
	cout << endl;
}