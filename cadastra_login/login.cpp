#include<stdio.h> // Inclusão da biblioteca padrão para entrada/saída
#include<stdlib.h> // Inclusão da biblioteca padrão para funções gerais
#include<string.h> // Inclusão da biblioteca para manipulação de strings

int main(){
    char usuario[10]; // Declaração do array de caracteres para o nome de usuário
    char senha[10]; // Declaração do array de caracteres para a senha

    // Obtém os dados do usuário
    printf("Digite o usuário: ");
    scanf("%s", usuario); // Usar "%s" para ler uma string não requer o uso de "&"

    printf("Digite a senha: ");
    scanf("%s", senha); // Usar "%s" para ler uma string não requer o uso de "&"

    // Confirmação dos dados
    if (strcmp(usuario, "jonathan") == 0 && strcmp(senha, "valor") == 0){
        printf("Usuário e senha corretos!\n");
    } else {
        printf("Usuário ou senha inválidos\n");
    }

    system("pause"); // Pausa a execução para visualização do resultado
    return 0;
}
