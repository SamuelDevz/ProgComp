#include <iostream>
using namespace std;

int main()
{
	float preco[3] { 1.5f, 2, 1 };
	float qtd_produto[3]{};

	cout << "Prezado Cliente,\n";
	cout << "Digite a quantidade de quilos desejados:\n";
	
	cout << "Alface: ";
	cin >> qtd_produto[0];

	cout << "Beterraba: ";
	cin >> qtd_produto[1];

	cout << "Cenoura: ";
	cin >> qtd_produto[2];

	cout << "\nResumo da Compra\n";
	cout << "----------------------\n";
	cout << "Alface\t\t= R$" << preco[0] << "\n";
	cout << "Beterraba\t= R$" << preco[1] << "\n";
	cout << "Cenoura\t\t= R$" << preco[2] << "\n";
	cout << "----------------------\n";
	
	float valor_gasto[3];
  
  	valor_gasto[0] = qtd_produto[0] * preco[0];
  	valor_gasto[1] = qtd_produto[1] * preco[1];
  	valor_gasto[2] = qtd_produto[2] * preco[2];
  
	float total = valor_gasto[0] + valor_gasto[1] + valor_gasto[2];

	cout << "Total\t\t= R$" << total;

	return 0;
}