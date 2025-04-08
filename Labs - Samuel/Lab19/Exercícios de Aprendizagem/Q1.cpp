#include <iostream>
using namespace std;

int main()
{
	int mat[4][4]
	{
		{ 3, 1, 5, 5 },
		{ 1, 5, 5, 6 },
		{ 2, 3, 4, 5 },
		{ 4, 9, 1, 8}
	};

	int soma_coluna[4]{};

	for(int i = 0;i < 4;++i)
		for(int j = 0;j < 4;++j)
			soma_coluna[i] = mat[i][j];

	cout << "A soma das colunas e: " << soma_coluna[0] << ' '
		 << soma_coluna[1] << ' '<< soma_coluna[2] << ' ' 
		 << soma_coluna[3] << endl;

	return 0;
}