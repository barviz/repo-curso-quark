/*Escribir un programa que solicite la carga de un valor positivo
y nos muestre desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.*/

#include<iostream>

using namespace std;

int main()
{
    int n, x;

    cout << "Ingrese el valor final: ";
    cin >> n;

    x = 1;

    while (x <= n)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }

    return 0;
}