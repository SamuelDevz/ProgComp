#include <iostream>
#include <clocale>
#include "concurso.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // ler o numero de partipantes e de questoes
    exibirTraco('*', 52);
    cout << "Concurso de Programação\n\n";
    cout << "Qual o número de participantes? ";
    int num_participantes;
    cin >> num_participantes;

    cout << "Qual o número de questões? ";
    int num_questoes;
    cin >> num_questoes;

    cout << '\n';
    exibirTraco('*', 52);

    // cria o vetor dinamico de participantes e questoes
    Participante * participantes = new Participante[num_participantes];

    const int tam = num_questoes * num_participantes;
    Questao * questoes = new Questao[tam];

    // ler os participantes e as questoes
    for(int i = 0; i < num_participantes; ++i)
    {
        exibirTraco('-', 13);
        cout << "Participante: ";
        cin >> participantes[i].nome;
        exibirTraco('-', 13);

        participantes[i].questoes = &questoes[i * num_questoes];

        for(int j = 0; j < num_questoes; ++j)
        {
            char ch = 'A' + j;
            cout << "Questão " << ch << '\n';
            lerQuestao(participantes[i].questoes[j], j);
        }
        exibirTraco('-', 13);
        cout << '\n';
    }

    // sumario dos participantes
    exibirTraco('*', 52);
    exibirTraco('-', 23);
    cout << "Resumo por Partipante\n";
    exibirTraco('-', 23);
    for(int i = 0; i < num_participantes; ++i)
    {
        char ch = 'A' + i;
        cout << participantes[i].nome << ":\n";
        cout << '\t' << ch << ' ';
        exibirTempoQuestoes(participantes[i].questoes, num_questoes);
    }
    exibirTraco('-', 18);
    cout << '\n';

    // sumario de questoes por participantes
    exibirTraco('-', 18);
    cout << "Resumo por Questão\n";
    exibirTraco('-', 18);
    for (int i = 0; i < num_questoes; ++i)
    {
        char ch = 'A' + i;
        cout << "Questão " << ch << ":\n";
        for (int j = 0; j < num_participantes; ++j)
        {
            cout << '\t' << participantes[j].nome;
            exibirTempoQuestoes(participantes[j].questoes, i);
        }
    }
    exibirTraco('-', 18);
    cout << '\n';

    // exibe as estatisticas gerais do concurso
    exibirTraco('-', 12);
    cout << "Estatísticas\n";
    exibirTraco('-', 12);
    for(int i = 0; i < num_questoes; ++i)
    {
        char ch = 'A' + i;
        cout << "Questão " << ch << ": ";
        Media media = calcularMedia(questoes, tam, i, num_questoes);
        cout << media;
    }
    
    Media media_geral = calcularMedia(questoes, tam, 0, 1);
    cout << "Concurso:  " << media_geral;
    exibirTraco('*', 52);

    delete[] participantes;
    delete[] questoes;

   return 0;
}