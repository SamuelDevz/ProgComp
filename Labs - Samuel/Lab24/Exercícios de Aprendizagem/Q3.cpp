#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

enum { Alfanumerica = 1, Numerica };

union Senha
{
    char Alfanumerica[20];
    int Numerica;
};

void exibir_senha(bool);
void gravar_senha();
void menu();

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Senha senha;
    bool arquivoExiste = false;

    ifstream fin("senha.bin", ios_base::binary | ios_base::in);
    if (fin.is_open())
    {
        fin.read((char*)&senha, sizeof(senha));
        arquivoExiste = true;
        fin.close();
    }

    menu();
    char opcao;
    cin >> opcao;

    while (opcao != 'S' && opcao != 's')
    {
        switch (opcao)
        {
            case 'E':
            case 'e':
            {
                exibir_senha(arquivoExiste);
                break;
            }
            case 'G':
            case 'g':
            {
                gravar_senha();
                arquivoExiste = true;
                break;
            }
            default:
            {
                cout << "Opção inválida.\n";
                break;
            }
        }
        menu();
        cin >> opcao;
    }

    return 0;
}

void menu()
{
    cout << "[E]xibir senha\n";
    cout << "[G]ravar nova senha\n";
    cout << "[S]air\n";
    cout << "Opção: ";
}

void exibir_senha(bool arquivo_existe)
{
    if(arquivo_existe)
    {
        ifstream fin("senha.bin", ios::binary);
        int tipoSenha;
        fin.read((char*)&tipoSenha, sizeof(tipoSenha));
        Senha senha;

        if (tipoSenha == Alfanumerica)
        {
            fin.read((char*) senha.Alfanumerica, sizeof(senha.Alfanumerica));
            cout << "Senha Alfanumérica: " << senha.Alfanumerica << endl;
        }
        else if (tipoSenha == Numerica)
        {
            fin.read((char*)&senha.Numerica, sizeof(senha.Numerica));
            cout << "Senha Numérica: " << senha.Numerica << endl;
        }
    }
    else
    {
        cout << "O arquivo de senha ainda não foi criado.\n";
    }
}

void gravar_senha()
{
    cout << "Qual tipo de senha você quer gravar?\n";
    cout << "[1] Alfanumérica | [2] Numérica: ";
    int tipoSenha;
    cin >> tipoSenha;

    ofstream fout("senha.bin", ios::binary);
    fout.write((char*)&tipoSenha, sizeof(tipoSenha));
    
    Senha senha;
    if (tipoSenha == Alfanumerica)
    {
        cout << "Digite a senha alfanumérica: ";
        cin.ignore();
        cin.getline(senha.Alfanumerica, sizeof(senha.Alfanumerica));
        fout.write(senha.Alfanumerica, sizeof(senha.Alfanumerica));
    }
    else if (tipoSenha == Numerica)
    {
        cout << "Digite a senha numérica: ";
        cin >> senha.Numerica;
        fout.write((char*)&senha.Numerica, sizeof(senha.Numerica));
    }
    else
    {
        cout << "Tipo de senha inválido." << endl;
        fout.close();
        remove("senha.bin");
    }

    fout.close();
}