#include <stdio.h> // Inclusão da biblioteca padrão para entrada/saída
#include <string.h> // Inclusão da biblioteca para manipulação de strings
#include <stdlib.h> // Inclusão da biblioteca padrão para funções gerais

int main() {
    char nome[30]; // Declaração de um array de caracteres para armazenar o nome
    int i = 0, tamanho = 0; // Declaração de variáveis para uso no loop e contagem de caracteres

    printf("Entre com um nome: \n"); // Solicita ao usuário que digite um nome
    fgets(nome, sizeof(nome), stdin); // Lê uma linha de texto e armazena na variável nome

    tamanho = strlen(nome); // Calcula o tamanho da string nome, incluindo o caractere de nova linha '\n'

    for(i = 0; i < strlen(nome); i++){ // Loop para percorrer a string nome
        if(nome[i] == ' '){ // Verifica se o caractere atual é um espaço
            tamanho--; // Reduz o tamanho se encontrar um espaço
        }
    }

    printf("Numero de caracteres (sem espacos): %d\n", tamanho - 1); // Imprime o número de caracteres sem contar espaços e a nova linha '\n'
    system("pause"); // Pausa a execução para visualização do resultado
    return 0; // Indica que o programa foi executado com sucesso
}
