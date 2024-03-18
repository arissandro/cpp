#include <iostream>
using namespace std;

// Definição da estrutura "pessoas" para armazenar informações de uma pessoa
struct pessoas {
    string nome; // Nome da pessoa
    string sobrenome; // Sobrenome da pessoa
    int idade; // Idade da pessoa
    string cpf; // CPF da pessoa
};

int main() {
    // Declaração de uma variável do tipo "pessoas" chamada "a"
    pessoas a;

    // Atribuição de valores para os campos da estrutura "a"
    a.nome = "Arissandro";
    a.sobrenome = "Francisco";
    a.idade = 21;
    a.cpf = "15487-4586";

    // Exibição dos dados da estrutura "a"
    cout << a.nome << endl; // Exibe o nome
    cout << a.sobrenome << endl; // Exibe o sobrenome
    cout << a.idade << endl; // Exibe a idade
    cout << a.cpf << endl; // Exibe o CPF

    return 0; // Retorna 0 para indicar sucesso
}
