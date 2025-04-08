#include <iostream>
using namespace std;

bool Num_Primo(int);

int main()
{
	int count = 0;
    int number = 2;
    
    while (count < 10001) 
	{
        if (Num_Primo(number))
            count++;
        number++;
    }
    
    cout << "O 10001? numero primo e: " << number - 1 << endl;

    return 0;
}

bool Num_Primo(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;

    return true;
}