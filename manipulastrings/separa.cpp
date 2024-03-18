#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

// Função para remover pontuações e caracteres especiais da string
string removerPontuacao(const string& str) {
    string result;
    for (char c : str) {
        if (isalnum(c) || c == ' ') { // Verifica se o caractere é alfanumérico ou um espaço
            result += c; // Adiciona o caractere à string resultante
        }
    }
    return result; // Retorna a string resultante sem pontuações ou caracteres especiais
}

// Função para separar palavras da string e exibi-las uma por linha
void separarPalavras(const string& frase) {
    stringstream ss(frase); // Cria um objeto stringstream com a frase
    string palavra;

    // Extrai e exibe cada palavra separadamente
    while (ss >> palavra) {
        cout << palavra << "\n"; // Exibe a palavra seguida de uma quebra de linha
    }
}

int main() {
    string frase = "Olá! Esta é uma frase, com pontuações e caracteres especiais!";

    // Remover pontuações e caracteres especiais da frase
    string fraseLimpa = removerPontuacao(frase);

    // Separar e exibir as palavras da frase
    separarPalavras(fraseLimpa);

    return 0;
}
