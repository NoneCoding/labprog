#include <iostream>
#include <string>

using namespace std;

int main()
{
    Start:
    setlocale(LC_ALL, "portuguese");

    // Declarar variáveis
    float media;
    char repetir;
    string nome;

    // Ler nome e média
    cout << "Nome: ";
    cin.ignore(1, '\n');
    getline(cin, nome);

    cout << "Média: ";
    cin >> media;

    // Verificar recomendação do aluno para bolsa e imprimir nome e recomendação
    if (media >= 9.0)
    {
        cout << "O aluno "
             << nome
             << " é altamente recomendado.\n";
    }
    else if (media >= 8.0)
    {
        cout << "O aluno "
             << nome
             << " é fortemente recomendado.\n";
    }
    else if (media >= 7.0)
    {
        cout << "O aluno "
             << nome
             << " é recomendado.\n";
    }
    else
    {
        cout << "O aluno "
             << nome
             << " é não recomendado.\n";
    }

    cout << "Novo aluno? [Y/N]\n";
    cin >> repetir;

    if (repetir == 'Y' || repetir == 'y')
        goto Start;
    else
        fflush(stdin);
        return 0;
}