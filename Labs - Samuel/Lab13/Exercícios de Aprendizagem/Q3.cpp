#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct Data
{
	int dia, mes, ano;
};

struct Horario
{
	int hora, minuto;
};

struct Evento
{
	Data data;
	Horario horario;
	char descricao[18];
};

int main()
{
	Evento lista_eventos[10];

	cout << "Entre com 2 eventos:\n";
	cout << "#1\n";
	
	cout << "Data: ";
	cin >> lista_eventos[0].data.dia 
		>> lista_eventos[0].data.mes 
		>> lista_eventos[0].data.ano;

	cout << "Hora: ";
	cin >> lista_eventos[0].horario.hora
		>> lista_eventos[0].horario.minuto;

	cout << "Desc: ";
	cin.get();
	cin.getline(lista_eventos[0].descricao,18);

	cout << "\n#2\n";
	
	cout << "Data: ";
	cin >> lista_eventos[0].data.dia 
		>> lista_eventos[0].data.mes 
		>> lista_eventos[0].data.ano;

	cout << "Hora: ";
	cin >> lista_eventos[0].horario.hora
		>> lista_eventos[0].horario.minuto;

	cout << "Desc: ";
	cin.get();
	cin.getline(lista_eventos[0].descricao,18);

	cout << "--------------------\n";
	cout << "Eventos Cadastrados\n";
	cout << lista_eventos[0].data.dia << '/'
		<< lista_eventos[0].data.mes << '/'
		<< lista_eventos[0].data.ano << ' '
		<< lista_eventos[0].horario.hora << ':' 
		<< lista_eventos[0].horario.minuto << ' '
		<< lista_eventos[0].descricao << endl;

	cout << lista_eventos[1].data.dia << '/'
		<< lista_eventos[1].data.mes << '/'
		<< lista_eventos[1].data.ano << ' '
		<< lista_eventos[1].horario.hora << ':' 
		<< lista_eventos[1].horario.minuto << ' '
		<< lista_eventos[1].descricao << endl;
}