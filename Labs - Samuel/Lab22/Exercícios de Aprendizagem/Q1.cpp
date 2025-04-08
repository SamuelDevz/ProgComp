#include <iostream>
#include <clocale>
using namespace std;

#ifdef _WIN32
    void limparTela()
    { system("cls"); }
#else
	void limparTela()
	{ system("clear"); }
#endif

const float preco_beterraba = 0.65;
const float preco_alface = 1.25;
const float preco_cenoura = 0.90;

void menu();
float pedido_Alface();
float pedido_Cenoura();
float pedido_Beterraba();
void calculo(float total[]);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	menu();
	char opcao;
	cin >> opcao;
	
	while(opcao != 'a' && opcao != 'b' && opcao != 'c' && opcao != 's')
	{
		cout << "Digite novamente sua opcao: ";
		cin >> opcao;
	}
	
	float pedidos[3] {};
	while(opcao != 's')
	{
		limparTela();
		
		switch(opcao)
		{
			case 'a': pedidos[0] = pedido_Alface(); break;
			case 'b': pedidos[1] = pedido_Beterraba(); break;
			case 'c': pedidos[2] = pedido_Cenoura(); break;
		}
		
		menu();
		cin >> opcao;
	}
	
	calculo(pedidos);

    return 0;
}

void menu()
{
	cout << "Supermercado ABC\n";
	cout << "----------------\n";
	cout << "a) Alface\tR$ 1,25/Kg\n";
	cout << "b) Beterraba\tR$ 0,65/Kg\n";
	cout << "c) Cenoura\tR$ 0,90/Kg\n";
	cout << "Faca seu pedido usando as letras (a, b, c) e (s) para encerrar: ";
}

float pedido_Alface()
{
	cout << "Produto   Preco / Kg\n";
	cout << "--------------------\n";
	cout << "Alface    R$ 1,25/Kg\n";
	cout << "--------------------\n";
	cout << "Seu Pedido: ";
	float pedido;
	cin >> pedido;

	limparTela();
	
    return pedido;
}

float pedido_Cenoura()
{
	cout << "Produto   Preco / Kg\n";
	cout << "--------------------\n";
	cout << "Cenoura   R$ 0,90/Kg\n";
	cout << "--------------------\n";
	cout << "Seu Pedido: ";
	float pedido;
	cin >> pedido;

    limparTela();

	return pedido;
}

float pedido_Beterraba()
{
	cout << "Produto    Preco / Kg\n";
	cout << "---------------------\n";
	cout << "Beterraba  R$ 0,65/Kg\n";
	cout << "---------------------\n";
	cout << "Seu Pedido: ";
	float pedido;
	cin >> pedido;
	
    limparTela();
	
    return pedido;
}

void calculo(float pedidos[])
{
	limparTela();
	cout << left; cout.width(10); cout << "Produto";
    cout << right; cout.width(11); cout << "Preco/Kg";
    cout.width(17); cout << "Pedido (Kg)";
    cout.width(15); cout << "Total Parcial" << endl;

    cout << left; cout.width(10); cout << "----------";
    cout << right; cout.width(12); cout << "---------";
    cout.width(16); cout << "-----------";
    cout.width(15); cout << "-------------" << endl;

    cout << left; cout.width(10); cout << "Alface";
    cout << right; cout.width(17); cout << "R$ 1,25/Kg\t   ";
    cout.precision(1); cout << fixed; 
	cout << pedidos[0] << "Kg\t";
	cout << "R$ 4,00" << endl;

    cout << left; cout.width(10); cout << "Beterraba";
    cout << right; cout.width(17); cout << "R$ 0,65/Kg\t   ";
    cout.precision(1); cout << fixed;
	cout << pedidos[1] << "Kg\t";
    cout << "R$ 3,90" << endl;
	
    cout << left; cout.width(10); cout << "Cenoura";
    cout << right; cout.width(17); cout << "R$ 0.90/Kg\t   ";
    cout.precision(1); cout << fixed;
    cout << pedidos[2] << "Kg\t";
    cout << "R$ 9,00" << endl;
    
    cout << "-----------------------------------------------------\n";
    
    float descontos, total_pedido, total_pagar, custo_de_entrega;
    descontos = total_pedido = total_pagar = custo_de_entrega = 0;
    
    total_pedido = 
	pedidos[0] * preco_alface + 
	pedidos[1] * preco_beterraba + 
	pedidos[2] * preco_cenoura;
    
    for(int i = 0;i < 3;++i)
    {
    	if(pedidos[i] > 100)
    		descontos += pedidos[i] * 0.05;
    		
    	if(total_pedido < 5)
    		custo_de_entrega = 3.5;
		else if(total_pedido >= 5 && total_pedido < 20)
			custo_de_entrega = 10;
		else if(total_pedido >= 20)
			custo_de_entrega = 8 + total_pedido * 0,1;
	}
    
    total_pagar = total_pedido - descontos + custo_de_entrega;
    
    cout.precision(2);
    cout << fixed;
    cout << "Total do pedido:\t\t\tR$ " << total_pedido << endl;
    cout << "Descontos:\t\t\t\tR$ " << descontos << endl;
    cout << "Custo de entrega:\t\t\tR$ " << custo_de_entrega << endl;
    cout << "-----------------------------------------------------\n";
    cout << "Total a pagar:\t\t\t\tR$ " << total_pagar << endl;
}