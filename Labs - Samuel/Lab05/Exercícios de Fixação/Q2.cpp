#include <iostream>
using namespace std;

float Fahrenheit(float);

int main()
{
    cout << "Digite uma temperatura em graus Celsius:";
    float celsius;
    cin >> celsius;

    float fahrenheit = Fahrenheit(float celsius)

    cout << << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit.\n";

	return 0;
}

float Fahrenheit(float celsius)
{
    float Fahrenheit = 1.8 * celsius + 32;
    return Fahrenheit;
}