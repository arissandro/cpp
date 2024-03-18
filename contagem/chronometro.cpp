#include <iostream>

using namespace std;

int main() {
    int tempo;
    cout << "Digite o tempo em segundos: ";
    cin >> tempo; // Solicita ao usuário para digitar o tempo em segundos

    for (int i = tempo; i > 0; i--) {
        cout << "Seu tempo acaba em " << i << " segundos." << endl; // Mostra a contagem regressiva do tempo
        // Espera aproximadamente 1 segundo antes de continuar
        for (int j = 0; j < 100000000; j++) {} // Loop vazio para simular uma espera de aproximadamente 1 segundo
    }

    cout << "Tempo esgotado!" << endl; // Indica que o tempo acabou

    return 0;
}
