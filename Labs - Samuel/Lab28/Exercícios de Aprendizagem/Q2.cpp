#include <iostream>
using namespace std;

struct Tupla
{
	int a;
	int b;
	int c;
};

void trocar(Tupla&, Tupla&);

int main()
{
	cout << "Tupla A: ";
	Tupla a;
	cin >> a.a >> a.b >> a.c;

	cout << "Tupla B: ";
	Tupla b;
	cin >> b.a >> b.b >> b.c;

	cout << "\nInvertendo...\n\n";
	trocar(a ,b);

	cout << "Tupla A: " 
		 << a.a << ' '
		 << a.b << ' '
		 << a.c << endl;

	cout << "Tupla B: " 
		 << b.a << ' '
		 << b.b << ' '
		 << b.c << endl;

	return 0;		 
}

inline void trocar(Tupla & a, Tupla & b)
{
	Tupla temp;
	temp = a;
	a = b;
	b = temp; 
}