#include <iostream>
using namespace std;

int main()
{
	short s;
	int i;
	long l;
	long long ll;

	cout << "short:\t\t" << sizeof(s) << " bytes\n";
	cout << "int:\t\t" << sizeof(i) << " bytes\n";
	cout << "long:\t\t" << sizeof(l) << " bytes\n";
	cout << "long long:\t" << sizeof(ll) << " bytes\n";

	int total = sizeof(s) + sizeof(i) + sizeof(l) + sizeof(ll);
	cout << "Total:\t\t" << total << " bytes\n";

	return 0;
}