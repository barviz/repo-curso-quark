/*Realizar un programa que solicite la carga por teclado de dos n�meros,
si el primero es mayor al segundo informar su suma y diferencia,
en caso contrario informar el producto y la divisi�n del primero respecto al segundo.*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;

    if (num1 > num2)
    {
        int suma, diferencia;

        suma = num1 + num2;
        diferencia = num1 - num2;

        cout << "La suma de los dos valores es: ";
        cout << suma;
        cout << "\n";
        cout << "La diferencia de los dos valores es: ";
        cout << diferencia;
    }
    else
    {
        int producto, division;

        producto = num1 * num2;
        division = num1 / num2;

        cout << "El producto de los dos valores es: ";
        cout << producto;
        cout << "\n";
        cout << "La divisi�n de los dos valores es: ";
        cout << division;
    }
    return 0;
}