#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template<typename T>
void print(const T a, const T b);

template<typename T>
void print(const T * ch1, const T * ch2);

int main() 
{
    string strA = "Pro";
    string strB = "gramando";
    print(1, 2);
    print(2.6, 3.7);
    print('A', 'B');
    print(strA.c_str(), strB.c_str());
    return 0;
}

template<typename T>
void print(const T a, const T b) 
{
    T c = a + b;
    cout << a << " + " << b << " = " << c << endl;
}

template<typename T>
void print(const T* ch1, const T* ch2) 
{
    T c[3];
    strcpy(c, ch1);
    strcat(c, ch2);
    c[2] = '\0';
    cout << ch1 << " + " << ch2 << " = " << c << endl;
}