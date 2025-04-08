#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Gerando numeros pseudoaleatorios:\n";
    srand(1);
    //srand(5);

    cout << rand() << " "
         << rand() << " "
         << rand() << " "
         << rand() << " "
         << rand() << " ";

    return 0;
}