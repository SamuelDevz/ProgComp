#include <iostream>
using namespace std;

int main()
{
    for(int i = 3; i < 1000; ++i)
        if(i % 3 == 0 || i % 5 == 0)
            cout << i << ' ';
    return 0;
}