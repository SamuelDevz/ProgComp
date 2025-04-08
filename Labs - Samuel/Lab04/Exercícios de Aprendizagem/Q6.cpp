#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

int Inicializar();
void exibir();
void ligar();
void verificar();
void ativar();

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int num = Inicializar();

	if(num >  16384)
		cout << "Sistema em funcionamento\n";
	else
		cout << "Falha em funcionamento\n";

	return 0;
}

int Inicializar()
{
	exibir();
	ligar();
	verificar();
	ativar();

	cout << "Inicialização concluída.\n";

	int num = rand();
	return num;
}

void exibir()
{
	cout << "Inicializando Sistema:\n";
}

void ligar()
{
	cout << "- Ligando dispositos\n";
}

void verificar()
{
	cout << "- Verificando integridade\n";
}

void ativar()
{
	cout << "- Ativando processos\n";
}