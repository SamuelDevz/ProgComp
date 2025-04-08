#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "A quantos anos você fuma? ";
	int anos;
	cin >> anos;

	cout << "Quantos cigarros você fuma por dia? ";
	int cigarros;
	cin >> cigarros;

	cout << "Qual o preço médio de uma carteira de cigarros? ";
	float preco;
	cin >> preco;

	float valor_por_cigarro = (preco * cigarros) / 20;
	float valor_total = anos * 365 * valor_por_cigarro;

	cout << "Você gastou até agora R$" << valor_total << " com cigarros\n";

    return 0;
}