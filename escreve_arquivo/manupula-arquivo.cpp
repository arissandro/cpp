#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Protótipos das funções
void exibirMenu();
void gravarArquivo();
void lerArquivo();
void excluirArquivo();
void editarArquivo();

int main() {
    int menu;

    do {
        exibirMenu(); // Exibe o menu de opções
        scanf("%d", &menu); // Lê a opção escolhida pelo usuário

        switch(menu) {
            case 1:
                gravarArquivo(); // Chama a função para gravar um arquivo
                break;
            case 2:
                lerArquivo(); // Chama a função para ler o arquivo
                break;
            case 3:
                editarArquivo(); // Chama a função para editar o arquivo
                break;
            case 4:
                excluirArquivo(); // Chama a função para excluir o arquivo
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Escolha novamente.\n");
        }

    } while(menu != 5); // Repete o menu até o usuário escolher sair

    return 0;
}

// Função para exibir o menu de opções
void exibirMenu() {
    printf("\nMenu de opções:\n");
    printf("1 - Gravar Arquivo\n");
    printf("2 - Ler Arquivo\n");
    printf("3 - Editar Arquivo\n");
    printf("4 - Excluir Arquivo\n");
    printf("5 - Sair\n");
    printf("Escolha uma opção: ");
}

// Função para gravar conteúdo em um arquivo
void gravarArquivo() {
    FILE *ponteiro;
    char digitado[100];

    printf("Digite uma frase para gravar no arquivo: ");
    getchar(); // Limpar o buffer do teclado
    fgets(digitado, sizeof(digitado), stdin); // Lê a frase digitada pelo usuário

    ponteiro = fopen("a.txt", "w"); // Abre o arquivo para escrita
    if (ponteiro == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(ponteiro, "%s", digitado); // Escreve a frase no arquivo
    fclose(ponteiro); // Fecha o arquivo

    printf("Frase gravada com sucesso!\n");
}

// Função para ler o conteúdo de um arquivo
void lerArquivo() {
    FILE *ponteiro;
    char digitado[100];

    ponteiro = fopen("a.txt", "r"); // Abre o arquivo para leitura
    if (ponteiro == NULL) {
        printf("Nao existe nenhum arquivo.\n");
        return;
    }

    fgets(digitado, sizeof(digitado), ponteiro); // Lê a linha do arquivo
    fclose(ponteiro); // Fecha o arquivo

    printf("Conteúdo do arquivo:\n%s\n", digitado); // Exibe o conteúdo lido do arquivo
}

// Função para excluir um arquivo
void excluirArquivo() {
    if (remove("a.txt") == 0) { // Remove o arquivo
        printf("Arquivo excluído com sucesso.\n");
    } else {
        printf("Erro ao excluir o arquivo.\n");
    }
}

// Função para adicionar conteúdo a um arquivo existente
void editarArquivo() {
    FILE *ponteiro;
    char digitado[100];

    ponteiro = fopen("a.txt", "a"); // Abre o arquivo para adicionar conteúdo
    if (ponteiro == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o texto para adicionar ao arquivo: ");
    getchar(); // Limpar o buffer do teclado
    fgets(digitado, sizeof(digitado), stdin); // Lê o texto digitado pelo usuário

    fprintf(ponteiro, "%s", digitado); // Adiciona o texto ao arquivo
    fclose(ponteiro); // Fecha o arquivo

    printf("Texto adicionado ao arquivo com sucesso!\n");
}
