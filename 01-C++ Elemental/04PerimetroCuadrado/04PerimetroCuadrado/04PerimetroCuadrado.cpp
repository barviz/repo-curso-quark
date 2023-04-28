/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo
(El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)*/

#include<iostream>

using namespace std;

int main()
{
    int lado, perimetro;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    perimetro = lado * 4;

    cout << "El perimetro del cuadrado es: ";
    cout << perimetro;

    return 0;
}