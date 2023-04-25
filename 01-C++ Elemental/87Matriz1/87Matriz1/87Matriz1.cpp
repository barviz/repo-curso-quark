/*Crear una matriz de 3 filas por 5 columnas con elementos de tipo int,
cargar sus componentes y luego imprimirlas.*/

#include<iostream>

using namespace std;

class Matriz1 {

private:
    int mat[3][5];

public:
    void cargar();
    void imprimir();
};

void Matriz1::cargar()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << "Ingrese un elemento: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz1::imprimir()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << "\n";;
    }

    cin.get();
    cin.get();
}

int main()
{
    Matriz1 m;

    m.cargar();
    m.imprimir();

    return 0;
}