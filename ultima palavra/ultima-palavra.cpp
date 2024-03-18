#include <iostream>
#include <string>

using namespace std;

// Função para extrair a última palavra de uma linha de texto
string extrairUltimaPalavra(const string& linha) {
    // Encontra a posição do último espaço na linha
    size_t posUltimoEspaco = linha.find_last_of(" ");
    
    if (posUltimoEspaco == string::npos) {
        // Não há espaços na linha, então retornamos a própria linha como última palavra
        return linha;
    } else {
        // Extraindo a última palavra da linha a partir da posição do último espaço
        return linha.substr(posUltimoEspaco + 1);
    }
}

int main() {
    string linha;
    cout << "Digite uma linha de texto: ";
    getline(cin, linha); // Obtém toda a linha de entrada, incluindo espaços

    string ultimaPalavra = extrairUltimaPalavra(linha); // Chama a função para obter a última palavra

    cout << "A última palavra da linha é: " << ultimaPalavra << endl;

    return 0;
}
