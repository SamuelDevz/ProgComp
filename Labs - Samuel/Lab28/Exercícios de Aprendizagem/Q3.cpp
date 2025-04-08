#include <iostream>
#include <fstream>
using namespace std;

struct Par 
{
    int a;
    int b;
};

ostream& operator<<(ostream&, const Par&);

int main() 
{
    ifstream fin("input.txt");
    if (!fin.is_open()) 
    {
        cout << "Erro ao abrir o arquivo.\n";
        return EXIT_FAILURE;
    }

    cout << "Pares: ";
    Par par;
    fin >> par.a;

    while (!fin.eof()) 
    {
    	fin >> par.b;
        cout << par << " ";
        fin >> par.a;
    }

    fin.close();

    return 0;
}

ostream& operator<<(ostream& os, const Par& par) 
{
    os << "[" << par.a << "," << par.b << "]";
    return os;
}