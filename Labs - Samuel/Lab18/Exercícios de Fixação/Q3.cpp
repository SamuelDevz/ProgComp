#include <iostream>
using namespace std;

int main()
{
    float investimento_daiane = 100.0;
    float investimento_celia = 100.0;

    float rendimento_daiane = 0.10;
    float rendimento_celia = 0.05;

    float saldo_daiane = investimento_daiane;
    float saldo_celia = investimento_celia;

    int anos{};
    while (saldo_celia <= saldo_daiane)
    {
        saldo_daiane += rendimento_daiane * investimento_daiane;
        saldo_celia += rendimento_celia * saldo_celia;
        anos++;
    }

    cout << "Passaram " << anos << " anos para os saldos atingirem os valores\n"
		 << "Daiane: " << saldo_daiane << endl
		 << "Celia : " << saldo_celia << endl;

	return 0;
}