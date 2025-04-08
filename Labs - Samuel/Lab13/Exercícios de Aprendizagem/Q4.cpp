#include <iostream>
using std::cout;
using std::endl;

enum Semana { SEG, TER, QUA, QUI, SEX, SAB, DOM };

int main()
{
    char semanas[7][13]
    {
        "Segunda", "Terça-feira", "Quarta-feira", "Quinta-feira",
        "Sexta-feira", "Sabado", "Domingo"
    };

    for(Semana ind = SEG; ind <= DOM; ind = Semana(ind + 1))
        cout << semanas[ind] << endl;

    return 0;
}