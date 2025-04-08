#include <iostream>
using namespace std;

struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void exibir(const Caixa&);
void calcular_volume(Caixa&);

int main()
{
	Caixa caixa { "Caixasnet", 30, 30, 41, 0};
	
    exibir(caixa);
	calcular_volume(caixa);
	exibir(caixa);

    return 0;
}

void exibir(const Caixa & caixa)
{
	cout << caixa.marca << endl
		 << caixa.altura << endl
		 << caixa.largura << endl
		 << caixa.comprimento << endl
		 << caixa.volume << endl;
}

void calcular_volume(Caixa & caixa)
{
	caixa.volume = caixa.altura * caixa.largura * caixa.comprimento;
}