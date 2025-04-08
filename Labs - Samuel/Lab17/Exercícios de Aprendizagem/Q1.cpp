#include <iostream>
using namespace std;

int main()
{
	cout << "Digite 10 valores: ";
	int A[5], B[5], S[5];

	for(int i = 0; i < 5; ++i)
	{
		cin >> A[i];
		S[i] = A[i];
	}

	for(int i = 0; i < 5; ++i)
	{
		cin >> B[i];
		S[i] += B[i];
	}

	cout << "Vetor A: ";
	for(int i = 0; i < 5; ++i)
		cout << A[i] << ' ';
	cout << endl;

	cout << "Vetor B: ";
	for(int i = 0; i < 5;++i)
		cout << B[i] << ' ';
	cout << endl;

	cout << "Vetor S: ";
	for(int i = 0;i < 5;++i)
		cout << S[i] << ' ';
	cout << endl;

    return 0;
}