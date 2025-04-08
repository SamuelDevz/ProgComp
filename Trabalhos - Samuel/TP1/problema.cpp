#include <iostream>
#include "genetico.h"
using namespace std;

#define OK " - \033[32mOK\033[m\n"
#define X  " - \033[31mX\033[m\n"

int main()
{
    cout << "Entre com 6 soluções iniciais (números entre 0 e 65535):\n";
    unsigned short solucoes[6]{};
    for(int i = 0; i < 6; ++i)
        cin >> solucoes[i];

    cout << "Resultado da Avaliação\n";
    cout << "-----------------------\n";
    for(int i = 0; i < 6; ++i)
        cout << (Avaliacao(solucoes[i]) ? OK : X);

    unsigned short novasSolucoes[4]{};
    novasSolucoes[0] = CruzamentoPontoUnico(solucoes[0], solucoes[1]);
	novasSolucoes[1] = CruzamentoAritmetico(solucoes[2], solucoes[3]);
	novasSolucoes[2] = MutacaoSimples(solucoes[4]);
	novasSolucoes[3] = MutacaoDupla(solucoes[5]);

    cout << "-----------------------\n";
    for(int i = 0; i < 4; ++i)
        cout << (Avaliacao(novasSolucoes[i]) ? OK : X);
}