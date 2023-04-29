/*Plantear una clase para administrar un vector de 5 enteros.
Definir adem�s del m�todo para cargar el vector un m�todo
que imprima los componentes empleando un puntero
que avance por todas las direcciones de las componentes utilizando el operador ++.*/

#include<iostream>

using namespace std;

class Vector {

    int vec[5];

public:
    void cargar();
    void imprimir();
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    int* pe;
    pe = vec;

    for (int f = 0; f < 5; f++)
    {
        cout << *pe;
        pe++;
        cout << " - ";
    }
}

int main()
{
    Vector vector1;

    vector1.cargar();
    vector1.imprimir();

    return 0;
}