#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    cout << "Entre com altura, largura e comprimento: ";
    float altura, largura, comprimento, volume;
    //cin >> altura >> largura >> comprimento;

	cin >> altura;
	cin >> largura;
	cin >> comprimento;

    volume = altura * largura * comprimento;

    cout << "O volume é " << volume << "cm cúbicos\n";

    return 0;
}