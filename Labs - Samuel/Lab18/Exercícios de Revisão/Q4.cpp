#include <iostream>
#include <cstring>
using namespace std;

bool StrEqual(const char str1[], const char str2[]);

int main()
{
	char palavra[20] = "colega";
	
	if (StrEqual("colega", palavra))
 		cout << "Iguais" << endl;
	else
	 	cout << "Diferentes" << endl;

    return 0;
}

bool StrEqual(const char str1[], const char str2[])
{
	int tam1 = strlen(str1);
	int tam2 = strlen(str2);

	if(tam1 != tam2)
		return false;

	int i{};
	
	while(str1[i] != '\0' && str1[i] == str2[i])
		i++;

	if(i == tam1)
		return true;
	else
		return false;
}