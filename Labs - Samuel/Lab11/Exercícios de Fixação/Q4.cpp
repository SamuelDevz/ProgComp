#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << "O vetor nome tem " << strlen(nome) << " letras e tem " << sizeof(nome) << " bytes.\n";

    return 0;
}