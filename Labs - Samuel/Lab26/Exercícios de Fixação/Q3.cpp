#include <iostream>
#include <cstring>
using namespace std;

constexpr int TAM_NOME = 30;

struct Aluno
{
    char nome[TAM_NOME];
    int nivel;
};

int PegarInfo(Aluno va[], const int n);
void Mostrar1(const Aluno a);
void Mostrar2(const Aluno* pa);
void Mostrar3(const Aluno va[], const int n);

int main()
{
    cout << "Tamanho da classe: ";
    int tam;
    cin >> tam;

    // Remove \n para uso do cin.getline
    cin.ignore();

    Aluno * alunos = new Aluno[tam];
    int inscritos = PegarInfo(alunos, tam);

    for (int i = 0; i < inscritos; ++i)
    {
        Mostrar1(alunos[i]);
        Mostrar2(&alunos[i]);
    }

    Mostrar3(alunos, inscritos);

    delete[] alunos;
    
    cout << "Feito!\n";
    
    return 0;
}

int PegarInfo(Aluno va[], const int n)
{
    int num_lidos{};
    Aluno a;

    while (num_lidos < n)
    {
        cout << "Nome do Aluno (deixe em branco para sair): ";
        cin.getline(a.nome, TAM_NOME);

        // Verificar se o nome está em branco para sair
        if (strlen(a.nome) == 0)
            break;

        cout << "Nível do Aluno: ";
        cin >> a.nivel;

        va[num_lidos++] = a;

        // Limpa o buffer do teclado após cada leitura
        cin.ignore();
    }

    return num_lidos;
}

void Mostrar1(const Aluno a)
{
    cout << a.nome << ' ' << a.nivel << endl;
}

void Mostrar2(const Aluno * pa)
{
    cout << pa->nome << ' ' << pa->nivel << endl;
}

void Mostrar3(const Aluno va[], const int n)
{
    for (int i = 0; i < n; ++i)
		cout << va[i].nome << ' ' << va[i].nivel << endl;
}