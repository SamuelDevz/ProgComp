#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Lado a:";
    float a;
    cin >> a;

    cout << "Lado b:";
    float b;
    cin >> b;

    float base = a * b;
    cout << "Área da base = " << base;

    cout << "Altura:";
    float altura;
    cin >> altura;

    float volume = altura * base;

    cout << "Volume do prisma = " << volume << '\n'; 

    return 0;
}