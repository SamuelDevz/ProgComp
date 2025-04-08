#include <iostream>
#include <clocale>
using namespace std;

enum Situacao { Aprovado, Trancado, Reprovado };

union Identificador
{
    char nome[20];
    long matricula;
};

struct Aluno
{
    Identificador id;
    unsigned codigo;
    Situacao disciplina;
};

void exibir_aluno(Aluno*);
istream& operator>>(istream&, Situacao&);
ostream& operator<<(ostream&, Situacao&);

int main() 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
    cout << "Digite o número de alunos (mínimo 1): ";
    int tam;
    cin >> tam;

    Aluno * classe = new Aluno[tam];

    cout << "===== Aluno 1 =====\n";
    cout << "Nome: ";
    cin >> classe[0].id.nome;
    
    cout << "Código da disciplina: ";
    cin >> classe[0].codigo;
    
    cout << "Situação da disciplina: ";
    cin >> classe[0].disciplina;

    exibir_aluno(classe);
}

void exibir_aluno(Aluno * alu)
{
    cout << "Nome: " << alu[0].id.nome << endl;
    cout << "Código da disciplina: " << alu[0].codigo << endl;
    cout << "Situação da disciplina: " << alu[0].disciplina << endl;
}

istream& operator>>(istream& is, Situacao& s)
{
    int temp;
    cin >> temp;
    s = (Situacao) temp;
    return is;
}

ostream& operator<<(ostream& os, Situacao& s)
{
    switch(s)
    {
        case Aprovado: os << "Aprovado"; break;
        case Trancado: os << "Trancado"; break;
        case Reprovado: os << "Reprovado"; break; 
    }
    return os;
}