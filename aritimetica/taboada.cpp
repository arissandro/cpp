#include <iostream> // Inclusão da biblioteca padrão de entrada/saída
#include <stdlib.h> // Inclusão da biblioteca padrão de funções gerais
#include <locale.h> // Inclusão da biblioteca para configurações de localidade
#include <math.h> // Inclusão da biblioteca para funções matemáticas

using namespace std; // Uso do namespace padrão de C++

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Configura o programa para usar a localidade portuguesa

    string space[3];
    space[0] = "          ";
    space[1] = "      ";
    space[2] = "    ";

    string msgs[10];
    msgs[0] = "Informe um valor\n"
              ">> ";
    msgs[1] = "Informe o segundo valor\n"
              ">> ";
    msgs[2] = "Resultados:\n"
              "Adição:\n"
              "Multiplicação:\n"
              "Divisão:\n"
              "Fatorial: ";
    msgs[3] = "(1) - Taboada (2) - Raiz quadrada\n";
    msgs[4] = "Taboada do >> ";
    msgs[5] = "Raiz Quadrada do >> ";

    int resposta = 0;
    int valor1 = 0;
    int valor2 = 0;
    int som, sub, mul, div, fat;
    int tabo, raiz;

    system("cls");
    cout << msgs[0];
    cin >> valor1;

    system("cls");
    cout << msgs[1];
    cin >> valor2;

    som = valor1 + valor2;
    sub = valor1 - valor2;
    mul = valor1 * valor2;
    div = valor1 / valor2;
    fat = valor1 % valor2;

    system("cls");
    cout << "Resultados:\n" << endl
         << "+ Adição: " << som << endl
         << "- Subtração: " << sub << endl
         << "* Multiplicação: " << mul << endl
         << "/ Divisão: " << div << endl
         << "% Módulo: " << fat << endl;

    cout << msgs[3];
    cin >> resposta;

    if (resposta == 1) { // Corrigido o operador de comparação (==)
        cout << msgs[4];
        cin >> tabo;
        for (int i = 1; i <= 20; i++) {
            cout << tabo << " x " << i << " = " << tabo * i << space[0];
            if (i % 10 == 0) // Adiciona uma quebra de linha a cada 10 iterações
                cout << endl;
        }
    } else if (resposta == 2) {
        cout << msgs[5];
        cin >> raiz;
        cout << "A raiz quadrada de " << raiz << " é " << sqrt(raiz) << endl; // Utiliza a função sqrt para calcular a raiz quadrada
    } else {
        cout << "Opção inválida!" << endl;
    }

    system("pause");
    return 0;
}
