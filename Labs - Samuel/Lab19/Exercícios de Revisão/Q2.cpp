#include <iostream>
using namespace std;

void exibir_matriz(int vet[][3]);

int main()
{
	cout << "Matriz 3x2:\n";
	int matriz[3][2];

	for(int i = 0;i < 3;++i)
		for(int j = 0;j < 2;++j)
			cin >> matriz[i][j];

	cout << "Transposta 2x3:\n";
	int transposta[2][3];

	for(int k = 0;k < 3;++k)
		for(int l = 0;l < 2;++l)
			transposta[l][k] = matriz[k][l];

	exibir_matriz(transposta);

	return 0;
}

void exibir_matriz(int vet[][3])
{
	for(int i = 0;i < 2;++i)
	{
		for(int j = 0; j < 3;j++)
			cout << vet[i][j] << ' ';
		cout << endl;
	}
}