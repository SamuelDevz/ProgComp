#include <iostream>
#include <clocale>
using namespace std;

const int tam = 20;

struct Palavra
{
	char ingles[tam];
	char portugues[tam];
	char espanhol[tam];
};

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	Palavra dicionario[10]
	{
		{ "cat", "gato", "gato"},
		{ "dog", "cachorro", "perro"}
	};

	cout << "Digite uma palavra em português, ingles e espanhol respectivamente nessa ordem:";
	cin >> dicionario[2].portugues >> dicionario[2].ingles >> dicionario[2].espanhol;

	cout << "=== Dicionário ===\n";
	cout << "Palavra 1\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl << endl;

	cout << "Palavra 2\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl << endl;
	
	cout << "Palavra 3\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl;

	return 0;
}