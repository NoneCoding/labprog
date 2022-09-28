#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    float p, tipo, area;
    string nome;

    // Ler nome, tipo de pulverização, área
    cout << "Fazendeiro: ";
    getline(cin, nome);

    cout << "Tipo (1-4): ";
    cin >> tipo;

    cout << "Área em acres: ";
    cin >> area;

    // Calcular valor total
    if (tipo == 1)
    {
        p = area * 5;
    }
    else if (tipo == 2)
    {
        p = area * 10;
    }
    else if (tipo == 3)
    {
        p = area * 15;
    }
    else
    {
        p = area * 25;
    }

    // Verificar se a área e custo total resultam em desconto e calculá-los
    if (area > 300)
    {
        if (p > 1750)
        {
            p -= p * 0.05 + p * 0.1;
        }
        else
        {
            p -= p * 0.05;
        }
    }
    else
    {
        if (p > 1750)
        {
            p -= p * 0.1;
        }
    }

    cout << "O fazendeiro, "
         << nome
         << " ,pagará pelo serviço de pulverização de R$ "
         << p
         << endl;

    return 0;
}