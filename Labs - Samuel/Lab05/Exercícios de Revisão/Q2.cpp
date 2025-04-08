#include <iostream>
using namespace std;

int num;

int f();
int g();

int main()
{
    num = 1;

    cout << f() + g() + num << endl;
	
	return 0;
}

int f()
{
    num = num + 3;
    return num;
}

int g()
{
    num = 2;
    return num;
}

/*

Qual é a ordem de chamada das funções dentro da função principal? Ou
seja, quem será chamada primeiro, f() ou g()?

R: Não se dar pra saber qual função será chamada primeira, por que isso
vai depender do compilador em questão

Qual é o resultado do programa? Ele seria o mesmo se invertêssemos a
ordem das chamadas de f() e g() dentro da função principal?

R: No visual studio o resultado será 8, agora se invertêssemos a
ordem das chamadas, poderá ser diferente, no caso do vs será 12

Existe alguma garantia de que as funções f() e g() serão sempre chamadas
na ordem em que elas aparecem no programa?

R: Não, não existe nenhuma garantia que as funções f() e g() serão sempre 
chamadas na ordem em que elas aparecem no programa

*/