#include <iostream>
using namespace std;

int main()
{
    int x;
    x = 1;

    int y = 1;

	return 0;
}

/*

Qual é a diferença entre as instruções de inicialização a seguir? Existe alguma
razão para preferir uma opção sobre a outra? O resultado delas depende de onde
elas estão dentro do código?

int x;              int y = 1;
x = 1;

R: a primeira a variável x não é inicializada logo na declaração, já na variável y
ela é inicializada logo na declaração; a preferência pela primeira é poder usar a
variável x em qualquer lugar do programa, já a segunda pode ser pela praticidade
de usa-la logo após a declaração.

*/