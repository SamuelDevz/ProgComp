#include <iostream>
using namespace std;

int main()
{
	cout << "Digite uma frase (@ para finalizar):\n";
	int vogais[5]{};
	char frase;
	
	while((frase = cin.get()) != '@')
	{
		switch(frase)
		{
			case 'a':
			case 'A': vogais[0] += 1; break;
			case 'e':
			case 'E': vogais[1] += 1; break;
			case 'i':
			case 'I': vogais[2] += 1; break;
			case 'o':
			case 'O': vogais[3] += 1; break;
			case 'u':
			case 'U': vogais[4] += 1; break;	
		}
	}
	
	cout << "a: " << vogais[0] << endl;
	cout << "e: " << vogais[1] << endl;
	cout << "i: " << vogais[2] << endl;
	cout << "o: " << vogais[3] << endl;
	cout << "u: " << vogais[4] << endl;

    return 0;
}