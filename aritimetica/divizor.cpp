#include <iostream> // Inclusão da biblioteca padrão de entrada/saída
#include <stdlib.h> // Inclusão da biblioteca padrão de funções gerais

using namespace std; // Uso do namespace padrão de C++

int main()
{
    int num1 = 0; // Declaração e inicialização da variável num1 com 0
    int num2 = 0; // Declaração e inicialização da variável num2 com 0
    
    // Solicitar ao usuário que digite um número e armazená-lo em num1
    cout << "Escolha um número\n";
    cin >> num1;
    
    // Solicitar ao usuário que digite outro número e armazená-lo em num2
    cout << "Dividido por\n";
    cin >> num2;
    
    int in1 = num1; // Criar uma cópia de num1 em in1
    int in2 = num2; // Criar uma cópia de num2 em in2
    
    // Calcular a divisão inteira de num1 por num2 e imprimir o resultado
    cout << "Resultado " << num1 / num2 << endl;
    
    // Calcular o resto da divisão de in1 por in2 e imprimir o resultado
    cout << "RESTO! " << in1 % in2 << endl;

    // Aguardar o usuário pressionar uma tecla antes de fechar a janela do console (apenas no Windows)
    system("pause");
    
    return 0; // Indicar que o programa foi executado corretamente
}
