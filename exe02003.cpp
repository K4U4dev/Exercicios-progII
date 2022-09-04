#include <iostream>
#include <cmath>
using namespace std;

double calcHipotenusa(double cat01_hip, double cat02)
{
    return sqrt(pow(cat01_hip, 2) + pow(cat02, 2));
}
double obterDistancia(double pont01, double pont02)
{
    if (pont01 > pont02)
    {
        return pont01 - pont02;
    }
    return pont02 - pont01;
}

int main()
{
    double pontx1, ponty1, pontx2, ponty2;
    short int op = 0;
    while (op != 1)
    {
        cout << "NOVO CALCULO" << endl;
        cout << "Digite o valor de x do primeiro ponto: ";
        cin >> pontx1;
        cout << "Digite o valor de y do primeiro ponto: ";
        cin >> ponty1;
        cout << "Digite o valor de x do segundo ponto: ";
        cin >> pontx2;
        cout << "Digite o valor de y do segundo ponto: ";
        cin >> ponty2;
        cout << "Distancia entre os pontos: " << calcHipotenusa(obterDistancia(pontx1, pontx2), obterDistancia(ponty1, ponty2)) << endl;
        cout << "Deseja finalizar o programa?(1-sim) ";
        cin >> op;
    }
    cout << "Programa finalizado..." << endl;
    return 0;
}