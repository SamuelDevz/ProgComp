#include <iostream>
#include <clocale>
using namespace std;

constexpr int num_aulas = 66;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite as notas e frequência da disciplina\n";
    float notas[4], media;
    int faltas;

    for(int i = 0;i < 3;++i)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    media = (notas[0] + notas[1] + notas[2]) / 3;

    cout << "Faltas: ";
    cin >> faltas;

    float falta_por_aula = num_aulas * 0.75;

    if(media >= 6)
    {
        cout << "Aprovado\n";
    }
    else
    {
        if(faltas >= falta_por_aula)
        {
            cout << "4ª Prova\n";
            cout << "Digite sua 4ª nota: ";
            cin >> notas[4];

            if(notas[4] >= 6)
                cout << "Aprovado";
            else
                cout << "Reprovado";
        }
        else
        {
            cout << "Reprovado por falta"; 
        }
    }

    return 0;
}