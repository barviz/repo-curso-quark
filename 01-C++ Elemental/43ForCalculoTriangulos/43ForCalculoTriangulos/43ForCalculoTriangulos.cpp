/*Confeccionar un programa que lea n pares de datos,
cada par de datos corresponde a la medida de la base y la altura de un triángulo.
El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.*/

#include<iostream>

using namespace std;

int main()
{
    int basetriang, altura, superficie, cantidad, f, n;
    cantidad = 0;

    cout << "Cuantos triángulos procesará: ";
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
    cout << "La cantidad de triángulos con superficie superior a 12 son: ";
    cout << cantidad;

    return 0;
}