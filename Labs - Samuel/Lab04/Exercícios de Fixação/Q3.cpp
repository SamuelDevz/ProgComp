#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main()
{
	cout << "Começando agora:\n";
	UmTres();
	cout << "Pronto\n";

	return 0;
}

void UmTres()
{
	cout << "Um ";
	Dois();
	cout << "Tres\n";
}

void Dois()
{
	cout << "Dois ";
}