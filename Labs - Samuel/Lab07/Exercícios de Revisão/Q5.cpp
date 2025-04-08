#include <iostream>
using namespace std;

char ligarBit(unsigned char, int);
char DesligarBit(unsigned char, int);
bool testarBit(unsigned char, int);

int main()
{
}

char ligarBit(unsigned char mascara, int bit)
{
    mascara = 1 << bit;
    unsigned char estado = 167;

    estado |= mascara;
    return estado;
}

char DesligarBit(unsigned char mascara, int bit)
{
    mascara = ~(1 << bit);
    unsigned char estado = 252;
    estado &= mascara;
    return estado;
}

bool testarBit(unsigned char mascara, int bit)
{
    mascara = 1 << bit;
    unsigned char estado = 240;
    return (estado & mascara) ? true : false; 
}