#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    x = x + 32767;
    cout << "x = " << x << endl;
 
    long int y = 2147483647;
    y = y + 1;
    cout << "y = " << y << endl;
    
    return 0;
}