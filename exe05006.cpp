#include <iostream>
#include <cstdio>
using namespace std;
void entramentos(int &hora, int &minutos)
{
    char temp;
    while (1)
    {
        system("cls");
        cout << "Informe a hora: ";
        cin >> hora;
        cout << "Informe os minutos: ";
        cin >> minutos;
        printf("Horario informado: %02d : %02d.\nConfere?(s/n) ", hora, minutos);
        cin >> temp;
        if (temp == 's' || temp == 'S')
        {
            return;
        }
    }
    return;
}
void convertimentos(int &newhora, int &minutos, char &op)
{
    if (newhora > 12)
    {
        op = 'P';
        newhora -= 12;
        return;
    }
    op = 'A';
    return;
}
void exibimentos(int hora, int minutos, char op)
{
    printf("Horario convertido:\n%02d : %02d - ", hora, minutos);
    if (op == 'A')
    {
        cout << "AM" << endl;
    }
    else
    {
        cout << "PM" << endl;
    }
}

int main()
{
    int horas, minutos;
    char turno;
    while (1)
    {
        entramentos(horas, minutos);
        convertimentos(horas, minutos, turno);
        exibimentos(horas, minutos, turno);
        cout << "Deseja fazer mais uma conversao?(s/n) ";
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