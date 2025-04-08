#include <iostream>
using namespace std;

int subst(char * str, char c1, char c2);

int main() 
{
	char palavra[] = "joazinho";
	int qtd_substituicoes = subst(palavra, 'j', 't');
	cout << "Na palavra " << palavra << " substitui o j pelo t " << qtd_substituicoes << " vezes\n";

	return 0;
}

int subst(char * str, char c1, char c2) 
{
	int tam =  sizeof(str);
	int qtd{};
	for(int i = 0;i < tam;++i) 
	{
		if(str[i] == c1) 
		{
			str[i] = c2;
			qtd++;
		}
	} 
		
	return qtd;
}