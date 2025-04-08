#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	int comp;
};

void exibir(peixe *);
void exibir(peixe);

int main()
{
	peixe palhaco { "Palhaço", 150, 12 };
	exibir(palhaco);
	exibir(&palhaco);
}

void exibir(peixe * ptr)
{
	cout << "Com ponteiro: " << ptr->tipo << " com " 
	     << ptr->peso << "g e " << ptr->comp << "cm\n"; 
}

void exibir(peixe p)
{
	cout << "Sem ponteiro: " << p.tipo << " com " 
	     << p.peso << "g e " << p.comp << "cm\n";
}