#include <iostream>
#include <locale.h>
#include <cmath> // Inclusão da biblioteca para cálculos matemáticos

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string space[3];
    space[0] = "          ";
    space[1] = "      ";
    space[2] = "    ";

    string msgs[10];
    msgs[0] = "informe um valor\n>> ";
    msgs[1] = "informe o segundo valor\n>> ";
    msgs[2] = "Resultados:\n"
              "Adição:\n"
              "Subtração:\n"
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
         << "% Modulo: " << fat << endl;
    cout << msgs[3];
    cin >> resposta;

    if (resposta == 1) { // Correção: Usar == para comparação em vez de =
        cout << msgs[4];
        cin >> tabo;
        cout << tabo << " x 1 = " << tabo * 1 << space[0] << tabo << " x 11 = " << tabo * 11 << endl
             << tabo << " x 2 = " << tabo * 2 << space[0] << tabo << " x 12 = " << tabo * 12 << endl
             << tabo << " x 3 = " << tabo * 3 << space[0] << tabo << " x 13 = " << tabo * 13 << endl
             << tabo << " x 4 = " << tabo * 4 << space[0] << tabo << " x 14 = " << tabo * 14 << endl
             << tabo << " x 5 = " << tabo * 5 << space[0] << tabo << " x 15 = " << tabo * 15 << endl
             << tabo << " x 6 = " << tabo * 6 << space[0] << tabo << " x 16 = " << tabo * 16 << endl
             << tabo << " x 7 = " << tabo * 7 << space[0] << tabo << " x 17 = " << tabo * 17 << endl
             << tabo << " x 8 = " << tabo * 8 << space[0] << tabo << " x 18 = " << tabo * 18 << endl
             << tabo << " x 9 = " << tabo * 9 << space[0] << tabo << " x 19 = " << tabo * 19 << endl
             << tabo << " x 10 = " << tabo * 10 << space[0] << tabo << " x 20 = " << tabo * 20 << endl;
    }
    else if (resposta == 2) { // Adição da condição para calcular raiz quadrada
        cout << msgs[5];
        cin >> raiz;
        cout << "Raiz Quadrada de " << raiz << " = " << sqrt(raiz) << endl;
    }
    else {
        cout << "Opção inválida!" << endl;
    }

    system("pause");
    return 0;
}
