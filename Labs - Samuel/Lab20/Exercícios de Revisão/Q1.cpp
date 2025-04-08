#include <iostream>
using namespace std;

int main()
{
    // 1ª versão
    while (ch != '.')
    {
        if (ch == ' ')
            espaço++;
		if (ch == '\n')
			novalinha++;
    }

    // 2ª versão
    while (ch != '.')
    {
        if (ch == ' ')
            espaço++;
        else if (ch == '\n')
            novalinha++;
    }
}

/*

R:

A segunda forma tem uma vantagem sobre a primeira no sentido de eficiência e precisão. Na primeira versão,
cada caractere é verificado tanto para espaço em branco quanto para nova linha, independentemente de qual 
condição seja verdadeira. Isso significa que mesmo se um caractere for uma nova linha, ele ainda será 
verificado para espaço em branco, o que é desnecessário.

Na segunda versão, a cláusula "else" é usada após a verificação de espaço em branco. Isso significa que, se 
um caractere for identificado como espaço em branco, ele não será verificado novamente para nova linha. 
Isso economiza tempo de processamento, pois o programa pula diretamente para o próximo caractere.

Essa abordagem é mais eficiente, pois evita verificações desnecessárias e permite que o programa faça menos 
iterações ao percorrer os caracteres. Além disso, também garante uma contagem precisa de espaços em branco 
e novas linhas, sem interferências mútuas entre as duas contagens.

*/