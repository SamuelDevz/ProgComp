#include <iostream>
#include <string>
using namespace std;

struct Prato 
{
    string nome;
    double preco;
};

int main()
{
    Prato cardapio[]
	{
        { "Hamburguer", 10.99 },
        { "Batata Frita", 5.99 },
        { "Refrigerante", 2.99 },
        { "Sorvete", 3.99 }
    };

    cout << "=== Cardapio ===" << endl;
    for (const Prato& prato : cardapio)
        cout << prato.nome << " - R$" << prato.preco << endl;

    bool continuarPedido = true;
    double totalConta{};
    while (continuarPedido) 
	{
        cout << "Digite o nome do prato que deseja pedir (ou 'sair' para encerrar): ";
        string nomePedido;
        cin >> nomePedido;

        if (nomePedido == "sair") 
		{
            continuarPedido = false;
        } 
		else 
		{
            bool pratoEncontrado = false;
            for (const Prato& prato : cardapio) 
			{
                if (prato.nome == nomePedido) 
				{
                    totalConta += prato.preco;
                    pratoEncontrado = true;
                    break;
                }
            }

            if (!pratoEncontrado)
                cout << "Prato nao encontrado no cardapio." << endl;
        }
    }

    cout << "Total a pagar: R$" << totalConta << endl;

    return 0;
}