#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Digite palavras (s para sair):\n";
    char palavra[50];
    int vogal, consoante, outra;
    vogal = consoante = outra = 0;
	
	cin >> palavra;
	
	while (!(palavra[0] == 's' && palavra[1] == '\0'))
	{
		if (isalpha(palavra[0]))
		{
			switch (palavra[0])
			{
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U': vogal++; break;
                default : consoante++;
			}
		}
		else
        {
			outra++;
        }

		cin >> palavra;
	}
	
	cout << vogal << " palavras comecam por vogais\n";
	cout << consoante << " palavras comecam por consoantes\n";
	cout << outra << " outras palavras\n";

    return 0;
}