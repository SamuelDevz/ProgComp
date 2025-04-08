#include <iostream>
using namespace std;

int main()
{
    cout << "Digite o horario de partida (HH:MM): ";
    int partida_hora, partida_minuto;
    char separator;
    cin >> partida_hora >> separator >> partida_minuto;

    cout << "Digite o horario de chegada (HH:MM): ";
    int chegada_hora, chegada_minuto;
    cin >> chegada_hora >> separator >> chegada_minuto;

    int tempo_total_horas, tempo_total_minutos;

    if (chegada_minuto < partida_minuto)
    {
        chegada_hora--;
        chegada_minuto += 60;
    }

    tempo_total_horas = chegada_hora - partida_hora;
    tempo_total_minutos = chegada_minuto - partida_minuto;

    cout << "O tempo total de viagem foi " << tempo_total_horas 
    	 << " horas e " << tempo_total_minutos << " minutos.\n";

	return 0;
}