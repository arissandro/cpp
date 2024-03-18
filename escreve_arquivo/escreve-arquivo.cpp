#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Escrever no arquivo
    ofstream outfile("example.txt"); // Cria um objeto para escrever no arquivo
    if (outfile.is_open()) { // Verifica se o arquivo foi aberto com sucesso
        outfile << "This is a line.\n"; // Escreve uma linha no arquivo
        outfile << "salvei.\n"; // Escreve outra linha no arquivo
        outfile.close(); // Fecha o arquivo após a escrita
    } else {
        cout << "Unable to open file for writing"; // Exibe mensagem de erro se não conseguir abrir o arquivo
        return 1; // Retorna código de erro
    }

    // Ler do arquivo
    string line;
    ifstream infile("example.txt"); // Cria um objeto para ler o arquivo
    if (infile.is_open()) { // Verifica se o arquivo foi aberto com sucesso
        while (getline(infile, line)) { // Lê cada linha do arquivo
            cout << line << endl; // Exibe a linha lida
        }
        infile.close(); // Fecha o arquivo após a leitura
    } else {
        cout << "Unable to open file for reading"; // Exibe mensagem de erro se não conseguir abrir o arquivo
        return 1; // Retorna código de erro
    }

    return 0; // Retorna sucesso
}
