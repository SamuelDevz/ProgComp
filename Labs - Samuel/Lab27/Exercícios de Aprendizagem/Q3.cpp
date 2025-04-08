#include <iostream>
using namespace std;

void CreateButton(const int x, const int y, void (*)(void));
void (*OnClick)(void);
void Mensagem();

int main()
{
    CreateButton(10, 10, Mensagem);

    cout << "Pressionar Botao? ";
    char resposta;
    cin >> resposta;
    
    if (resposta == 'S' || resposta == 's')
        OnClick();
}

void CreateButton(const int x, const int y, void (*callback)(void))
{
    cout << "Botao criado na posicao " << x << ',' << y << endl;
    OnClick = callback;
}

void Mensagem()
{
    cout << "Botao Pressionado!\n";
}