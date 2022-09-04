#include <iostream>
using namespace std;

struct retangulo
{
    double altura;
    double largura;
};
struct circulo
{
    double raio;
};
struct triangulo
{
    double base;
    double altura;
};
struct losangulo
{
    double diagonal_m;
    double diagonal_mn;
};
struct quadrado
{
    double lado;
};
struct trapezio
{
    double lado_m;
    double lado_mn;
    double altura;
};

double area(retangulo);
double area(circulo);
double area(triangulo);
double area(losangulo);
double area(quadrado);
double area(trapezio);
void menu();
void menu2(int);

int main()
{
    cout << "=========================================" << endl;
    menu();
    while (1)
    {
        int op;
        cout << "-----------------------------------------" << endl;
        cout << "Deseja fazer uma novo calculo?(SIM - 1) ";
        cin >> op;
        cout << "-----------------------------------------" << endl;
        if (op == 1)
        {
            menu();
        }
        else
        {
            cout << "Programa finalizado..." << endl;
            cout << "=========================================" << endl;
            break;
        }
    }

    return 0;
}

double area(struct retangulo t)
{
    return t.altura * t.largura;
}
double area(struct circulo t)
{
    return 3.14 * (t.raio * t.raio);
}
double area(struct triangulo t)
{
    return (t.base * t.altura) / 2;
}
double area(struct losangulo t)
{
    return t.diagonal_m * t.diagonal_mn;
}
double area(struct quadrado t)
{
    return t.lado * t.lado;
}
double area(struct trapezio t)
{
    return ((t.lado_m + t.lado_mn) * t.altura) / 2;
}

void menu()
{
    int op;
    cout << "     Escolha qual o tipo da figura:" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "[1] - Retangulo" << endl;
    cout << "[2] - Circulo" << endl;
    cout << "[3] - Triangulo" << endl;
    cout << "[4] - Losangulo" << endl;
    cout << "[5] - Quadrado" << endl;
    cout << "[6] - Trapezio" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Informe a opcao desejada: ";
    cin >> op;
    menu2(op);
    return;
}

void menu2(int numb)
{
    if (numb == 1)
    {
        struct retangulo temp;
        cout << "Informe a largura do retangulo: ";
        cin >> temp.largura;
        cout << "Digite a altura do retangulo: ";
        cin >> temp.altura;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    else if (numb == 2)
    {
        struct circulo temp;
        cout << "Informe o raio do circulo: ";
        cin >> temp.raio;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    else if (numb == 3)
    {
        struct triangulo temp;
        cout << "Informe a largura do triangulo: ";
        cin >> temp.base;
        cout << "Digite a altura do triangulo: ";
        cin >> temp.altura;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    else if (numb == 4)
    {
        struct losangulo temp;
        cout << "Informe a diagonal maior do losangulo: ";
        cin >> temp.diagonal_m;
        cout << "Informe a diagonal menor do losangulo: ";
        cin >> temp.diagonal_mn;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    else if (numb == 5)
    {
        struct quadrado temp;
        cout << "Informe o lado do quadrado: ";
        cin >> temp.lado;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    else if (numb == 6)
    {
        struct trapezio temp;
        cout << "Informe a base menor do trapezio: ";
        cin >> temp.lado_m;
        cout << "Informe a base maior do trapezio: ";
        cin >> temp.lado_mn;
        cout << "Digite a altura do trapezio: ";
        cin >> temp.altura;
        cout << "A area da figura informada e: " << area(temp) << endl;
    }
    return;
}
