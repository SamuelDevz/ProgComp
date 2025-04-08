#include <iosfwd>
using std::istream;
using std::ostream;

struct Horario
{
    int hora, minuto;
};

struct Questao
{
    int dificuldade;
    Horario inicio, fim;
};

struct Media
{
    float dificuldade;
    float tempo;
};

struct Participante
{
    char nome[20];
    Questao * questoes;
};

ostream& operator<<(ostream&, Horario&);
ostream& operator<<(ostream&, Media&);
istream& operator>>(istream&, Horario&);
int operator-(Horario&, Horario&);

void lerQuestao(Questao*);
void exibirTempoQuestoes(Questao*, int);
Media calcularMedia(Questao*, int, int, int);
void exibirTraco(char, int);