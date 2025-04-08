#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

struct MensagemColorida
{
    char texto[80];
    short corTexto;
    short corFundo;
};

void exibir();
void exibir_mensagem();
void armazenar_mensagem();

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

    exibir();
    char opcao;
    cin >> opcao;

    while(opcao != 'S' && opcao != 's')
    {
        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                armazenar_mensagem();
                break;
            }
            case 'E':
            case 'e':
            {
                exibir_mensagem();
                break;
            }
            default:
            {
                cout << "Opção inválida!\n";
                break;
            }
        }
        exibir();
        cin >> opcao;
    }

	return 0;
}

void exibir()
{
    cout << "Mensagens Coloridas\n";
    cout << "-------------------\n";
    cout << "[A]rmazenar\n";
    cout << "[E]xibir\n";
    cout << "[S]air\n";
    cout << "-------------------\n";
    cout << "Opção: []\b\b";   
}

void armazenar_mensagem()
{
    MensagemColorida m;

    cout << "Sua mensagem: ";
    cin.ignore();
    cin.getline(m.texto, 80);

    cout << "Cor do texto: ";
    cin >> m.corTexto;

    cout << "Cor do fundo: ";
    cin >> m.corFundo;

    ofstream fout("mensagens.bin", ios_base::out | ios_base::trunc | ios_base::binary);
    if(!fout.is_open())
    {
        cout << "Abertura do arquivo mensagens.bin falhou\n";
        exit(EXIT_FAILURE);
    }

    fout.write((char*)&m, sizeof(MensagemColorida));
    fout.close();
}

void exibir_mensagem()
{
    MensagemColorida m;

    ifstream fin("mensagens.bin", ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        while (fin.read((char*)&m, sizeof(MensagemColorida)))
        {
            cout << "Mensagem armazenada no arquivo:\n";
            cout << "\033[38;5;" << m.corTexto << ";48;5;" << m.corFundo << "m\n";
            cout << m.texto << "\n";
        }
    }

    cout << "\033[0m";

    fin.close();
}