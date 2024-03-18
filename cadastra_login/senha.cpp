#include <iostream> // Inclusão da biblioteca padrão de entrada/saída
#include <string> // Inclusão da biblioteca para manipulação de strings
#include <conio.h> // Inclusão da biblioteca para getch() no Windows

using namespace std;

int main() {
    const int MAX_LENGTH = 10; // Tamanho máximo da senha
    char password[MAX_LENGTH + 1]; // +1 para o caractere nulo
    int passw;

    cout << "Digite sua senha (max " << MAX_LENGTH << " caracteres): ";

    int i = 0;
    char ch;
    while ((ch = _getch()) != '\r' && i < MAX_LENGTH) {
        if (ch == '\b' && i > 0) { // Verifica se é um caractere de retrocesso
            cout << "\b \b"; // Apaga o caractere digitado
            i--;
        } else if (isprint(ch)) { // Verifica se é um caractere imprimível
            cout << '*'; // Mostra * na tela
            password[i] = ch; // Armazena o caractere na senha
            i++;
        }
    }
    password[i] = '\0'; // Adiciona o caractere nulo para indicar o final da senha

    cout << "\nMostrar senha? (1 - Sim, 0 - Não): ";
    cin >> passw;

    if (passw == 1) {
        cout << "A senha digitada foi: " << password << endl;
    } else {
        cout << "Acesso negado!\n";
    }

    // Pausa a execução para visualizar o resultado
    cout << "Pressione qualquer tecla para sair...";
    _getch(); // Espera por uma tecla pressionada

    return 0;
}
