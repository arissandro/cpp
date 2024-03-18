#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Definindo variáveis
    int dado, quantidade;
    srand(time(0)); // Inicializando a semente randômica

    // Solicitando entrada do usuário
    cout << "Escolha o dado: ";
    cin >> dado;
    cout << "Quantidade de dados: ";
    cin >> quantidade;

    // Loop para cada jogada
    for (int jogada = 1; jogada <= quantidade; jogada++) {
        int result = 1 + (rand() % dado); // Gerando número aleatório entre 1 e o valor do dado
        cout << "\nDado: D" << dado << "\nJogadas: " << jogada << "\nResultado: " << result << endl;
    }

    system("pause");
    return 0;
}
