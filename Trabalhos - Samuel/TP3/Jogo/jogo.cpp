#include "menu.hpp"
#include <iostream>
#include <clocale>
using namespace std;

extern Carro * Baralho;

int main() 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    abrirArquivo();
    Menu();
    char opcao;
    cin >> opcao;
    validarOpcao(opcao);

    Jogador jogador1, jogador2;
    
    while(opcao != NAO) 
    {
        cout << "Jogador1: ";
        cin >> jogador1.nome;

        cout << "Jogador2: ";
        cin >> jogador2.nome;

        cout << "----------\n";
        Jogar(jogador1,jogador2);

        Menu();
        cin >> opcao;
        validarOpcao(opcao);
    }
    
    delete[] Baralho;

    for (int i = 0; i < 4; i++) 
    {
        delete jogador1.cartas[i];
        delete jogador2.cartas[i];
    }
    
    delete[] jogador1.cartas;
    delete[] jogador2.cartas;
}