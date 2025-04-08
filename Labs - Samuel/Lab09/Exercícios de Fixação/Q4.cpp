#include <iostream>
using namespace std;

int main()
{
	cout << "Aposta dos Amigos\n";
	cout << "-----------------\n";
	cout << "Digite a quantia apostada pelo jogador 1:";
	float jogador1;
	cin >> jogador1;

	cout << "Digite a quantia apostada pelo jogador 2:";
	float jogador2;
	cin >> jogador2;

	cout << "Entre com o valor do premio:";
	long premio;
	cin >> premio;

	long valor_jogador2 = premio / (jogador1 * jogador2);
	long valor_jogador1 = premio - valor_jogador2; 

	cout << "O jogador 1 tem direito a R$" << valor_jogador1 << endl;
	cout << "O jogador 2 tem direito a R$" << valor_jogador2 << endl;

    return 0;
}