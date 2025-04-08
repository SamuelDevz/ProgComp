#include <iostream>
#include <clocale>
using namespace std;

struct Horario
{
	int hora, min;
};

void MostrarHorario(Horario*);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	cout << "Que horas são? ";
	Horario horario;
	char pontos;
	cin >> horario.hora >> pontos >> horario.min;

	Horario * ptr = &horario;
	ptr->hora++;
	MostrarHorario(ptr);
    
    return 0;
}

void MostrarHorario(Horario * horario)
{
	cout << "Seu relógio está atrasado, o horário correto é "
	     << horario->hora << ':' << horario->min << '.';
}