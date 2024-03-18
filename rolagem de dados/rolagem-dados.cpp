#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {

    // Arrays de strings para mensagens e resultados
    string MSG[5];
    MSG[0] = "\n BEM VINDO AO ROLL'LL\n\n";
    MSG[1] = "##########################\n";
    MSG[2] = " (1) = Jogar (0) = Sair\n >> ";
    MSG[3] = " Modificador..\n >> ";
    MSG[4] = " (1) - Ficar  (0) - Sair..\n >> ";

    string MSG_1[3];
    MSG_1[0] = "\n#======================== VEZES JOGADAS : ";
    MSG_1[1] = "\n========================#\n";
    MSG_1[2] = "#\n#\n#\n#\n#\n";

    string RESULT[5];
    RESULT[0] = "\n\n D10: ";
    RESULT[1] = " + ";
    RESULT[2] = " Resultado : ";
    RESULT[3] = " Hora : ";
    RESULT[4] = " Data : ";

    // Variáveis de controle e armazenamento de dados do jogo
    int fato1 = 0;
    int div = 2;
    bool quit = true;
    int jogadas = 0;

    // Loop principal do jogo
    while (quit == true) {
        srand(time(0));
        int result = (rand() % 10 + 1);
        int crl = result;
        int modifi = 0;
        int game;

        // Mensagem inicial e escolha do jogador
        if (jogadas == 0) {
            cout << MSG[0];
            cout << MSG[2];
            cin >> game;
            cout << endl;
            if (game != 1) {
                break; // Sai do loop se o jogador escolher sair
            }
        }

        // Verificações do modificador e exibição dos resultados
        if (quit == true) {
            cout << MSG[3];
            cin >> modifi;

            if (quit == true && modifi >= -5 && modifi <= 5 && modifi != 0) {
                system("cls");
                jogadas += 1;
                cout << MSG_1[0] << jogadas;
                cout << RESULT[0] << crl << RESULT[1] << modifi << RESULT[2] << crl + modifi << endl;
                cout << RESULT[3]; system("time /t");
                cout << RESULT[4]; system("date /t");
                cout << MSG_1[1];
                cout << endl << endl;
                cout << MSG[4];
                cin >> quit;
                cout << endl;
            }
            else if (modifi == 0) { // Modificador 0
                system("cls");
                jogadas += 1;
                cout << MSG_1[0] << jogadas;
                cout << RESULT[0] << crl << RESULT[1] << modifi << RESULT[2] << crl << endl;
                cout << RESULT[3]; system("time /t");
                cout << RESULT[4]; system("date /t");
                cout << MSG_1[1];
                cout << endl << endl;
                cout << MSG[4];
                cin >> quit;
                cout << endl;
            }
            else { // Modificadores negativos inválidos
                cout << "Modificador inválido! Tente novamente.\n";
            }
        }
        else {
            return 0; // Encerra o programa se o jogador escolher sair
        }
    }

    return 0; // Retorna 0 para indicar sucesso
}
