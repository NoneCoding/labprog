#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarar variáveis
    int idade;
    string nome;
    
    // Ler nome e idade
    cout << "Nome: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    // Verificar se o indivíduo é maior de idade e imprimir nome e idade, juntamente com seu status legal
    if (idade >= 18)
    {
        cout << nome
             << " tem "
             << idade
             << " anos e é maior de idade.\n";
    }
    else
    {
        cout << nome
             << " tem "
             << idade
             << " anos e não é maior de idade.\n";
    }

    fflush(stdin);

    return 0;
}
