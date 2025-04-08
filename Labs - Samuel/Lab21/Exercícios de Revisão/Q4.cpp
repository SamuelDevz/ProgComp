#include <iostream>
#include <clocale>
using namespace std;

constexpr int CH = 60;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite a média final: ";
    float MF;
    cin >> MF;

    cout << "Digite a nota da 4ª avaliação: ";
    float N4;
    cin >> N4;

    cout << "Digite o número de faltas: ";
    int F;
    cin >> F;

    if (MF >= 7)
    {
        if (F <= 0.25 * CH)
            cout << "Aluno aprovado!" << endl;
        else
            cout << "Aluno reprovado por faltas!" << endl;
    }
    else
    {
        if (MF < 4 || F > 0.25 * CH)
            cout << "Aluno reprovado!" << endl;
        else
            cout << "Aluno em recuperação!" << endl;
    }

    return 0;
}