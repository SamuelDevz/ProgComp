#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    int letras{};
    while (ch != '!')
    {
        if (ch != '?')
            if (isalpha(ch))
                letras++;
        cin >> ch;
    }
    
    return 0;
}