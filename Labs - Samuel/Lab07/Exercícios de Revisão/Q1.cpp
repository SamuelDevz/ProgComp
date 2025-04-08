#include <iostream>
using namespace std;

void exibir(int);

int main()
{
    exibir(80);
    exibir(114);
    exibir(111);
    exibir(103);
    exibir(67);
    exibir(111);
    exibir(109);
    exibir(112);

	return 0;
}

void exibir(int a)
{
    char ch = a;
    cout << ch;
}