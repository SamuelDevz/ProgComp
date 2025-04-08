#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "Quais suas datas comemorativas preferidas?\n";
	char data1[30], data2[30], data3[30];
	cin.getline(data1,30);
	cin.getline(data2,30);
	cin.getline(data3,30);

	bool str1cmp, str2cmp, str3cmp;
	str1cmp = str2cmp = str3cmp = false;

	// comparando strings antes de modifica-las
	if(strcmp(data1, "Natal") == 0) 
		str1cmp = true;
	if(strcmp(data2, "Natal") == 0)
		str2cmp = true;
	if(strcmp(data3, "Natal") == 0)
		str3cmp = true;

	strcat(data1, ", ");
	strcat(data2, " e ");

	// Concatenando as strings em um vetor de caracteres
	char frase[100];
	strcpy(frase, data1);
	strcat(frase, data2);
	strcat(frase, data3);
	strcat(frase, " são belas festas.\n");

	cout << frase;

	if(str1cmp)
		cout << "Natal também é uma das minha data preferidas!";
	if(str2cmp)
		cout << "Natal também é uma das minha data preferidas!";
	if(str3cmp)
		cout << "Natal também é uma das minha data preferidas!";

	return 0;
}