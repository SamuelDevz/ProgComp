#include <iostream>
#include <cstring>
using namespace std;

const int tam = 40;

int main()
{
	cout << "Digite a senha:";
	char senha[tam];
	char senha_correta[] = "programação de computadores";
	cin.getline(senha,tam);

	if(strcmp(senha, senha_correta))
    	cout << "Senha incorreta";
  	else
    	cout << "Senha correta";  

	return 0;
}