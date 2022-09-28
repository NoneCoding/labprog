#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    Start:
    setlocale(LC_ALL, "portuguese");

    // Declarar variáveis
    float a, b, c, delta;
    char repetir;

    // Ler a, b, c
    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;

    cout << "C: ";
    cin >> c;

    // Calcular delta
    delta = (b * b) - (4 * a * c);

    // Se delta maior que 0, calular raízes
    if (delta > 0)
    {
        float r1 = (-b + sqrt(delta)) / (2 * a);
        float r2 = (-b - sqrt(delta)) / (2 * a);
        
        cout << "RESULTADOS: \n"
             << "Raíz 1: "
             << r1
             << "\nRaíz 2: "
             << r2
             << "\n";
    }
    // Se menor que 0, imprimir que não existem raízes
    else if (delta < 0)
    {
        cout << "RESULTADOS: \n"
             << "Os valores lidos não resultam em uma raíz real\n";
    }
    // Senão, calcular raíz única
    else
    {
        float r = (-b + sqrt(delta)) / (2 * a);

        cout << "RESULTADOS: \n"
             << "Raíz 1: "
             << r
             << "\n";
    }

    // Perguntar se o usuário quer repetir o programa
    cout << "Nova operação? [Y/N]";
    cin >> repetir;

    if (repetir == 'Y' || repetir == 'y')

        goto Start;
    else
        fflush(stdin);
        return 0;
}
