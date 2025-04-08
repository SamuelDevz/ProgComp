#include <iostream>
using namespace std;

struct Data
{
	int dia, mes, ano;	
};

struct Horario
{
	int horas, minutos, segundos;
};

struct Evento
{
	Data data;
	Horario horario;
	char local[50];
};

int main()
{
	Evento evento;
	cout << "=== Cadastro do evento ===\n\n";
	
	cout << "Dia:";
	cin >> evento.data.dia;
	
	cout << "Mes: ";
	cin >>evento.data.mes;
	
	cout << "Ano: ";
	cin >> evento.data.ano;

	cout << "Horas: ";
	cin >> evento.horario.horas;

	cout << "Minutos: ";
	cin >> evento.horario.minutos;

	cout << "Segundos: ";
	cin >> evento.horario.segundos;

	cout << "Descricao: ";
	cin.getline(evento.local, 50);

	cout << "--------------------\n";

    return 0;
}