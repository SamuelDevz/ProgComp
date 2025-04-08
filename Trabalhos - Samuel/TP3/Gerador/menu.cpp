#include "carro.hpp"
#include "menu.h"
#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;

constexpr int MAX = 32;
Carro baralho[MAX] {};
unsigned short qtd_cartas{};

ostream& operator<<(ostream & os, Carro & carro)
{
    os << carro.modelo << " " << carro.velocidade_maxima << " "
       << setprecision(1)
       << carro.aceleracao
       << " " << setprecision(0)
       << carro.potencia
       << " " << setprecision(1)
       << carro.torque
       << " " << setprecision(0)
       << carro.preco << "\n";
    return os;
}

istream& operator>>(istream & is, Carro & carro) 
{
    cout << "Modelo: ";
    is.ignore();
    is.getline(carro.modelo, 50);

    cout << "Velocidade máxima: ";
    is >> carro.velocidade_maxima;
    validar_atributo(carro.velocidade_maxima);

    cout << "Aceleração: ";
    is >> carro.aceleracao;
    validar_atributo(carro.aceleracao);

    cout << "Potência: ";
    is >> carro.potencia;
    validar_atributo(carro.potencia);

    cout << "Torque: ";
    is >> carro.torque;
    validar_atributo(carro.torque);

    cout << "Preço: ";
    is >> carro.preco;
    validar_atributo(carro.preco);
}

void Salvar()
{
    cout << "Salvando o baralho no arquivo...\n";
    ofstream fout("..//baralho.dat", ios_base::out | ios_base::binary);
    if(!fout.is_open()) 
    {
        cerr << "Erro ao fazer a gravação do arquivo do baralho\n";
        cout << "Saindo do programa...\n";
        exit(EXIT_FAILURE);
    }

    char cabecalho[] = "BARALHO";
    fout.write((char*)cabecalho, strlen(cabecalho));
    fout.write((char*)&qtd_cartas, sizeof(unsigned short));
    fout.write((char*)&baralho, sizeof(Carro) * qtd_cartas);
    
    fout.close();
    cout << "Gravação do arquivo do baralho com sucesso!\n";
    cout << "Saindo do programa...\n";
}

static inline void LimparBuffer() 
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void Menu() 
{
    LimparTela();
    cout << "Gerador de Cartas\n";
    cout << "-----------------\n";
    cout << "(C)adastrar\n";
    cout << "(I)mportar\n";
    cout << "(A)lterar\n";
    cout << "(E)xcluir\n";
    cout << "(L)istar\n";
    cout << "(S)air\n\n";
    cout << "Escolha uma opção: ";
}

static void validar_atributo(float & atributo) 
{
    const int MIN = 1; 
    while(cin.fail() || atributo < MIN) 
    {
        if(cin.fail())
            cout << "Entrada inválida! Por favor, insira um valor numérico válido: ";
        else if(atributo < MIN)
            cout << "Valor inválido! Por favor, insira um valor maior ou igual a 1: ";
        LimparBuffer();
        cin >> atributo;
    }
}

void Cadastrar() 
{
    LimparTela();
    if(qtd_cartas == MAX) 
    {
        cout << "O baralho está cheio\n";
        Sleep();
        return;
    }

    cout << "Cadastrar Carta\n";
    cout << "---------------\n";
    Carro carro;
    cin >> carro;    

    baralho[qtd_cartas++] = carro;
}

void Listar() 
{
    LimparTela();
    if(qtd_cartas == 0) 
    {
        cout << "O baralho está vazio\n";
        Sleep();
        return;
    }

    cout << "Cartas do baralho\n";
    cout << "-----------------\n";
    for(int i = 0; i < qtd_cartas; ++i) 
        cout << i + 1 << baralho[i] << '\n';
    
    cout << "\nPressione Enter para continuar...\n";
    cin.ignore();
    cin.ignore();
}

static void validar_num_carta(int & num_carta) 
{
    while(cin.fail() || num_carta > qtd_cartas || num_carta < 1) 
    {
        if(num_carta > qtd_cartas || num_carta < 1)
            cout << "Número da carta inválido. Digite novamente o número da carta: ";
        else if(cin.fail())
            cout << "Entrada inválida! Por favor, insira um valor numérico válido: ";
        LimparBuffer();
        cin >> num_carta;
    }
}

void Alterar() 
{
    LimparTela();
    if(qtd_cartas == 0) 
    {
        cout << "O baralho está vazio\n";
        Sleep();
        return;
    }

    cout << "Atualizar Carta\n";
    cout << "---------------\n";
    for(int i = 0; i < qtd_cartas; ++i) 
        cout << i + 1 << ") " << baralho[i].modelo << '\n';
    
    cout << "\nDigite o número da carta: ";
    int num_carta;
    cin >> num_carta;
    validar_num_carta(num_carta);

    int indice = num_carta - 1; 

    cout << "Alterando a carta " << baralho[indice].modelo << " do baralho\n";
    cin >> baralho[indice];
}

void Importar() 
{
    LimparTela();
    if(qtd_cartas == MAX) 
    {
        cout << "O baralho está cheio\n";
        Sleep();
        return;
    }
    
    cout << "Importar Cartas\n";
    cout << "---------------\n";
    cout << "Arquivo: ";
    char arquivo[40];
    cin >> arquivo;
    ifstream fin(arquivo, ios_base::in);
    if(!fin.is_open()) 
    {
        cerr << "Erro ao abrir o arquivo\n";
        Sleep();
        return;
    }

    cout << "Importando:\n";
    for(int i = qtd_cartas; i < MAX && fin.peek() != EOF; ++i) 
    {
        fin.getline(baralho[i].modelo, 50);
        fin >> baralho[i].velocidade_maxima 
            >> baralho[i].aceleracao
            >> baralho[i].potencia
            >> baralho[i].torque
            >> baralho[i].preco;
        
        fin.ignore();
        fin.ignore();

        cout << i + 1 << baralho[i] << '\n';
        qtd_cartas++;
    }

    cout << "Pressione Enter para continuar...\n";
    cin.ignore();
    cin.ignore();
}

void Excluir() 
{
    LimparTela();
    if(qtd_cartas == 0)
    {
        cout << "O baralho está vazio\n";
        Sleep();
        return;
    }

    cout << "Excluir Carta\n";
    cout << "-------------\n";
    for(int i = 0; i < qtd_cartas; ++i)
       cout << i + 1 << ") " << baralho[i].modelo << '\n';

    cout << "\nDigite o número da carta: ";
    int num_carta;
    cin >> num_carta;
    validar_num_carta(num_carta);

    for(int i = num_carta - 1; i < qtd_cartas; ++i)
        baralho[i] = baralho[i + 1];

    qtd_cartas--;

    cout << "\nA carta foi excluída do baralho\n";
    Sleep();
}