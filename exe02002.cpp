#include <iostream>
#include <cmath>
using namespace std;

void calcHipotenusa(double &cat01_hip, double &cat02)
{
    cat01_hip = sqrt(pow(cat01_hip, 2) + pow(cat02, 2));
}
int main()
{
    double cat01, cat02;
    while (1)
    {
        cout << "Digite o tamanho do primeiro cateto: ";
        cin >> cat01;
        if (cat01 == 0)
        {
            break;
        }
        cout << "Digite o tamanho do segundo cateto: ";
        cin >> cat02;
        calcHipotenusa(cat01, cat02);
        cout << "Tamanho da hipotenusa: " << cat01 << endl;
    }
    cout << "Programa finalizado...";
    return 0;
}