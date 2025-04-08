#include <iostream>
#include <cstring>
using namespace std;

struct Guloseima
{
    char marca[24];
    double peso;
    int calorias;
};

void atribuir_valores(Guloseima&, const char * str = "Charge", const double peso = 40.0, const int cal = 187);
void exibir(const Guloseima&);

int main()
{
    Guloseima snack;
    atribuir_valores(snack);
    exibir(snack);
	return 0;
}

void atribuir_valores(Guloseima & comida, const char * str, const double peso, const int cal)
{
    strcpy(comida.marca, str);
    comida.peso = peso;
    comida.calorias = cal;
}

void exibir(const Guloseima & comida)
{
    cout << "Marca: " << comida.marca << endl
         << "Peso: " << comida.peso << "g\n"
         << "Calorias: " << comida.calorias << "cal\n";
}