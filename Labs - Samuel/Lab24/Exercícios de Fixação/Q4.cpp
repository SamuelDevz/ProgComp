#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

void exibir();
void exibir_imagem();
void armazenar_imagem();

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
            case 'A' :
            case 'a' :  armazenar_imagem(); 
                        break;
            case 'E' :
            case 'e' :  exibir_imagem();
                        break;
            default  :  cout << "Opção inválida!\n";
        }
        exibir();
        cin >> opcao;
    }

    return 0;
}

void exibir()
{
    cout << "Imagens Coloridas\n";
    cout << "-------------------\n";
    cout << "[A]rmazenar\n";
    cout << "[E]xibir\n";
    cout << "[S]air\n";
    cout << "-------------------\n";
    cout << "Opção: ";   
}

void armazenar_imagem()
{
    cout << "Largura: ";
    int largura;
    cin >> largura;

    cout << "Altura: ";
    int altura;
    cin >> altura;

    short ** mat = new short*[altura];
    
    for(int i = 0; i < altura; ++i)
        mat[i] = new short[largura];

    cout << "Defina " << altura << " cores em cada linha\n";
    for(int i = 0; i < altura; ++i)
    {
        cout << '#' << i + 1 << ": ";
        for(int j = 0; j < largura; ++j)
            cin >> mat[i][j];
    }

    ofstream fout("imagens.bin", ios_base::out | ios_base::trunc | ios_base::binary);
    if(!fout.is_open())
    {
        cout << "Abertura do arquivo imagens.bin falhou\n";
        exit(EXIT_FAILURE);
    }

    fout.write((char*)&largura, sizeof(int));
    fout.write((char*)&altura, sizeof(int));

    for (int i = 0; i < altura; ++i)
        fout.write((char*)mat[i], largura * sizeof(short));

    for(int i = 0; i < altura; ++i)
        delete[] mat[i];
    delete[] mat;

    cout << "Imagem colorida foi armazenada." << endl;

    fout.close();
}

void exibir_imagem()
{
    int largura, altura;

    ifstream fin("imagens.bin", ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        fin.read((char*)&largura, sizeof(int));
        fin.read((char*)&altura, sizeof(int));

        short ** mat = new short*[altura];
        for (int i = 0; i < altura; ++i)
        {
            mat[i] = new short[largura];
            fin.read((char*)mat[i], largura * sizeof(short));
        }

        cout << "Imagem armazenada no arquivo:\n";
        for (int i = 0; i < altura; ++i)
        {
            for (int j = 0; j < largura; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }

        for (int i = 0; i < altura; ++i)
            delete[] mat[i];
        delete[] mat;

        fin.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo imagens.bin\n";
    }
}