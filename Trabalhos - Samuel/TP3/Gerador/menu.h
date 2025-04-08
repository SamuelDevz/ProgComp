#pragma once

#include <iosfwd>
#include <chrono>
#include <thread>
using std::ostream;
using std::istream;
using std::chrono::seconds;
using std::this_thread::sleep_for;

inline void LimparTela() 
{
    system("cls");
}

inline void Sleep() 
{
    sleep_for(seconds(2));
}

enum Opcoes
{
    CADASTRAR = 'C',
    IMPORTAR = 'I',
    EXCLUIR = 'E',
    ALTERAR = 'A',
    LISTAR = 'L',
    SAIR = 'S',
};

struct Carro 
{
    char modelo[50];
    float velocidade_maxima;
    float aceleracao;
    float potencia;
    float torque;
    float preco;
};

void Menu();
void Cadastrar();
void Importar();
void Excluir();
void Alterar();
void Salvar();
void Listar();

istream& operator>>(istream&, Carro&) 
ostream& operator<<(ostream&, Carro&);