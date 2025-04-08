#include <iostream>
using namespace std;

char charada(char, int);

int main()
{
    char P = charada('<', 20);
    char a = charada('\a', 90);
    char p = charada('(', 72);
    char e = charada('5', 48);
    char l = charada(1, 107);

    cout << P << a << p << e << l << '\n';

    return 0;
}

char charada(char ch, int x)
{
    ch = ch + x;
    return ch;
}