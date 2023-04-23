/*Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras
y muestre un mensaje indicando si tiene 1, 2, o 3 cifras.
Mostrar un mensaje de error si el número de cifras es mayor.*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un valor de hasta tres dígitos positivo: ";
    cin >> num;

    if (num < 10)
    {
        cout << "Tiene un dígito";
    }
    else
    {
        if (num < 100)
        {
            cout << "Tiene dos dígitos";
        }
        else
        {
            if (num < 1000)
            {
                cout << "Tiene tres dígitos";
            }
            else
            {
                cout << "Error en la entrada de datos.";
            }
        }
    }

    return 0;
}