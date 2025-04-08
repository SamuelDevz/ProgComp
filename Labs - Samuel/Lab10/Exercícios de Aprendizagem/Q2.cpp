#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	float pesos[3] = { 2, 3, 4 };

	cout << "Digite as notas do aluno das três unidades:";
	float notas[3];
	cin >> notas[0] >> notas[1] >> notas[2];

	cout << "Calculando a média dos alunos usando médial parcial:\n";
	float media_parcial_antigo = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) 
	/ (pesos[0] + pesos[1] + pesos[2]);
	cout << "Antigo:" << media_parcial_antigo;
	
	float media_parcial_novo = (notas[0] + notas[1] + notas[2]) / 3;
	cout << "Novo:" << media_parcial_novo << '\n';

   return 0;
}