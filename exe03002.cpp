#include <iostream>
using namespace std;
bool analisamento(int max, int qntd)
{
    if (qntd <= max)
    {
        return true;
    }
    return false;
}
int main()
{
    int number_max, number_pes;
    cout << "Informe a capacidade maxima de pessoas que a sala comporta: ";
    cin >> number_max;
    cout << "Informe o numero de pessoas que estao na sala: ";
    cin >> number_pes;
    if(analisamento(number_max, number_pes)){
        cout << "A sala esta dentro das normas legais de seguranca." << endl;
    }
    else{
        cout << "A sala esta fora das normas legais!" << endl;
    }
    return 0;
}