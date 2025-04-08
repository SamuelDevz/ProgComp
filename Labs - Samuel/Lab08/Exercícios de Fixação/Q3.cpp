#include <iostream>
using namespace std;

#define segundos_em_ano 3.156e+07

int main()
{
	cout << "Digite sua idade em anos:";
	int ano;
	cin >> ano;

  	//cout << scientific;
  	//cout.precision(2);
  	cout.setf(ios_base::fixed, ios_base::floatfield);
  	cout.precision(1);
	
  	float segundos = ano * segundos_em_ano;
	cout << ano << " anos correspondem a " << segundos << " segundos";

	return 0;
}