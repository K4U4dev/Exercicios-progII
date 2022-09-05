#include <iostream>
using namespace std;
double celcius(double far)
{
    return ((far - 32.0) * 5.0) / 9.0;
}
double fahrenheit(double cel)
{
    return ((cel * 9) / 5.0) + 32.0;
}

int main()
{
    int op;
    cout << "================================================" << endl;
    while (1)
    {
        cout << "  [1] Mostrar escala de celcius 0-100" << endl;
        cout << "  [2] Mostrar escala de fahrenheit 32-212" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "  Digite a opcao desejada(3 para sair): ";
        cin >> op;
        cout << "------------------------------------------------" << endl;
        if (op == 1)
        {
            cout << "Escala de 0 a 100 graus celcius em fahrenheit: " << endl;
            for (int i = 0; i < 101; i++)
            {
                cout << i << " graus celcius - " << fahrenheit(i) << " graus fahrenheit." << endl;
            }
            cout << "------------------------------------------------" << endl;
        }
        else if (op == 2)
        {
            cout << "Escala de 32 a 212 graus fahrenheit em celcius: " << endl;
            
            for (int i = 32; i < 213; i++)
            {
                cout << i << " graus fahrenheit - " << celcius(i) << " graus celcius." << endl;
            }
            cout << "------------------------------------------------" << endl;
        }
        else if(op == 3){
            break;
        }
    }
    cout << " Programa finalizado..." << endl;
    cout << "================================================" << endl;

    return 0;
}