#include <iostream>
#include <clocale>
using namespace std;

constexpr int tam = 40;
constexpr int doacao_max = 10000;

struct Contribuinte
{
    char nome[tam];
    double valor;
};

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Digite o números de contribuintes: ";
    int qtd;
    cin >> qtd;

    Contribuinte * vet = new Contribuinte[qtd]; 
    bool grandes_patronos, pequenos_patronos;
    grandes_patronos = pequenos_patronos = false;

    for(int i = 0;i < qtd;++i)
    {
        cout << '#' << i + 1 << endl;
        cout << "Nome: ";
        cin.get();
        cin.getline(vet[i].nome, tam);

        cout << "Valor: ";
        cin >> vet[i].valor;

        if(vet[i].valor >= doacao_max)
            grandes_patronos = true;
        else
            pequenos_patronos = true;
    }

    cout << endl;

    if(qtd != 0)
    {
        if(grandes_patronos ==  true)
        {
            cout << "Grandes Patronos\n";
            for(int i = 0;i < qtd;++i)
                if(vet[i].valor >= doacao_max)
                    cout << vet[i].nome << ' ' << vet[i].valor << endl;
        }
        else
        {
            cout << "Grandes Patronos\n";
            cout << "Nenhum\n\n";
        }

        if(pequenos_patronos == true)
        {
            cout << "Patronos\n";
            for(int i = 0;i < qtd;++i)
                if(vet[i].valor < doacao_max)
                    cout << vet[i].nome << ' ' << vet[i].valor << endl;
        }
        else
        {
            cout << "Patronos\n";
            cout << "Nenhum\n\n";
        }
    }
    else
    {
        cout << "Grandes Patronos\n";
        cout << "Nenhum\n\n";
        
        cout << "Patronos\n";
        cout << "Nenhum\n\n"; 
    }

    return 0;
}