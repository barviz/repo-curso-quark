/*Desarrollar un programa que permita la carga de 10 valores por teclado
y nos muestre posteriormente la suma de los valores ingresados y su promedio.*/

#include<iostream>

using namespace std;

int main()
{
    int x, suma, valor, promedio;
    x = 1;
    suma = 0;

    while (x <= 10)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;

        suma = suma + valor;
        x = x + 1;
    }

    promedio = suma / 10;
    cout << "La suma de los 10 valores es: ";
    cout << suma;
    cout << "\n";
    cout << "El promedio es: ";
    cout << promedio;

    return 0;
}