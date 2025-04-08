#include <iostream>
#include <clocale>
using namespace std;

void ExibirErro(const int, const char*, void (*perro)(const int));
void programador(const int);
void usuario(const int);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	ExibirErro(1245, "falha na leitura do arquivo", usuario);
	cout << endl;
	ExibirErro(4521, "erro inesperado na inicialização", programador);

	return 0;
}

void usuario(const int codigo)
{
	cout << "A operação não pôde ser concluída!\n\n";

	cout << "Algum problema foi detectado no sistema que impossibilitou a "
		 << "conclusão da tarefa. Contacte o desenvolvedor do sistema em "
		 << "dev@sys.com e envie o relatório de erros abaixo.\n\n";

	cout << "-----------------------------\n";
	cout << "Relatório de Erros do Sistema\n";
	cout << "-----------------------------\n";

	cout << "Código: " << codigo << endl;
	cout << "Descrição: ";
}

void programador(const int codigo)
{
	cout << "Erro " << codigo << ": ";
}

void ExibirErro(const int codigo, const char * str, void(*perro)(const int))
{
	perro(codigo);
	cout << str << endl;
}