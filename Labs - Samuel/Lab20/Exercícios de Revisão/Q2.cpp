#include <iostream>
using namespace std;

int main()
{
}

/*

Em que situações a variável “a” assumirá os valores 1, 4 e 8? Existe alguma chance
de “a” ter um valor diferente dos mencionados, isto é, o valor de “a” sempre será
modificado na execução deste código?

if (z <= 10)
    a = 1;
else
    if (z <= 20)
        a = 4;
    else
        if (z <= 50)
        a = 8;

R: A variável "a" assumirá os valores 1, 4 e 8 nas seguintes situações:

Se o valor de "z" for menor ou igual a 10, então "a" será igual a 1.
Se o valor de "z" for maior que 10 e menor ou igual a 20, então "a" será igual a 4.
Se o valor de "z" for maior que 20 e menor ou igual a 50, então "a" será igual a 8.

Não existe uma chance de "a" ter um valor diferente dos mencionados, desde que a variável "z" seja uma 
variável numérica e não seja modificada após a atribuição de "a" neste trecho de código. Cada valor 
possível de "z" é coberto pelas três condições e, portanto, o valor de "a" será sempre definido 
nessas situações específicas.

*/