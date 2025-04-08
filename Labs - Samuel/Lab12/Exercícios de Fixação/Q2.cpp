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
	Chocolate preferidos[3]
	{
		{ "Netle", 80, 136 },
		{ "Lacta Diamante Negro", 165, 123 },
		{ "Arcor ao leite", 80, 142 }
	};

	cout << preferidos[0].marca << ' ' << preferidos[0].peso << "g e " << preferidos[0].calorias << "kcal\n";
	cout << preferidos[1].marca << ' ' << preferidos[1].peso << "g e " << preferidos[1].calorias << "kcal\n"; 
	cout << preferidos[2].marca << ' ' << preferidos[2].peso << "g e " << preferidos[2].calorias << "kcal\n";

	return 0;
}