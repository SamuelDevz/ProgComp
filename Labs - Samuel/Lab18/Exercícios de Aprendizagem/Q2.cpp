#include <iostream>
using namespace std;

int main()
{
	int soma = 0;
	for(int i = 1;i < 100;++i)
		soma += i;

	/***

	==============
	Com o while
	==============

	int soma = 1;
	while(soma < 100)
	{
		soma += 2;
	}	

	==============
	Com o do while
	==============

	int soma = 1;
	do
	{
		soma += 2;
	} while(soma < 100);
	
	***/

	return 0;
}