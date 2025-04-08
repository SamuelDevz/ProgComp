#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "Gerando numero pseudoaleatorio:";
	
	srand(time(NULL));
	int num = rand();
	cout << num << endl;
	
	if(num > 16834)
		cout << "GRANDE\n";
	else
		cout << "PEQUENO\n";

	return 0;
}