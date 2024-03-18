#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
    char PALAVRA[40], FRASE[4000]; // Declaração das variáveis para armazenar a palavra e a frase
    int i, j, quantidade = 0, T_FRASE, T_PALAVRA, x = 0, aux_i = 0;

    string umm = "";

    printf("Digite uma frase\n");

    do {
        scanf(" %3999[^\n]", FRASE); // Leitura da frase digitada pelo usuário
        umm = FRASE;
    } while (umm.find("1") == string::npos); // Repete enquanto "1" não for encontrado na entrada

    printf("Digite uma palavra\n");
    scanf(" %39[^\n]", PALAVRA); // Leitura da palavra digitada pelo usuário

    T_PALAVRA = strlen(PALAVRA); // Obtém o tamanho da palavra
    T_FRASE = strlen(FRASE); // Obtém o tamanho da frase

    // Loop para percorrer cada letra da frase
    for (i = 0; i < T_FRASE; i++) {
        // Verifica se a primeira letra da palavra é igual à letra atual da frase
        if (PALAVRA[0] == FRASE[i]) {
            aux_i = i; // Salva a posição atual da frase
            x = 0; // Reinicia a contagem da sequência
            // Loop para verificar a sequência da palavra na frase
            for (j = 0; j < T_PALAVRA; j++) {
                // Verifica se as letras coincidem para formar a palavra
                if (PALAVRA[j] == FRASE[aux_i]) {
                    x++; // Incrementa a contagem da sequência
                }
                aux_i++; // Move para a próxima letra da frase
            }
            // Verifica se a sequência completa da palavra foi encontrada na frase
            if (x >= T_PALAVRA) {
                quantidade++; // Incrementa a contagem de ocorrências
            }
        }
    }

    // Verifica se a palavra foi encontrada na frase e exibe a quantidade de ocorrências
    if (quantidade >= 1) {
        printf("A frase contem a palavra %d vezes\n", quantidade);
    } else {
        printf("A frase NAO contem a palavra\n");
    }
    
    return 0;
}
