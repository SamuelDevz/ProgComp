#include <iostream>
using namespace std;

int main()
{
	cout << "Você quer que eu conte de 1 ate que numero? ";
	int num;
	cin >> num;

	for(int i = 1; i <= num; ++i)
		cout << i << ' ';
	cout << endl;

	for(int i = num; i >= 1; --i)
		cout << i << ' ';
	cout << endl;

	for(int i = 1; i < num; i+=2)
		cout << i << ' ';
	cout << endl;

	for(int i = num; i >= 1; --i)
		if(i % 2 != 0) cout << i << ' ';
	cout << endl;

	for(int i = 2; i <= num; ++i)
		if(i % 2 == 0) cout << i << ' ';
	cout << endl;

	for(int i = num; i >= 2; --i)
		if(i % 2 == 0) cout << i << ' ';
	cout << endl;

	return 0;
}