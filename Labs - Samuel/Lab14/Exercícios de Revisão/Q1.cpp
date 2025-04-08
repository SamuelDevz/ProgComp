#include <iostream>
using namespace std;

int main()
{
	double litros;
	double * ptr = &litros;
	cout << "O valor de litros e " << *ptr;

    return 0;
}