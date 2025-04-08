#include <iostream>
using namespace std;

void print(const char*);
void print(const double);
void print(const int);

int main() 
{
    cout << "Inteiro: ";
    print(45);

    cout << "\nPonto-flutuante: ";
    print(3.9);
    
	cout << "\nString: ";
    print("Oi Mundo");
    cout << "\n";

    return 0;
}

void print(const int num) 
{
    cout << "\033[32m" << num << "\033[0m";
}

void print(const double num) 
{
    cout << "\033[34m" << num << "\033[0m";
}

void print(const char* str) 
{
    cout << "\033[31m" << str << "\033[0m";
}