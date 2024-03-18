#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()

using namespace std;

const int LINHAS = 5;
const int COLUNAS = 6;

int main() {
    srand(time(nullptr)); // Inicializa a semente para geração de números aleatórios

    int Planilha[LINHAS][COLUNAS] = {};

    // Preenche a planilha com números aleatórios entre 0 e 99
    for (int x = 0; x < LINHAS; x++) {
        for (int y = 0; y < COLUNAS - 1; y++) {
            Planilha[x][y] = rand() % 100; // Números aleatórios de 0 a 99
        }
    }

    // Calcula a soma de cada linha e o total
    double total = 0;
    for (int x = 0; x < LINHAS; x++) {
        for (int y = 0; y < COLUNAS - 1; y++) {
            Planilha[x][COLUNAS - 1] += Planilha[x][y];
        }
        total += Planilha[x][COLUNAS - 1];
    }

    // Exibe a planilha e o total
    for (int x = 0; x < LINHAS; x++) {
        for (int y = 0; y < COLUNAS; y++) {
            string end = (y < COLUNAS - 2) ? ", " :
                         (y != COLUNAS - 1) ? " = " : "\n";
            cout << Planilha[x][y] << end;
        }
    }

    cout << "O valor da soma é: " << total << endl;

    system("pause");
    return 0;
}
