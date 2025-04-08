#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("sol.txt");
	if (!fin.is_open())
	{
		cerr << "Abertura do arquivo sol.txt falhou!\n";
		cerr << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	ofstream fout;
	fout.open("num.txt");
	if (!fout.is_open())
	{
		cerr << "Abertura do arquivo num.txt falhou!\n";
		cerr << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char nome[80];
	int num;
	fin >> num;
	
	while(!fin.eof())
	{
		if(fin.good())
		{
			fout << num << endl;
		}
		else
		{
			fin.clear();
			fin >> nome;
		}
		
		fin >> num;
	}

	fin.close();
	fout.close();
	
	cout << "Pronto!" << endl;
	
	return 0;
}