#include <iostream>
#include <cstring>
using namespace std;

struct String
{
	char * str; // ponteiro para a string
	int comp;   // comprimento da string (sem contar '\0')
};

// protótipos para ajustar(), mostrar() e mostrar()
void ajustar(String&,const char*);
void mostrar(const char*,int qtd = 1);
void mostrar(const String&,int qtd = 1);

int main()
{
	String msg;
	char teste[] = "Realidade de ponteiros e strings\n";
	ajustar(msg, teste); // primeiro argumento é uma referência
						 // aloca espaço para guardar cópia de teste
						 // ajusta o membro str de msg para apontar
						 // para novo bloco, copia teste para o novo
						 // bloco e ajusta o membro comp

	mostrar(msg); 		 // mostra o membro String uma vez
	mostrar(msg, 2); 	 // mostra o membro String duas vezes
	teste[0] = 'D';
	teste[1] = 'u';
	mostrar(teste); 	 // mostra a string uma vez
	mostrar(teste, 3); 	 // mostra a string três vezes
	mostrar("Pronto!");

	delete[] msg.str;
    
	return 0;
}

void ajustar(String & str1, const char * str2)
{
	int tam = strlen(str2);
	str1.comp = tam;

	str1.str = new char[tam + 1];
	strcpy(str1.str,str2);
	str1.str[tam] = '\0';
}

void mostrar(const String & string, int qtd = 1)
{
	for(int i = 0;i < qtd;++i)
		cout << string.str << endl;
}

void mostrar(const char * str, int qtd = 1)
{
	for(int i = 0;i < qtd;++i)
		cout << str << endl;
}