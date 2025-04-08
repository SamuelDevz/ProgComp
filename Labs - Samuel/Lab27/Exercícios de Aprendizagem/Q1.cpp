#include <iostream>
#include <clocale>
using namespace std;

constexpr int Max = 10;
int vetor[Max];
int tam{};

void Inserir();
void Remover();
void Buscar();
void Sair();
void menu();

int main() 
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    void (*opcoes[])() { nullptr, Inserir, Remover, Buscar };

    menu();
    int escolha;
    cin >> escolha;

    while (escolha != 4) 
    {
        if (escolha >= 1 && escolha < 4)
            opcoes[escolha]();
        else if (escolha < 1 && escolha > 4)
            cout << "Opção inválida. Tente novamente.\n";

        menu();
        cin >> escolha;
    }

    Sair();

	return 0;
}

void menu() 
{
    cout << "Menu do Sistema\n\n";
    cout << "1) Inserir\n";
    cout << "2) Remover\n";
    cout << "3) Buscar\n";
    cout << "4) Sair\n\n";
    cout << "Escolha: ";
}

void Inserir() 
{
    if (tam < Max) 
    {
        cout << "Digite o valor a ser inserido: ";
        int valor;
        cin >> valor;
        
        vetor[tam++] = valor;

        cout << "Valor inserido com sucesso.\n";
    } 
    else 
    {
        cout << "O vetor está cheio. Não é possível inserir mais elementos.\n";
    }
}

void Remover() 
{
    if (tam > 0) 
    {
        cout << "Digite o valor a ser removido: ";
        int valor;
        cin >> valor;

        int indiceARemover = -1;
        for (int i = 0; i < tam; i++) 
        {
            if (vetor[i] == valor) 
            {
                indiceARemover = i;
                break;
            }
        }

        if (indiceARemover != -1) 
        {
            for (int i = indiceARemover; i < tam - 1; i++)
                vetor[i] = vetor[i + 1];
            tam--;

            cout << "Valor removido com sucesso.\n";
        } 
        else 
        {
            cout << "Valor não encontrado no vetor.\n";
        }
    } 
    else 
    {
        cout << "O vetor está vazio. Não há elementos para remover.\n";
    }
}

void Buscar() 
{
    if (tam > 0) 
    {
        int valor;
        cout << "Digite o valor a ser buscado: ";
        cin >> valor;

        bool encontrado = false;
        for (int i = 0; i < tam; i++) 
        {
            if (vetor[i] == valor) 
            {
                cout << "Valor encontrado no índice " << i << ".\n";
                encontrado = true;
                break;
            }
        }

        if (!encontrado)
            cout << "Valor não encontrado no vetor.\n";
    } 
    else 
    {
        cout << "O vetor está vazio. Não há elementos para buscar.\n";
    }
}

void Sair() 
{
    cout << "Saindo do programa.\n";
}