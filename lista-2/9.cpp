#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarar variáveis
    int act;
    float a, b;

    // Ler a e b
    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;
    
    // Disponibilizar opções
    Start:
    cout << "O que deseja fazer?\n"
         << "1 - retornar o quociente inteiro de uma divisão;\n"
         << "2 - retornar a multiplicação de dois números;\n"
         << "3 - retornar o soma de dois números;\n"
         << "4 – retornar a subtração de dois números.\n";
    
    cin >> act;

    // Agir de acordo com a opção escolhida
    if (act >= 5 || act < 1)
    {
        cout << "\nOpção inválida. Tente novamente.\n\n";
        goto Start;
    }
    else if (act == 1)
    {
        cout << "Quociente: "
             << (int)(a / b)
             << endl;
    }
    else if (act == 2)
    {
        cout << "Multiplicação: "
             << a * b
             << endl;
    }
    else if (act == 3)
    {
        cout << "Soma: "
             << a + b
             << endl;
    }
    else
    {
        cout << "Subtração: "
             << a - b
             << endl;
    }

    return 0;
}