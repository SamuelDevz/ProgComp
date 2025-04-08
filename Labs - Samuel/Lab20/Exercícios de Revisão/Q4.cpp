#include <iostream>
using namespace std;

int main()
{
    char ch;
    int ct1, ct2;
    ct1 = ct2 = 0;
    while ((ch = cin.get()) != '@')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
            ct2++;
    }
    cout << "\nct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
    
    return 0;
}

/*

Considere o código acima. Suponha que a entrada fornecida seja:

Oi!
Mande $10 ou $20 agora!@    

a. Qual é a saída?
b. Tem algo errado com este programa?

a) vai ser o número de caracteres

b) o erro está na linha 13 do código acima, pois o ch está sendo 
atribuindo '$' em que no if só será falso quando o valor é 0

*/