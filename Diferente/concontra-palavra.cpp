#include <iostream>
#include <string>
#include <algorithm> // Para a função transform

int main() {

    // Frase como std::string para segurança e flexibilidade
    std::string frase = "Esta é uma frase de exemplo"; 
    std::string palavra;

    std::cout << "Digite a palavra que deseja procurar na frase: ";
    std::cin >> palavra;

    // Converte a frase e a palavra para letras minúsculas para comparação sem distinção de caso
    std::transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
    std::transform(palavra.begin(), palavra.end(), palavra.begin(), ::tolower);

    size_t pos = frase.find(palavra); // Procura a palavra na frase

    if (pos != std::string::npos) {
        std::cout << "Encontrei a palavra: \"" << palavra << "\" na frase!\n"; 
    } else {
        std::cout << "Não encontrei a palavra: \"" << palavra << "\" na frase.\n"; 
    }

    return 0;
}
