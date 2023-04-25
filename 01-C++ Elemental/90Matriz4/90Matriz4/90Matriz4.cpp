/*Crear una matriz de 2 filas y 5 columnas.
Realizar la carga de componentes por columna
(es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)
Imprimir luego la matriz.*/

#include<iostream>

using namespace std;

class Matriz4 {

private:
    int mat[2][5];

public:
    void cargar();
    void imprimir();
};


void Matriz4::cargar()
{
    cout << "Carga de la matriz por columna" << "\n";

    for (int c = 0; c < 5; c++)
    {
        for (int f = 0; f < 2; f++)
        {
            cout << "Ingrese un elemento de la fila " << f << " y un elemento de la columna " << c << ": ";
            cin >> mat[f][c];
        }
    }
}

void Matriz4::imprimir()
{
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << "\n";
    }

    cin.get();
    cin.get();
}

int main()
{
    Matriz4 m;

    m.cargar();
    m.imprimir();

    return 0;
}