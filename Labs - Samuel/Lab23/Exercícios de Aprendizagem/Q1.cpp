#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string trocar_cout_print(string);

int main()
{
	cout << "Digite o nome do arquivo cpp: ";
	string arquivo;
	cin >> arquivo;

	ifstream fin;
	fin.open(arquivo);
	if(!fin.is_open())
	{
		cout << "Abertura do arquivo " << arquivo << " falhou!\n";
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	// adiciona o _m no arquivo
	string arquivo_modificado;
	arquivo_modificado += arquivo.substr(0, arquivo.find(".cpp"));
	arquivo_modificado += "_m.cpp";

	ofstream fout;
	fout.open(arquivo_modificado);
	if(!fout.is_open())
	{
		cout << "Abertura do arquivo " << arquivo_modificado << " falhou!\n";
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	fout << "// " << arquivo_modificado << '\n';
	fout << "#define print cout\n";

	string token;
	while(!fin.eof())
	{
		getline(fin, token);
		if(token.find("cout") != string::npos)
			fout << trocar_cout_print(token) << '\n';
		else
			fout << token << '\n';
	}

	fin.close();
	fout.close();

	return 0;
}

string trocar_cout_print(string str)
{
	string string_modificada;
	string_modificada += str.substr(0, str.find("cout"));
	string_modificada += "print";
	string_modificada += str.substr(str.find("cout") + 4);
	return string_modificada;
}