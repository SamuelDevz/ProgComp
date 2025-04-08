#include "genetico.h" // Protótipo das funções 
#include "binario.h"  // Biblioteca de funções binárias necessárias para fazer operações com bits.
#include <iostream>   // biblioteca para I/O dos dados(terminal)
using std::cout;
using std::left;
using std::right;

bool Avaliacao(unsigned short solucao)
{
    unsigned short valor{};
    unsigned short peso{};

    const unsigned short VALORES[16]
    {
        12, 4, 3, 10,
        15, 20, 10, 2,
        1, 1, 3, 15,
        10, 8 , 4, 4
    };

    const unsigned short PESOS[16]
    {
        1, 4, 2, 5,
        4, 2, 1, 4,
        3, 2, 1, 9,
        4, 5, 3, 12
    };

    for(int i = 0; i < 16; ++i)
    {
        if(TestarBit(solucao, i))
        {
            valor += VALORES[i];
            peso += PESOS[i];
        }
    }

    cout << left; 
    cout.width(5); 
    cout << solucao;
    
    cout << right; 
    cout << " - $" << valor << " - " << peso << "Kg";

    if(peso > 20)
        return false;
    
    return true;
}

// Função para pegar os Bits mais Altos da solucao1 mais o Bits mais baixos da solucao2
unsigned short CruzamentoPontoUnico(unsigned short solucao1, unsigned short solucao2)
{
    return BitsAltos(solucao1) + BitsBaixos(solucao2);
}

// Função para realizar o cruzamento de duas soluções de forma aritmética,
// ele resumidamente é a operacao AND 
unsigned short CruzamentoAritmetico(unsigned short solucao1, unsigned short solucao2)
{
    return AND(solucao1, solucao2);
}

// Função para inverter o bit da posições 9.
unsigned short MutacaoSimples(unsigned short solucao)
{
    const char posicao = 9;

    if((TestarBit(solucao, posicao))) 
        return DesligarBit(solucao, posicao);
    else
        return LigarBit(solucao, posicao);
}

// Função para inverter os bits da posições 4 e 13.
unsigned short MutacaoDupla(unsigned short solucao)
{
    unsigned short resul{};
    const char posicao1 = 3;
    const char posicao2 = 12;

    if((TestarBit(solucao, posicao1))) 
        resul = DesligarBit(solucao, posicao1);
    else
        resul = LigarBit(solucao, posicao1);

    if((TestarBit(solucao, posicao2))) 
        resul = DesligarBit(solucao, posicao2);
    else
        resul = LigarBit(solucao, posicao2);

    return resul;
}