#include <iostream>
using namespace std;

struct Chocolate
{
	char marca[40];
	float peso;
	int calorias;
};

int main()
{
	Chocolate lanche { "Charge", 2.3, 350 };

	cout << lanche.marca << " " << lanche.peso << "g  e " << lanche.calorias << "kcal\n";

	return 0;
}