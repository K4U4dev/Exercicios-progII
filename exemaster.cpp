#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
struct cliente
{
    int id;
    string name;
    int nota;
};

int main()
{
    // PASSO 01 CRIAR CLIENTE VAZIO
    cliente clientevazio{0, "", 0};
    ofstream arquivo("basedados.txt");

    // CRIANDO 100 LACUNAS VAZIAS
    for (int i = 0; i < 100; i++)
    {
        arquivo.write((const char *)(&clientevazio), sizeof(cliente));
    }
    arquivo.close();

    // PREENCHENDO COM VALORES
    cliente dados;
    ofstream entrando("basedados.txt");
    cout << "Insira o id da pessoa: ";
    cin >> dados.id;
    while (dados.id > 0 && dados.id <= 100)
    {
        // PADRAO PARA ENTRADA DE DADOS
        cout << "Digite o nome da pessoa: ";
        cin >> dados.name;
        cout << "Digite a nota: ";
        cin >> dados.nota;

        // POSICIONANDO DE ACORDO COM O ID
        entrando.seekp((dados.id - 1) * (sizeof(cliente)));
        // GRAVANDO A INFORMAÇÃO
        entrando.write((const char *)(&dados), sizeof(cliente));
        cout << "Digite o id da pessoa: ";
        cin >> dados.id;
    }
    entrando.close();

    ifstream lendo("basedados.txt");
    cliente base;
    lendo.read((char *)(&base), sizeof(cliente));
    while (lendo && !lendo.eof())
    {
        if (base.id != 0)
        {
            cout << "Nome:  " << base.name << "Nota -> " << base.nota << endl;
            lendo.read((char *)(&base), sizeof(cliente));
        }
    }
    lendo.close();

    int op;
    cout << "Deseja ver uma pessoa específica? ";
    cin >> op;
    if (op == 1)
    {
        fstream view("basedados.txt");
        cliente unico;
        cout << "Digite o id: ";
        int id;
        cin >> id;
        view.seekp((id - 1) * (sizeof(cliente)));
        view.read((char*)(&unico), sizeof(cliente));
        cout << "nomee:  " << unico.name << "   NOTA:  " << unico.nota << endl;
    }

    return 0;
}