/*Confeccionar un programa que permita ingresar un valor del 1 al 10
y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/

#include<iostream>

using namespace std;

int main()
{
    int f, valor;

    cout << "Ingrese un valor entre 1 y 10: ";
    cin >> valor;

    for (f = valor; f <= valor * 12; f = f + valor)
    {
        cout << f;
        cout << "-";
    }
    return 0;
}