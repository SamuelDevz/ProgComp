#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("integer.bin", ios_base::binary);
    if (fin.is_open())
    {
        int numeroArmazenado;
        fin.read((char*) &numeroArmazenado, sizeof(int));
        fin.close();
        cout << "Arquivo inteiro.bin encontrado!\n";
        cout << "Ele contém o numero " << numeroArmazenado << ".\n";
    }

    cout << "Digite um inteiro: ";
    int numero;
    cin >> numero;

    ofstream fout("integer.bin", ios_base::binary);
    if (!fout.is_open())
    {
        cout << "Abertura do arquivo peixes.bin falhou\n";
        exit(EXIT_FAILURE);
    }

    fout.write((char*) &numero, sizeof(int));
    fout.close();

    cout << "Numero armazenado no arquivo inteiro.bin.\n";

    return 0;
}