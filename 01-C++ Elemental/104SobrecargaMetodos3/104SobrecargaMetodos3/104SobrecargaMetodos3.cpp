/*Implementar una clase que permita cargar un vector de 5 elementos.
Definir tres métodos sobrecargados que :
void imprimir(); //imprime todo el vector
void imprimir(int hasta); //imprime desde el principio del vector hasta el valor que le pasamos
void imprimir(int desde,int hasta); //imprime un rango de valores del vector.*/

#include <iostream>

using namespace std;

class Vector {

    int vec[5];

public:
    void cargar();
    void imprimir();
    void imprimir(int hasta);
    void imprimir(int desde, int hasta);
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
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << " - ";
    }
    cout << "\n\n";
}

void Vector::imprimir(int hasta)
{
    for (int f = 0; f <= hasta; f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n\n";
}

void Vector::imprimir(int desde, int hasta)
{
    for (int f = desde; f <= hasta; f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n\n";
}


int main()
{
    Vector v1;

    v1.cargar();
    v1.imprimir();
    v1.imprimir(2);
    v1.imprimir(2, 4);

    return 0;
}