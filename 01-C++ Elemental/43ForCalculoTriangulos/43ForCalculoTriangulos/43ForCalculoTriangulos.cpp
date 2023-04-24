/*Confeccionar un programa que lea n pares de datos,
cada par de datos corresponde a la medida de la base y la altura de un tri�ngulo.
El programa deber� informar:
a) De cada tri�ngulo la medida de su base, su altura y su superficie.
b) La cantidad de tri�ngulos cuya superficie es mayor a 12.*/

#include<iostream>

using namespace std;

int main()
{
    int basetriang, altura, superficie, cantidad, f, n;
    cantidad = 0;

    cout << "Cuantos tri�ngulos procesar�: ";
    cin >> n;

    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese el valor de la base: ";
        cin >> basetriang;
        cout << "Ingrese el valor de la altura: ";
        cin >> altura;
        superficie = basetriang * altura / 2;
        cout << "La superficie es: ";
        cout << superficie;
        cout << "\n";

        if (superficie > 12)
        {
            cantidad = cantidad + 1;
        }
    }
    cout << "La cantidad de tri�ngulos con superficie superior a 12 son: ";
    cout << cantidad;

    return 0;
}