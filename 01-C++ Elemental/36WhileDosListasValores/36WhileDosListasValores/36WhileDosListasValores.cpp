/*Realizar un programa que permita cargar dos listas de 15 valores cada una.
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/

#include<iostream>

using namespace std;

int main()
{
    int valor, x, suma1, suma2;

    x = 1;
    suma1 = 0;
    suma2 = 0;
    cout << "Primer lista";
    cout << "\n";

    while (x <= 15)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        suma1 = suma1 + valor;
        x = x + 1;
    }

    cout << "Segunda lista";
    cout << "\n";

    x = 1;
    while (x <= 15)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        suma2 = suma2 + valor;
        x = x + 1;
    }

    if (suma1 > suma2)
    {
        cout << "Lista 1 es mayor.";
    }
    else
    {
        if (suma2 > suma1)
        {
            cout << "Lista2 es mayor.";
        }
        else
        {
            cout << "Listas iguales.";
        }
    }

    return 0;
}