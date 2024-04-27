#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
    string nome, cnpj, endereco , plano;


    cout << "Digite Nome:\n";
    getline(cin, nome);

    cout << "Digite o CNPJ:\n";
    getline(cin, cnpj);

    cout << "Digite o endereco:\n";
    getline(cin, endereco);
    
    cout << "Digite o plano fornecido:\n";
    getline(cin, plano);
    
    ofstream arquivo("cadastro.txt");


    if (arquivo.is_open()) {
       
       
        arquivo << "Nome: " << nome << endl;
        arquivo << "CNPJ: " << cnpj << endl;
        arquivo << "endereco: " << endereco << endl;
		arquivo << "plano: " << plano << endl;
        
        // Fecha o arquivo
        arquivo.close();

        cout << "As informacoes foram salvar no arquivo cadastro.txt" << endl;
    } else {
       
        cout << "Erro ao abrir o arquivo." << endl;
    }

    return 0;
}
