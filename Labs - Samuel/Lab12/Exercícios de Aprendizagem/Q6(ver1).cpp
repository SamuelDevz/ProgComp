#include <iostream>
#include <clocale>
using namespace std;

struct Horario
{
	int horas, min;
};

int subtrair(Horario, Horario);
void exibir_horario(Horario);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Início: ";
	Horario inicial;
	char pontos;
	cin >> inicial.horas >> pontos >> inicial.min;

	cout << "Fim: ";
	Horario chegada;
	cin >> chegada.horas >> pontos >> chegada.min;

	int min_total = subtrair(inicial,chegada);  

	cout << "Entre ";
    exibir_horario(inicial);
    cout << " e ";
    exibir_horario(chegada);

    cout << " existem " << min_total << " minutos , isto é, " << min_total / 60 << "h e " 
         << min_total % 60 << " minutos.";
	
	return 0;
}

int Calcular_dias(Horario inicio, Horario fim)
{
	int min_inicio = (inicio.horas * 60) + inicio.min;
	int min_fim = (fim.horas * 60) + fim.min;
	int diff = min_fim - min_inicio;
	return diff;
}

void exibir_horario(Horario horario)
{
	cout << horario.horas << ':' << horario.min;
}