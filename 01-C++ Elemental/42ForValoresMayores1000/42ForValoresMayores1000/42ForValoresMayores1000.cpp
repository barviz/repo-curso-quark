/*Escribir un programa que lea n números enteros
y calcule la cantidad de valores mayores o iguales a 1000.*/

#include<iostream>

using namespace std;

int main()
{
    int cantidad, n, f, valor;
    cantidad = 0;

    cout << "Cuantos valores ingresará: ";
    cin >> n;

    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese el valor: ";
        cin >> valor;

        if (valor >= 1000)
        {
            cantidad = cantidad + 1;
        }
    }
    cout << "La cantidad de valores ingresados mayores o iguales a 1000 son:";
    cout << cantidad;

    return 0;
}