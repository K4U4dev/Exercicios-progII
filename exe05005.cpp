#include <iostream>
#include <cstdio>
using namespace std;
void calculaMoedas(int valorDaMoeda, int &numero, int &quantiaRestante)
{
    int numbermax = quantiaRestante;
    numero = numbermax / valorDaMoeda;
    quantiaRestante = numbermax % valorDaMoeda;
}
int main()
{
    int centavos, numero;
    while (1)
    {
        do
        {
            system("cls");
            cout << "Digite um valor entre 0 e 100: ";
            cin >> centavos;
        } while (centavos <= 0 || centavos >= 100);

        calculaMoedas(25, numero, centavos);
        printf("%d de 25 centavo(s), ", numero);
        calculaMoedas(10, numero, centavos);
        printf("%d de 10 centavo(s), ", numero);
        calculaMoedas(1, numero, centavos);
        printf("%d de 1 centavo(s).\n", numero);
        cout << "Deseja fazer mais uma consulta?(s/n) ";
        char temp;
        cin >> temp;
        while (temp != 'n' && temp != 'N' && temp != 's' && temp != 'S')
        {
            system("cls");
            cout << "Digite uma opcao valida: ";
            cin >> temp;
        }
        if (temp == 'n' || temp == 'N')
        {
            break;
        }
    }
    cout << "Programa finalizado...";

    return 0;
}