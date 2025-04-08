#include "cartas.h"
#include "menu.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <random>
#include <limits>
using namespace std;

Carro * Baralho = nullptr;
unsigned short qtd_cartas{};

static void Sair(const char * mensagem) 
{
    cerr << mensagem;
    cout << "Saindo do programa...\n";
    Sleep();
    exit(EXIT_FAILURE);
}

void abrirArquivo() 
{
    ifstream fin("..//baralho.dat", ios_base::in | ios_base::binary);
    if(!fin.is_open()) 
        Sair("Erro ao abrir o arquivo do baralho\n");

    char cabecalho[8] {};
    constexpr int max = 7;
    fin.read((char*)&cabecalho, max);
    if(strcmp(cabecalho, "BARALHO") != 0) 
        Sair("Arquivo do baralho incorreto\n");

    fin.read((char*)&qtd_cartas, sizeof(unsigned short));
    if(qtd_cartas < 8) 
        Sair("Quantidade de cartas insuficiente para jogar\n");

    Baralho = new Carro[qtd_cartas];
    fin.read((char*)Baralho, sizeof(Carro) * qtd_cartas);
    fin.close();
}

void Menu() 
{
    LimparTela();
    cout << "Super Trunfo Carros\n";
    cout << "-------------------\n"; 
    cout << "Iniciar nova partida? [S/N] ";
}

void validarOpcao(char & opcao) 
{
    while(opcao != SIM && opcao != NAO) 
    {
        cout << "Opção inválida. Digite novamente sua opçao: ";
        cin >> opcao;
    }
}

static void distribuir_cartas(Jogador & jogador1, Jogador & jogador2) 
{
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, qtd_cartas - 1);
    for (int i = 0; i < 4; i++)
    {
        jogador1.cartas[i] = new Carro;
        jogador2.cartas[i] = new Carro;
    } 

    constexpr int num_cartas = 4;
    int indices[qtd_cartas];
    // Inicializa os índices com valores sequenciais
    for (int i = 0; i < qtd_cartas; ++i)
        indices[i] = i;

    // Embaralhando os índices das cartas
    for (int i = qtd_cartas - 1; i > 0; --i) 
    {
        // Gera um índice aleatório para trocar com o índice atual
        int j = dist(mt) % (i + 1);
        swap(indices[i], indices[j]);
    }

    // Distribuindo as cartas embaralhadas para os jogadores
    for (int i = 0; i < num_cartas; ++i) 
    {
        jogador1.cartas[i] = &Baralho[indices[i]];
        jogador2.cartas[i] = &Baralho[indices[i + num_cartas]];
    }
}

static void menu_jogo()
{
    cout << "1. Velocidade máxima\n";
    cout << "2. Aceleração\n";
    cout << "3. Potência\n";
    cout << "4. Torque\n";
    cout << "5. Preço\n\n";
    cout << "Escolha atributo: ";
}

static void alterar_pontos(Jogador & jogador1, Jogador & jogador2, float atributo_jogador1, float atributo_jogador2) 
{
    if(atributo_jogador1 > atributo_jogador2) 
    {
        jogador1.pontos += 2;
    } 
    else if(atributo_jogador1 < atributo_jogador2) 
    {
        jogador2.pontos += 2;
    } 
    else
    {
        jogador1.pontos += 1;
        jogador2.pontos += 1;
    }
}

static void verificar_vencedor(Jogador & jogador1, Jogador & jogador2, int atributo, int indice_carta) 
{
    enum Atributos 
    {
        VELOCIDADE_MAXIMA = 1,
        ACELERACAO,
        POTENCIA,
        TORQUE,
        PRECO,
    };

    float atributo_jogador1, atributo_jogador2;

    switch(atributo) 
    {
        case VELOCIDADE_MAXIMA:
            atributo_jogador1 = jogador1.cartas[indice_carta]->velocidade_maxima; 
            atributo_jogador2 = jogador2.cartas[indice_carta]->velocidade_maxima;
            break;
        case ACELERACAO:
            atributo_jogador1 = jogador1.cartas[indice_carta]->aceleracao;
            atributo_jogador2 = jogador2.cartas[indice_carta]->aceleracao;
            break;
        case POTENCIA:
            atributo_jogador1 = jogador1.cartas[indice_carta]->potencia; 
            atributo_jogador2 = jogador2.cartas[indice_carta]->potencia;
            break;
        case TORQUE:
            atributo_jogador1 = jogador1.cartas[indice_carta]->torque; 
            atributo_jogador2 = jogador2.cartas[indice_carta]->torque;
            break;
        case PRECO:
            atributo_jogador1 = jogador1.cartas[indice_carta]->preco; 
            atributo_jogador2 = jogador2.cartas[indice_carta]->preco;
            break;
    }

    if(atributo == ACELERACAO || atributo == TORQUE) 
    {
        if(atributo == ACELERACAO) 
            alterar_pontos(jogador1, jogador2, atributo_jogador2, atributo_jogador1);
        else 
            alterar_pontos(jogador1, jogador2, atributo_jogador1, atributo_jogador2);

        cout << '\n';
        cout.precision(1);
        cout << '[' << jogador1.nome << "] " << jogador1.cartas[indice_carta]->modelo << " | " << atributo_jogador1 << endl;
        cout << '[' << jogador2.nome << "] " << jogador2.cartas[indice_carta]->modelo << " | " << atributo_jogador2 << "\n\n";
    } 
    else 
    {
        alterar_pontos(jogador1, jogador2, atributo_jogador1, atributo_jogador2);
        
        cout << '\n';
        cout.precision(0);
        cout << '[' << jogador1.nome << "] " << jogador1.cartas[indice_carta]->modelo << " | " << atributo_jogador1 << endl;
        cout << '[' << jogador2.nome << "] " << jogador2.cartas[indice_carta]->modelo << " | " << atributo_jogador2 << "\n\n";
    }
}

static void LimparBuffer() 
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

static void validar_atributo(int & atributo) 
{
    while(atributo < 1 || cin.fail() || atributo > 5) 
    {
        if(atributo < 1 || atributo > 5)
            cout << "Atributo inválido. Digite novamente o atributo: ";
        else if(cin.fail())
            cout << "Entrada inválida! Por favor, digite novamente o atributo: ";
        LimparBuffer();
        cin >> atributo;
    }
}

void Jogar(Jogador & jogador1, Jogador & jogador2) 
{
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 3);
    bool vez_jogador1 = true;

    distribuir_cartas(jogador1, jogador2);
    LimparTela();
    for(int i = 0; i < 4; ++i) 
    {
        int carta_selecionada = dist(mt);
        if(vez_jogador1) 
        {
            cout << '[' << jogador1.nome << "]\n\n";
            cout << "Carta: " << jogador1.cartas[carta_selecionada]->modelo << '\n';
        } 
        else 
        {
            cout << '[' << jogador2.nome << "]\n\n";
            cout << "Carta: " << jogador2.cartas[carta_selecionada]->modelo << '\n';
        }

        menu_jogo();
        int atributo;
        cin >> atributo;
        validar_atributo(atributo);
        verificar_vencedor(jogador1, jogador2, atributo, carta_selecionada);

        cout << "Placar: " << jogador1.nome << ' ' << jogador1.pontos 
             << " x " 
             << jogador2.nome << ' ' << jogador2.pontos << endl;
        cout << "--------------------------\n";
        vez_jogador1 = !vez_jogador1;

        Sleep();
        LimparTela();
    }

    cout << "Final: " << jogador1.nome << ' ' << jogador1.pontos 
         << " x " 
         << jogador2.nome << ' ' << jogador2.pontos << endl;
    Sleep();
}