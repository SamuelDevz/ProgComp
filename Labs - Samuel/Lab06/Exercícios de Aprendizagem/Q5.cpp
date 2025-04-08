#include <iostream>
#include <climits>
using namespace std;

bool isSHORT(long long teste);
bool isINT(long long teste);

int main()
{
    long long teste;

    cout << "Digite um valor inteiro: ";
    cin >> teste;
    cout << endl;

    if ((isSHORT(teste)))
        cout << teste << " cabe em 16 bits." << endl;
    else
        cout << teste << " não cabe em 16 bits." << endl;

    if ((isINT(teste)))
        cout << teste << " cabe em 32 bits." << endl;
    else
        cout << teste << " não cabe em 32 bits." << endl;

	return 0;
}

bool isSHORT(long long teste)
{
    if (teste <= SHRT_MAX && teste >= SHRT_MIN)
        return true;
    else
        return false;
}

bool isINT(long long teste)
{
    if (teste <= INT_MAX && teste >= INT_MIN)
        return true;
    else
        return false;
}