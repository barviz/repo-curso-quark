/*Desarrollar un programa que solicite la carga de 10 números
e imprima la suma de los últimos 5 valores ingresados.*/

#include<iostream>

using namespace std;

int main()
{
    int f, valor, suma;
    suma = 0;

    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;

        if (f > 5)
        {
            suma = suma + valor;
        }
    }
    cout << "La suma de los últimos 5 valores es: ";
    cout << suma;

    return 0;
}