#include <iostream>
#include <clocale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << left; cout.width(10); cout << "Produto";
    cout << right; cout.width(11); cout << "Preco/Kg";
    cout.width(17); cout << "Pedido (Kg)";
    cout.width(15); cout << "Total Parcial" << endl;

    cout << left; cout.width(10); cout << "----------";
    cout << right; cout.width(12); cout << "---------";
    cout.width(16); cout << "-----------";
    cout.width(16); cout << "--------------" << endl;

    cout << left; cout.width(10); cout << "Alface";
    cout << right; cout.width(13); cout << "R$ 1,25/Kg";
    cout.width(9); cout << "3,2Kg";
    cout.width(16); cout << "R$ 4, 00" << endl;

    cout << left; cout.width(10); cout << "Beterraba";
    cout << right; cout.width(13); cout << "R$ 0,65/Kg";
    cout.width(9); cout << "6,0Kg";
    cout.width(16); cout << "R$ 3, 90" << endl;

    cout << left; cout.width(10); cout << "Cenoura";
    cout << right; cout.width(13); cout << "R$ 0,90/Kg";
    cout.width(8); cout << "10Kg";
    cout.width(16); cout << "R$ 9,00" << endl;
    
    return 0;
}