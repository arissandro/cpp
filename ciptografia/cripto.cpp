#include <iostream>
#include <cstring> // Para usar strlen()

using namespace std;

void criptografar(char texto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        texto[i] = texto[i] + 1; // Substituir cada caractere pelo próximo valor ASCII
    }
}

void descriptografar(char texto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        texto[i] = texto[i] - 1; // Reverter a substituição para descriptografar
    }
}

int main() {
    const int tamanho = 100; // Tamanho máximo da mensagem
    char mensagem[tamanho];

    cout << "Digite uma mensagem para criptografar: ";
    cin.getline(mensagem, tamanho);

    // Criptografar a mensagem
    criptografar(mensagem, strlen(mensagem));

    cout << "Mensagem criptografada: " << mensagem << endl;

    // Descriptografar a mensagem
    descriptografar(mensagem, strlen(mensagem));

    cout << "Mensagem descriptografada: " << mensagem << endl;

    return 0;
}
