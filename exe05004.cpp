#include <iostream>
#include <cmath>
using namespace std;
void calculamentos(double a, double b, double c, double &area, double &perimetro)
{
    perimetro = a + b + c;
    double semip = perimetro / 2;
    area = sqrt(semip * (semip - a) * (semip - b) * (semip - c));
}
int main()
{
    double lado01, lado02, lado03, area, perimetro;
    cout << "Digite o tamanho do primeiro lado: ";
    cin >> lado01;
    cout << "Digite o tamanho do segundo lado: ";
    cin >> lado02;
    cout << "Digite o tamanho do terceiro lado: ";
    cin >> lado03;
    calculamentos(lado01, lado02, lado03, area, perimetro);
    cout << "A area do triangulo eh: " << area << ". E seu perimetro eh: " << perimetro << endl;
    
    return 0;
}