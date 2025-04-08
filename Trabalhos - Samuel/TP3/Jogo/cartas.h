#pragma once

struct Carro 
{
    char modelo[50];
    float velocidade_maxima;
    float aceleracao;
    float potencia;
    float torque;
    float preco;
};

struct Jogador 
{
    Carro * cartas[4];
    int pontos{};
    char nome[20];
};