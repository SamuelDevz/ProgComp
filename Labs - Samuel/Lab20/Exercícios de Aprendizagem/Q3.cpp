#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um texto (# para finalizar):\n";
    int substituicoes{};
    char ch;

    while (cin.get(ch) && ch != '#')
    {
        if (ch == '.') 
        {
            cout << '!';
            substituicoes++;
        }
        else if (ch == '!')
        {
            cout << "!!";
            substituicoes++;
        }
        else
		{
            cout << ch;
		}
    }

    cout << "\nSubstituicoes: " << substituicoes << endl;

	return 0;
}