/*Crear y cargar una matriz de 3 filas por 4 columnas.
Imprimir la primer fila. Imprimir la última fila e imprimir la primer columna.*/

#include<iostream>

using namespace std;

class Matriz3 {

private:
    int mat[3][4];

public:
    void cargar();
    void primerFila();
    void ultimaFila();
    void primerColumna();
};

void Matriz3::cargar()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << "Ingrese un elemento: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz3::primerFila()
{
    cout << "Primer fila de la matriz: " << "\n";

    for (int c = 0; c < 4; c++)
    {
        cout << mat[0][c] << "\n";
    }
}

void Matriz3::ultimaFila()
{
    cout << "Ultima fila de la matriz: " << "\n";

    for (int c = 0; c < 4; c++)
    {
        cout << mat[2][c] << "\n";
    }
}

void Matriz3::primerColumna()
{
    cout << "Primer columna de la matriz: " << "\n";

    for (int f = 0; f < 3; f++)
    {
        cout << mat[f][0] << "\n";
    }
}

int main()
{
    Matriz3 m;

    m.cargar();
    m.primerFila();
    m.ultimaFila();
    m.primerColumna();

    return 0;
}