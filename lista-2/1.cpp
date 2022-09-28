#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    Start:

    // Declarar variáveis
    int m, n;
    char repetir;

    // Ler dois números m e n
    cout << "M: ";
    cin >> m;
    cout << "N: ";
    cin >> n;

    // Verificar divisibilidade
    if (m % n == 0)
        cout << "M é divisível por N\n";
    else
        cout << "M não é divisível por N\n";
    
    // Perguntar se o usuário quer tentar novamente
    cout << "Tentar novamente? [Y=sim/N=não]\n";
    cin >> repetir;

    if (repetir == 'Y' || repetir == 'y')
        goto Start;
    else
        fflush(stdin);

        return 0;
}
