#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
    fstream entrada("input.txt");
    if (entrada.fail())
    {
        cout << "Falha na abertura do arquivo. Criando arquivo vazio..." << endl;
        exit(1);
    }

    char nametext[20];
    cout << "Digite o nome do arquivo de saida: ";
    cin >> nametext;

    ofstream saida;
    saida.open(nametext, ios::out | ios::trunc);

    char swap;
    while (!entrada.eof())
    {
        entrada.get(swap);
        swap = toupper(swap);
        saida << swap;
    }
    saida.close();
    entrada.close();
    if (!saida.is_open() && !entrada.is_open())
    {
        cout << "Fim de processo";
    }

    return 0;
}