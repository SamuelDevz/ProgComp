#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

struct Soldado
{
    char nome[20];
    int eliminacoes;
    int mortes;
    float taxa_eliminacao_por_morte;
    int partidas;
};

void exibirSoldado(const Soldado& soldado)
{
    cout << "Nome: " << soldado.nome << endl;
    cout << "Eliminações: " << soldado.eliminacoes << endl;
    cout << "Mortes: " << soldado.mortes << endl;
    cout << "Taxa de Eliminações por Morte: " << soldado.taxa_eliminacao_por_morte << endl;
    cout << "Partidas jogadas: " << soldado.partidas << endl;
}

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    bool arquivoExiste = false;
    Soldado soldado;
    ifstream fin("soldados.bin", ios::binary | ios_base::in);
    if (fin.is_open())
    {
        fin.read((char*)&soldado, sizeof(soldado));
        arquivoExiste = true;
        fin.close();
    }

    char opcao;
    do
    {
        cout << "[N]ovo soldado (sobrescreve o anterior)\n";
        cout << "[A]tualiza soldado (com os dados da última partida)\n";
        cout << "[E]xibe soldado (atual)\n";
        cout << "[S]air\n";
        cout << "Opção: ";
		
		cin >> opcao;

        switch (opcao)
        {
            case 'N':
            case 'n':
        	{
        		cout << "Nome: ";
                cin >> soldado.nome;
                soldado.eliminacoes = 0;
                soldado.mortes = 0;
                soldado.taxa_eliminacao_por_morte = 0.0f;
                soldado.partidas = 0;

                arquivoExiste = true;
                break;
        	}
            case 'A':
            case 'a':
        	{
                int elim, mort;
                cout << "Número de eliminações da última partida: ";
                cin >> elim;
                cout << "Número de mortes da última partida: ";
                cin >> mort;

                soldado.eliminacoes += elim;
                soldado.mortes += mort;
                if (soldado.mortes > 0)
                    soldado.taxa_eliminacao_por_morte = (float) soldado.eliminacoes / soldado.mortes;
                soldado.partidas++;
                break;        		
        	}
            case 'E':
            case 'e':
            {
            	if(arquivoExiste) exibirSoldado(soldado);
				else 			  cout << "Nenhum soldado registrado ainda.\n";
                break;
            }
            case 'S':
            case 's':
        	{
        		if (arquivoExiste)
                {
                    ofstream fout("soldados.bin", ios::binary);
                    if (fout.is_open())
                        fout.write((char*)&soldado, sizeof(soldado));
                    else
                        cout << "Erro ao escrever no arquivo." << endl;
                }
                break;
        	}
            default:
            {
                cout << "Opção inválida." << endl;
                break;
            }
        }
    } while(opcao != 'S' && opcao != 's');

	return 0;
}