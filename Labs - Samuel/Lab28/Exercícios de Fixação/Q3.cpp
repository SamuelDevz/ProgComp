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

void exibir(const Caixa*);
void calcular_volume(Caixa*);

int main()
{
	Caixa caixa { "Caixasnet", 30, 30, 41, 0};
	exibir(&caixa);
	calcular_volume(&caixa);
	exibir(&caixa);
    return 0;
}

void exibir(const Caixa * caixa)
{
	cout << caixa->marca << endl
		 << caixa->altura << endl
		 << caixa->largura << endl
		 << caixa->comprimento << endl
		 << caixa->volume << endl;
}

void calcular_volume(Caixa * caixa)
{
	caixa->volume = caixa->altura * caixa->largura * caixa->comprimento;
}

/*
	
Uma das principais vantagens das referências em relação aos ponteiros em C++ 
é a segurança. As referências são sempre garantidas de estar associadas a um 
objeto válido, o que significa que elas não podem ser nulas e não podem ser 
apontadas para outro objeto após a sua inicialização. Isso ajuda a prevenir 
erros comuns de programação, como acessar um ponteiro nulo.

Além disso, as referências são mais simples de usar e de entender em comparação 
com os ponteiros. Elas fornecem uma sintaxe mais limpa e mais próxima da 
semântica de passagem por valor, o que pode tornar o código mais legível e 
menos propenso a erros.

Outra vantagem das referências é que elas não precisam de operações de 
desreferenciamento, como os ponteiros, o que pode melhorar o 
desempenho em algumas situações.

*/