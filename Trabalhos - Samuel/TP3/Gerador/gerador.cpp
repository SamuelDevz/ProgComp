#include "menu.h"
#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Menu();
    char opcao;
    cin >> opcao;

    while(opcao != SAIR) 
    {
        switch(opcao) 
        {
            case CADASTRAR: Cadastrar(); break;
            case IMPORTAR: Importar(); break;
            case EXCLUIR: Excluir(); break;
            case ALTERAR: Alterar(); break;
            case LISTAR: Listar(); break;
        }

        Menu();
        cin >> opcao;
    }

    Salvar();

    return 0;
}