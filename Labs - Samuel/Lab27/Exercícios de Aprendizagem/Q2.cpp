#include <iostream>
using namespace std;

struct Controller
{
	char name[40];
	int buttons;
	int axis;
};

void Enumerate(void (*)(const Controller));
void ListarNomes(const Controller);
void ListarEixos(const Controller);

int main()
{
	Enumerate(ListarNomes);
	Enumerate(ListarEixos);

	return 0;
}

void Enumerate(void (*f)(const Controller))
{
	Controller vet[3]
	{
		{ "Joy", 8, 4 },
		{ "Xbox", 10, 3 },
		{ "Play", 8, 6 }
	};

	for (auto i : vet)
		f(i);
}

inline void ListarEixos(const Controller eixos) 
{
	cout << eixos.axis << " ";
}

inline void ListarNomes(const Controller nome)
{
	cout <<nome.name<< " ";	
}