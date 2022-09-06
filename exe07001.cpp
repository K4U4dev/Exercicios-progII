#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char nametxt[20];
    cout << "Digite o nome do arquivo de saida: ";
    cin >> nametxt;
    ofstream saida(nametxt);

    int temp;
    for (int i = 0; i < 5; i++)
    {
        system("cls");
        cout << i + 1 << " - Digite um numero para ser gravado: ";
        cin >> temp;
        saida << temp << endl;
    }
    saida.close();
    if (!saida.is_open())
    {
        cout << "Arquivo gravado com sucesso!" << endl;
    }

    ifstream leitura(nametxt);
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        leitura >> vetor[i];
    }
    cout << "Vetor gravado!" << endl
         << "Numeros contidos no vetor: ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << vetor[i];
    }
    leitura.close();
    if (!leitura.is_open())
    {
        cout << "\nArquivo fechado e programa encerrado com sucesso.";
    }

    return 0;
}