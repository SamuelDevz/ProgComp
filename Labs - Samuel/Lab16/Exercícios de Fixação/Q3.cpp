#include <iostream>
using namespace std;

int main()
{
    char jogadorTime[50];
    
    cout << "Digite jogador/time: ";
    cin.getline(jogadorTime, 50);
    
    int tam{};
    char * ptr_time;
    
    for (int i = 0; jogadorTime[i] != '\0'; ++i)
    {
        if (jogadorTime[i] == '/') 
        {
            ptr_time = &jogadorTime[i + 1];
            break;
        }
        tam++;
    }
    
    cout << "O nome do jogador tem " << tam << " letras.\n" 
         << "O seu time e o " << ptr_time << ".\n";
    
    return 0;
}