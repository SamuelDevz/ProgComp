#include <iostream>
#include <clocale>
using namespace std;

constexpr int tam = 20;

struct Balao
{
    float diametro;
    char marca[tam];
    int modelo;
};

int main() 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
    Balao * balao_ptr = new Balao;

    cout << "Digite o diâmetro do balão (em metros): ";
    cin >> balao_ptr->diametro;

    cout << "Digite a marca do balão: ";
    cin.ignore(); 
    cin.getline(balao_ptr->marca, tam);

    cout << "Digite o número do modelo do balão: ";
    cin >> balao_ptr->modelo;
    
    cout << "\nConteúdo do registro balao:\n";
    cout << "Diâmetro: " << balao_ptr->diametro << " metros\n";
    cout << "Marca: " << balao_ptr->marca << "\n";
    cout << "Modelo: " << balao_ptr->modelo << "\n";

    delete balao_ptr;

    return 0;
}