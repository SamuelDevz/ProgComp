#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Antônio, Bezerra\n";
    cout << "Av. Costa Larga, 540\n";
    cout << "Mossoró, RN\n";

    return 0;
}