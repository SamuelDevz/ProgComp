#pragma once

#include "cartas.h"
#include <chrono>
#include <thread>
using std::chrono::seconds;
using std::this_thread::sleep_for;

inline void LimparTela() 
{
    system("cls");
}

inline void Sleep() 
{
    sleep_for(seconds(3));
}

enum OpcoesMenu 
{
    SIM = 'S',
    NAO = 'N',
};

void Jogar(Jogador&,Jogador&);
void validarOpcao(char&);
void abrirArquivo();
void Menu();