/*Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento.
En el constructor cargarlo con valores aleatorios entre 0 y 10.
La clase debe utilizar solo la palabra clave public en la declaración de la clase.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vector {

    int vec[5];

public:
    Vector();
    void mayor();
    void menor();
    void imprimir();
};

Vector::Vector()
{
    srand(time(NULL));

    for (int f = 0; f < 5; f++)
    {
        vec[f] = rand() % 11;
    }
}

void Vector::mayor()
{
    int mayor = vec[0];

    for (int f = 1; f < 5; f++)
    {
        if (vec[f] > mayor)
        {
            mayor = vec[f];
        }
    }
    cout << "Mayor elemento: ";
    cout << mayor;

    cout << "\n";
}

void Vector::menor()
{
    int menor = vec[0];
     
    for (int f = 1; f < 5; f++)
    {
        if (vec[f] < menor)
        {
            menor = vec[f];
        }
    }

    cout << "Menor elemento: ";
    cout << menor;

    cout << "\n";
}

void Vector::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << " - ";
    }
    cout << "\n";
}

int main()
{
    Vector vector1;

    vector1.imprimir();
    vector1.mayor();
    vector1.menor();

    return 0;
}