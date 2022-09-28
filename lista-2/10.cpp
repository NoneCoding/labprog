#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, m;

    // Ler valor n
    do
    {
        cout << "N = ";
        cin >> n;
        if (n < 1000 || n >= 10000)
        {
            cout << "Este número não possui 4 digitos!\n";
        }
    }
    while (n < 1000 || n >= 10000);

    int resto_mil = n % 1000;
    int resto_cem = resto_mil % 100;
    int resto_dez = resto_cem % 10;
    
    m = resto_dez * 1000 + (resto_cem / 10) * 100 + (resto_mil / 100) * 10 + (n / 1000);

    if (n == m)
        cout << "É palíndromo!\n";
    else
        cout << "Não é palíndromo!"
             << endl;
    
    return 0;
}
