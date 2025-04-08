#include <iostream>
#include <clocale>
using namespace std;

float media_harmonica(float, float); 

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Entre com um número: ";
    int num;
    cin >> num;

    cout << "Entre com outro número: ";
    int num2;
    cin >> num2;

    float resul = media_harmonica(num, num2); 

    cout << "A média harmônica dos números é " << resul << '\n';

	return 0;
}

float media_harmonica(float x, float y)
{
    float media_harmonica = (2 * x * y) / (x + y);
}