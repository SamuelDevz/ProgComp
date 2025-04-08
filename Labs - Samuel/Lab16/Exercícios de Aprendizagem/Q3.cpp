#include <iostream>
using namespace std;

int main()
{
	int A[] { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int * ptr1 = A;
	int * ptr2 = &A[1];

	int tam = sizeof(A) / sizeof(int);

	for(int i = 0; i < tam / 2; ++i)
	{
		cout << '[' << *ptr1 << ',' << *ptr2 << ']' << ' ';
		ptr1 += 2;
		ptr2 += 2;
	}

	return 0;
}