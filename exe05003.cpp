#include <iostream>
#include <cstdio>
using namespace std;

int sizetime(int vetor[])
{
    return (vetor[0] * 3600) + (vetor[1] * 60) + vetor[2];
}
void entrada(int vetor[], int t)
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        printf("Entrada do tempo %d\n", t);
        printf("Time: %02d : %02d : %02d.\n", vetor[0], vetor[1], vetor[2]);
        if (i == 0)
        {
            cout << "Digite a hora: ";
            cin >> vetor[0];
        }
        else if (i == 1)
        {
            cout << "Dgite os minutos: ";
            cin >> vetor[1];
        }
        else if (i == 2)
        {
            cout << "Digite os segundos: ";
            cin >> vetor[2];
        }
    }
    return;
}
void intervalo(int vetor01[], int vetor02[])
{
    system("cls");
    int tam1 = sizetime(vetor01);
    int tam2 = sizetime(vetor02);
    int out;
    if (tam1 >= tam2)
    {
        out = tam1 - tam2;
        printf("Primeiro tempo: %02d : %02d : %02d.\nSegundo tempo: %02d : %02d : %02d.\n", vetor02[0], vetor02[1], vetor02[2], vetor01[0], vetor01[1], vetor01[2]);
    }
    else
    {
        out = tam2 - tam1;
        printf("Primeiro tempo: %02d : %02d : %02d.\nSegundo tempo: %02d : %02d : %02d.\n", vetor01[0], vetor01[1], vetor01[2], vetor02[0], vetor02[1], vetor02[2]);
    }
    printf("Intervalo em segundos entre as duas horas: %i\n", out);
    int inter[3] = {0};
    inter[0] = out / 3600;
    inter[1] = (out % 3600) / 60;
    inter[2] = out % 60;
    printf("Intervalo em horas: %02d : %02d : %02d.", inter[0], inter[1], inter[2]);
}
int main()
{
    int tempo1[3] = {0};
    int tempo2[3] = {0};
    entrada(tempo1, 1);
    entrada(tempo2, 2);
    intervalo(tempo1, tempo2);
    return 0;
}