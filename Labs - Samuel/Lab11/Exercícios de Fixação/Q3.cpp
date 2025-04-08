#include <iostream>
using namespace std;

int main()
{
	char dog[5] = { 'l','a','t','i','r' };   // não é uma string 
	char cat[5] = { 'm','i','a','r','\0' };  // string

	cout << dog << endl; // latir╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠miar
	cout << cat << endl; // miar
}