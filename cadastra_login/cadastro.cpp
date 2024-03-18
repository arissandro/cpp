#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadastro_usuario[11];  // Tamanho 11 para incluir o caractere nulo '\0'
    char cadastro_senha[11];    // Tamanho 11 para incluir o caractere nulo '\0'
    char usuario[11];           // Tamanho 11 para incluir o caractere nulo '\0'
    char senha[11];             // Tamanho 11 para incluir o caractere nulo '\0'

    // Criação do cadastro
    printf("Digite o nome de usuario para cadastro: ");
    scanf("%10s", cadastro_usuario);  // Limitando a leitura para 10 caracteres
    printf("Digite a senha para cadastro: ");
    scanf("%10s", cadastro_senha);    // Limitando a leitura para 10 caracteres
    printf("Cadastro realizado com sucesso!\n");

    // Autenticação
    printf("\nDigite o usuario: ");
    scanf("%10s", usuario);            // Limitando a leitura para 10 caracteres
    printf("Digite a senha: ");
    scanf("%10s", senha);              // Limitando a leitura para 10 caracteres

    // Confirmação dos dados
    if (strcmp(usuario, cadastro_usuario) == 0 && strcmp(senha, cadastro_senha) == 0) {
        printf("\nUsuario e senha corretos !\n");
    } else {
        printf("\nUsuario ou senha invalidos\n");
    }

    system("pause");
    return 0;
}
