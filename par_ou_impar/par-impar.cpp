#include <iostream>
#include <stdlib.h> // Para utilizar a função system()
using namespace std;

int main()
{
    int fato1 = 0; // Variável para armazenar o número fornecido pelo usuário
    int div = 2; // Divisor usado para determinar se o número é par ou ímpar

    bool funciona = true; // Variável de controle para o loop while
    while (funciona == true) // Loop principal para continuar verificando números
    {
        cout << "Digite um numero para saber se eh Par ou Impar\n"
             << ">> ";
        cin >> fato1; // Recebe o número do usuário

        int dividido = fato1 % div; // Calcula o resto da divisão por 2 (verifica se é par ou ímpar)
        if (dividido < 0 || dividido >= 2) // Verifica se o resultado é válido (0 para par, 1 para ímpar)
        {
            funciona = false; // Encerra o loop se o número digitado não for válido
        }
        else
        {
            if (dividido == 1) // Se o resto for 1, o número é ímpar
            {
                system("cls"); // Limpa a tela do console (no Windows)
                cout << "Impar\n" << endl; // Exibe que o número é ímpar
            }
            else // Caso contrário, o número é par
            {
                if (dividido == 0)
                {
                    system("cls"); // Limpa a tela do console (no Windows)
                    cout << "Par\n" << endl; // Exibe que o número é par
                }
            }
        }
    }

    system("pause"); // Pausa a execução para visualização do resultado (no Windows)
    return 0; // Retorna 0 para indicar sucesso
}
