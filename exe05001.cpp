#include <iostream>
using namespace std;

double calculamentos(double vetor01[], double vetor02[], double soma[])
{
    soma[0] = 0;
    soma[1] = 0;
    for (int i = 0; i < 3; i++)
    {
        if (vetor01[i] <= 3)
        {
            vetor02[i] = 2.00;
        }
        else if (vetor01[i] >= 24)
        {
            vetor02[i] = 10.00;
        }
        else
        {
            vetor02[i] = ((vetor01[i] - 3) * 0.50) + 2.00;
        }
        soma[0] += vetor01[i];
        soma[1] += vetor02[i];
    }
}

int main()
{
    char temp;
    double numbersin[3], numbersout[3], total[2];
    system("cls");
    while (1)
    {
        cout << "Forneca o tempo de permanencia do primeiro cliente: ";
        cin >> numbersin[0];
        cout << "Forneca o tempo de permanencia do segundo cliente: ";
        cin >> numbersin[1];
        cout << "Forneca o tempo de permanencia do terceiro cliente: ";
        cin >> numbersin[2];
        double soma[2];
        calculamentos(numbersin, numbersout, total);
        for (int i = 0; i < 3; i++)
        {

            cout << "Carro " << i + 1 << ": " << numbersin[i] << "hrs de permanencia, Taxa de R$ " << numbersout[i] << endl;
        }
        cout << "Total: Horas [" << total[0] << "] / Taxas[R$ " << total[1] << "]" << endl;
        cout << "Outra vez? (s/n) ";
        cin >> temp;
        while (temp != 'N' && temp != 'n' && temp != 's' && temp != 'S')
        {
            system("cls");
            cout << "Opcao invalida, digite novamente: (s/n) ";
            cin >> temp;
        }
        if (temp == 'n' || temp == 'N')
        {
            break;
        }
    }
    cout << "Programa finalizado..." << endl;
    return 0;
}