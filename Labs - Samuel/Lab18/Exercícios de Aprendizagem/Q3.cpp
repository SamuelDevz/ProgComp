#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um texto:\n";
    char texto[100];

    int i = 0;
    while (cin.get(texto[i]))
    {
        if (texto[i] == '@')
            break;
        i++;
    }

    texto[i - 1] = '\0';
    cout << texto << endl;

	return 0;
}