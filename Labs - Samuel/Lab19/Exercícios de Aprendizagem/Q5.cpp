#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char matriz_estatica[16][16];

    char ch{};
    for (int i = 0; i < 256; i++)
    {
        int linha = i % 16;
        int coluna = i / 16;
        matriz_estatica[linha][coluna] = ch + i;
    }

    cout << "Matriz estática:\n";
    for (int linha = 0; linha < 16; linha++)
    {
        for (int coluna = 0; coluna < 16; coluna++)
            cout << matriz_estatica[linha][coluna] << ' ';
        cout << endl;
    }

    cout << "\nEntre com as coordenadas da região de interesse:\n";
    int x1, y1, x2, y2;
    cout << "De: ";
    cin >> x1 >> y1;
    cout << "Até: ";
    cin >> x2 >> y2;

    int tamanho_regiao = (x2 - x1 + 1) * (y2 - y1 + 1);

    char ** matriz_dinamica = new char* [y2 - y1 + 1];
    for (int i = 0; i <= y2 - y1; i++)
        matriz_dinamica[i] = new char[x2 - x1 + 1];

    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
            matriz_dinamica[j - y1][i - x1] = matriz_estatica[j][i];
    }

    cout << "\nMatriz dinâmica:\n";
    for (int linha = 0; linha <= y2 - y1; linha++)
    {
        for (int coluna = 0; coluna <= x2 - x1; coluna++)
            cout << matriz_dinamica[linha][coluna] << " ";
        cout << endl;
    }

    for (int i = 0; i <= y2 - y1; i++)
        delete[] matriz_dinamica[i];
    delete[] matriz_dinamica;

	return 0;
}