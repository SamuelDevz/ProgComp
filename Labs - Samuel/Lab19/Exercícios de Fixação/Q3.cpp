#include <iostream>
using namespace std;

int main()
{
    int linhas = 5;
    int espacos = linhas - 1;
    int asteriscos = 1;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < espacos; j++)
            cout << " ";

        for (int k = 0; k < asteriscos; k++)
            cout << "$";

        cout << endl;
        espacos--;
        asteriscos += 2;
    }

	return 0;
}