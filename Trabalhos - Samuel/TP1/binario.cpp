#include "binario.h"

// Função para testar se um bit específico está ligado em um número.
bool TestarBit(unsigned short numero, int bit)
{
    return (numero & (1 << bit)) ? true : false;
}

// Função para ligar um bit específico em um número.
unsigned short LigarBit(unsigned short numero, int bit)
{
    return numero | (1 << bit);
}

// Função para desligar um bit específico em um número.
unsigned short DesligarBit(unsigned short numero, int bit)
{
    return numero & ~(1 << bit);
}

// Função para realizar uma operação AND entre dois números.
unsigned short AND(unsigned short numero1, unsigned short numero2)
{
    return numero1 & numero2;
}

// Função para realizar uma operação OR entre dois números.
unsigned short OR(unsigned short numero1, unsigned short numero2)
{
    return numero1 | numero2;
}

// Função para extrair os bits baixos de um número.
unsigned short BitsBaixos(unsigned short numero)
{
    int mascara = 0xFF;
    return numero & mascara;
}

// Função para extrair os bits altos de um número.
unsigned short BitsAltos(unsigned short numero)
{
    // cria uma mascara com 4 ultimos bits preenchidos
    // depois nega para pegar 4 primeiros bits preenchidos
    // vem a operacao AND com o numero
    unsigned short mascara = 0xFF; 
    mascara = ~mascara;
    
    /*
    * EXEMPLO:
    *
    * Entrada: 1101 1011 0010 0100
    *         
    * 1ª fase: 0000 0000 1111 1111 
    * 
    * 2ª fase: 1111 1111 0000 0000 
    *
    * 3ª fase: 1111 1111 0000 0000 & 1101 1011 0010 0100
    *
    * Saida: 1101 1011 0000 0000
    */

    return numero & mascara;
}