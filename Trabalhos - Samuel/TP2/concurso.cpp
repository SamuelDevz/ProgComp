#include "concurso.h" // definicao das funcoes
#include <iostream>   // IO do terminal(console)
#include <iomanip>    // manipulador de IO
using namespace std;

// permite a exibicao do tipo Horario pelo cout
ostream& operator<<(ostream & os, Horario & horario)
{
    // mostra zero(s) a esquerda quando o numero e menor que 10
    os << setfill('0') << setw(2) << horario.hora << ':' 
       << setfill('0') << setw(2) << horario.minuto;
    return os;
}

// exibe o tipo Media formatado
ostream& operator<<(ostream & os, Media & media)
{
    // Mostra ate duas casas decimais
    os.setf(ios::fixed, ios::floatfield); os.precision(2);
    os << "Dificuldade (" << media.dificuldade << ") - Tempo (" << media.tempo << ") minutos\n";
    return os;
}

// permite a leitura do tipo Horario pelo cin
istream& operator>>(istream & is, Horario & horario)
{
    is >> horario.hora;
    is.ignore();
    is >> horario.minuto;
    return is;
}

// calcula a diferenca dos horarios transformando em minutos
int operator-(Horario & inicial, Horario & final)
{
    int min_inicio = (inicial.hora * 60) + inicial.minuto;
	int min_fim = (final.hora * 60) + final.minuto;
	int diff = min_fim - min_inicio;
	return diff;
}

// exibe o tempo inicial, final e a diferença entre os dois
void exibirTempoQuestoes(Questao * questao, int qtd)
{
    for(int i = 0; i < qtd; ++i)
    {
        cout << '(' << questao[i].dificuldade << ") "
             << questao[i].inicio << " às " << questao[i].fim
             << " (" << questao[i].inicio - questao[i].fim
             << " min)\n";
    }
}

// ler os atributos de uma questão
void lerQuestao(Questao * questao, int indice)
{
    cout << "\t   Dificuldade: ";
    cin >> questoes[indice].dificuldade;

    cout << "\t   Início: ";
    cin >> questoes[indice].inicio;

    cout << "\t   Fim: ";
    cin >> questoes[indice].fim;
}

// exibe um traco com caractere escolhido
void exibirTraco(char ch, int qtd)
{
    for(int i = 0; i < qtd; ++i)
        cout << ch;
    cout << '\n';
}

// calcula a media com base em cada elementos analisados
Media calcularMedia(Questao * questoes, int tam, int indice, int passo)
{
    Media media{};

    int contador{};
    for(int i = indice; i < tam; i += passo)
    {
        media.dificuldade += questoes[i].dificuldade;
        media.tempo += questoes[i].inicio - questoes[i].fim;
        contador++;
    }

    media.dificuldade /= contador;
    media.tempo /= contador;

    return media;
}