#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Digite seu texto (@ para sair): ";
	char ch;
	
	while((ch = cin.get()) != '@')
	{
		if(isupper(ch))
			ch = tolower(ch);
		else
			ch = toupper(ch);
			
		cout << ch;
	}

    return 0;
}