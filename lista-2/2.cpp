#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    // Declarar variáveis
    float n1, n2, media;
    string nome;

    // Ler n1, n2 e nome
    cout << "Nome completo: ";
    getline(cin, nome);

    cout << "N1: ";
    cin >> n1;

    cout << "N2: ";
    cin >> n2;

    // Calcular média
    media = (n1 * 2 + n2 * 3) / 5;

    // Verificar situação do aluno e imprimir nome, nota final e situação do aluno
    if (media >= 7)
    {
        cout << "O aluno "
             << nome
             << " obteve média "
             << media
             << " e está aprovado.\n";
    }
    else if (media < 3)
    {
        cout << "O aluno "
             << nome
             << " obteve média "
             << media
             << " e está reprovado.\n";
    }
    else
    {
        cout << "O aluno "
             << nome
             << " obteve média "
             << media
             << " e está de recuperação.\n";
    }

    fflush(stdin);

    return 0;
}