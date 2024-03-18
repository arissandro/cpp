#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <stdlib.h>

int main()
{
    // Obtém o identificador do console para manipulação de cores
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    char nome[20]; // Declaração da variável para armazenar o nome

    gets(nome); // Obtém o nome do usuário

    // Muda a cor do texto para vermelho e intensifica
    SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("%s", nome); // Exibe o nome em vermelho

    // Restaura a cor padrão do texto para verde e intensifica
    SetConsoleTextAttribute(hCon, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n"); // Exibe uma quebra de linha

    system("pause"); // Pausa a execução para visualização do resultado

    return 0; // Retorna 0 para indicar sucesso
}
