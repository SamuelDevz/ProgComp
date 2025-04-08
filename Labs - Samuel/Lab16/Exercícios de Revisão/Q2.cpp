#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char palavra[] = "Pratique muito";

	for(int i = 0; i < strlen(palavra); ++i)
		cout << palavra[i];
}