#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

struct Unidade
{
    int revisao;
    int fixacao;
    int aprendizagem;
};

void unidade(ifstream& fin, int numero_unidade, int num_linhas = 10);

int main() 
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    ifstream fin;
    fin.open("stats.txt");
    if (!fin.is_open()) 
    {
        cout << "Erro ao abrir o arquivo.\n";
        return EXIT_FAILURE;
    }

    unidade(fin, 1);
    unidade(fin, 2);
    unidade(fin, 3);

    fin.close();

    return 0;
}

void unidade(ifstream& fin, int numero_unidade, int num_linhas) 
{
    Unidade unidade_atual{};
    
    cout << "-----------\n";
    cout << numero_unidade << "a unidade\n";
    cout << "-----------\n";

    for (int i = 0; i < num_linhas; i++) 
    {
        int laboratorio, revisao, fixacao, aprendizagem;
        fin >> laboratorio 
        	>> revisao 
        	>> fixacao 
        	>> aprendizagem;

        if (!fin.eof()) 
        {
            unidade_atual.revisao += revisao;
            unidade_atual.fixacao += fixacao;
            unidade_atual.aprendizagem += aprendizagem;
        }
    }

    int total = unidade_atual.revisao + unidade_atual.fixacao + unidade_atual.aprendizagem;

    cout << "Revisão: " << unidade_atual.revisao << endl;
    cout << "Fixação: " << unidade_atual.fixacao << endl;
    cout << "Aprendi: " << unidade_atual.aprendizagem << endl;
    cout << "-----------\n";
    cout << "Total: " << total << endl;
    cout << "-----------\n\n";
}