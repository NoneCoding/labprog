#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    float a, b, c;

    // Ler a, b, c
    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;

    cout << "C: ";
    cin >> c;

    // Determinar qual o maior e o menor e imprimí-los
    if (a > b && a > c)
    {
        if (b < c)
        {
            cout << "Maior: "
                 << a
                 << "\nMenor: "
                 << b
                 << "\n";
        }
        else
        {
            cout << "Maior: "
                 << a
                 << "\nMenor: "
                 << c
                 << "\n";
        }
    }
    else if(b > c)
    {
        if (a < c)
        {
            cout << "Maior: "
                 << b
                 << "\nMenor: "
                 << a
                 << "\n";
        }
        else
        {
            cout << "Maior: "
                 << b
                 << "\nMenor: "
                 << c
                 << "\n";
        }
    }
    else if (a < b)
    {
        cout << "Maior: "
             << c
             << "\nMenor: "
             << a
             << "\n";
    }
    else
    {
        cout << "Maior: "
             << c
             << "\nMenor: "
             << b
             << "\n";
    }

    fflush(stdin);

    return 0;
}