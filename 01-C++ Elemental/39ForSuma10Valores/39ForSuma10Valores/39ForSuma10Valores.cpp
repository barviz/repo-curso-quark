/*Desarrollar un programa que permita la carga de 10 valores por teclado
y nos muestre posteriormente la suma de los valores ingresados y su promedio.
Este problema ya lo desarrollamos, lo resolveremos empleando la estructura for.*/

#include<iostream>

using namespace std;

int main()
{
    int suma, i, valor, promedio;

    suma = 0;

    for (i = 1; i <= 10; i++)
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        suma = suma + valor;
    }

    cout << "La suma es: ";
    cout << suma;
    cout << "\n";
    promedio = suma / 10;
    cout << "El promedio es: ";
    cout << promedio;

    return 0;
}