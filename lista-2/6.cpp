#include <iostream>
#include <string>

using namespace std;

int main()
{
    Start:
    setlocale(LC_ALL, "portuguese");

    // Declarar variáveis
    float sal;
    char repetir;
    string nome;

    // Ler nome e salário atual
    cout << "Nome: ";
    cin.ignore(1, '\n'); // Dizendo para o cin ignorar o \n que está no buffer na segunda passagem em diante
    getline(cin, nome);

    cout << "Salário atual: $";
    cin >> sal;

    // Determinar aumento e imprimir novo salário e aumento
    if (sal <= 900.0)
    {
        cout << "O jogador "
             << nome
             << " terá aumento de R$"
             << sal * 0.2
             << " e passará a receber R$"
             << sal * 1.2
             << "\n";
    }
    else if (sal <= 1300.0)
    {
        cout << "O jogador "
             << nome
             << " terá aumento de R$"
             << sal * 0.15
             << " e passará a receber R$"
             << sal * 1.15
             << "\n";
    }
    else if (sal <= 1800.0)
    {
        cout << "O jogador "
             << nome
             << " terá aumento de R$"
             << sal * 0.1
             << " e passará a receber R$"
             << sal * 1.1
             << "\n";
    }
    else
    {
        cout << "O jogador "
             << nome
             << " terá aumento de R$"
             << sal * 0.05
             << " e passará a receber R$"
             << sal * 1.05
             << "\n";
    }

    // Perguntar se o usuário uer repetir o programa
    cout << "Novo jogador? [Y/N]\n";
    cin >> repetir;

    if (repetir == 'Y' || repetir == 'y')
        goto Start;
    else
        fflush(stdin);
        return 0;
}

