#include <iostream>
#include <clocale>
using namespace std;

struct Livro
{
    char titulo[40];
    char autor[40];
    int ano_publicacao;
};

struct Jogo
{
    char titulo[40];
    char desenvolvedor[40];
    char * plataforma;
};

void emprestar_jogo(Jogo vet[], int);
void emprestar_livro(Livro vet[], int);

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	Livro livros_emprestados[3];
	Jogo jogos_emprestados[3];

	char opcao = 'S';

    while(opcao != 'N')
    {
    	cout << "Deseja emprestar um livro ou um jogo:\n";
    	cout << "0) Livro\n";
    	cout << "1) Jogo\n";
    	cout << "Sua opção: ";
    	int tipo_emprestimo;
    	cin >> tipo_emprestimo;

    	int i, j;
    	i = j = 0;

    	if (tipo_emprestimo == 0)
    	{
        	emprestar_jogo(jogos_emprestados,i);
        	i++;
    	}
    	else if (tipo_emprestimo == 1) 
    	{
        	emprestar_livro(livros_emprestados,j);
        	j++;
   		}
    	else 
    	{
        	cout << "Opção inválida!" << endl;
    	}

    	cout << "Deseja emprestar mais um alguma coisa (S/N):\n";
    	cin >> opcao;
    }

    cout << "Obrigado pela sua atenção";

    return 0;
}

void emprestar_jogo(Jogo jogo[],int i)
{
	cout << "Digite o título do jogo: ";
    cin.ignore();
    cin.getline(jogo[i].titulo, 40);

	cout << "Digite o desenvolvedor do jogo: ";
    cin.getline(jogo[i].desenvolvedor, 40);

    cout << "Digite a plataforma do jogo: ";
    cin.getline(jogo[i].titulo, 40);

    cout << "Jogo emprestado com sucesso!" << endl;
}

void emprestar_livro(Livro vet[], int)
{
	cout << "Digite o título do livro: ";
	cin.ignore();
	cin.getline(vet[0].titulo, 40);

	cout << "Digite o autor do livro: ";
	cin.getline(vet[0].autor, 40);

	cout << "Digite o ano de publicação do livro: ";
	cin >> vet[0].ano_publicacao;

	cout << "Livro emprestado com sucesso!" << endl;
}