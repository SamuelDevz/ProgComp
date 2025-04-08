#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite o seu peso em quilos:";
    float peso;
    cin >> peso;

    cout << "Digite o tempo de corrida:";
    int horas, minutos; 
    char ch;
    cin >> horas >> ch >> minutos >> ch;

    float tempo_atv, horas_convertida; // isso evita que o resultado de "tempo de atividade / 60" seja truncado
    horas_convertida = (horas * 60 + minutos);
    tempo_atv = horas_convertida / 60;
    
    float energia_corrida = 7 * peso * tempo_atv; // o 7 é o mets que e a capacidade aerobica e depende do tipo exercicio

    cout << "Digite o tempo de ciclismo:";
    cin >> horas >> ch >> minutos >> ch;
    horas_convertida = (horas * 60 + minutos);
    tempo_atv = horas_convertida / 60;
    float energia_ciclismo = 7 * peso * tempo_atv;

    cout << "Digite o tempo de natação:";
    cin >> horas >> ch >> minutos >> ch;
    horas_convertida = (horas * 60 + minutos);
    tempo_atv = horas_convertida / 60;
    float energia_natacao = 8 * peso * tempo_atv;

    float energia_total = energia_corrida + energia_natacao + energia_ciclismo;

    cout << "Você gastou um total de " << energia_total << " calorias\n";

    return 0;
}