#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string priMensagem = "escrevaa apalvra\n>> ";
    string seguMensagem = "chances restantes: ";
    string terMensagem = "palavra secresta: ";
    string quarMensagem = "Digite uma letra: ";
    string quintMensagem = "voce acerto!";
    string sexMensagem = "voce erro!";

    char palavra[30],
        letra[1],
        secreta[30];
    bool acerto = false;
    int tam = 0,
        i = 0,
        chances = 6,
        acertos = 0;

    cout << priMensagem;
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0')
    {
        i++;
        tam++;
    } // conta palavra

    for (i = 0; i < 30; i++)
    {
        secreta[i] = '*';
    } // cobre Palavra

    while ((chances > 0) && (acertos < tam))
    {
        cout << seguMensagem << chances << "\n\n";
        cout << terMensagem;
        for (i = 0; i < tam; i++)
        {
            cout << secreta[i];
        }
        cout << "\n\n"
             << quarMensagem;
        cin >> letra[0];
        for (i = 0; i < tam; i++)
        {
            if (palavra[i] == letra[0])
            {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if (acertos == tam)
    {
        cout << quintMensagem;
    }
    else
    {
        cout << sexMensagem;
    }

    system("pause");

    return 0;
}
