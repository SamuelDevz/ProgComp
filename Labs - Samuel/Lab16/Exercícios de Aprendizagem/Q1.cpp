#include <iostream>
using namespace std;

constexpr int tam = 50;

int main()
{
	cout << "Digite jogador/time:";
	char jogadorTime[tam];
	cin.getline(jogadorTime, tam);

	int letras{};
	char * ptr_time;

	for(int i = 0; jogadorTime[i] != '\0'; ++i)
	{
		if(jogadorTime[i] == '/')
		{
			ptr_time = &jogadorTime[i + 1];
			break;
		}
		letras++;
	}

	cout << "O nome do jogador tem " << letras << " letras.\n"
	     << "O seu time e o " << ptr_time; 
}