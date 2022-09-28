#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    float num, maior=0, menor=700000000;

    // Verificar qual o maior
    for (int i = 0; i < 3; i++)
    {
        cout << "Número: ";
        cin >> num;

        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }

    cout << "Maior: "
         << maior
         << "\nMenor: "
         << menor
         << endl;

    return 0;
}