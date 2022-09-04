#include <iostream>
using namespace std;
const double fracao = 0.001;
double qntdAdocante(double adc_mickey, double pes_mickey, double pes_humano)
{
    return (adc_mickey * pes_humano) / pes_mickey;
}
double qntRefrigerante(double adocante)
{
    return adocante / fracao;
}
int main()
{
    double adrt, adhm, psrt, pshm;
    cout << "Digite o peso do ratazana: ";
    cin >> psrt;
    cout << "Digite a quantidade de adocante letal para um rato: ";
    cin >> adrt;
    cout << "Digite o peso do individuo: ";
    cin >> pshm;
    cout << "Quantidade de refrigerante letal - em litros - para o individuo: " << qntRefrigerante(qntdAdocante(adrt, psrt, pshm)) << endl;
    return 0;
}