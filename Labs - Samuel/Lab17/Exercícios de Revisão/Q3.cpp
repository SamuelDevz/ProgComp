#include <iostream>
using namespace std;

int main()
{
	char str[] = "C++ é bom";

	/*
	for(int i = 0; str[i] != '\0'; ++i)
		cout << str[i];
	*/

	int tam = sizeof(str) / sizeof(int);

	for(int i = 0; i < tam; ++i)
		cout << str[i];
}