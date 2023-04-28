/*Desarrollar un programa que permita cargar n n�meros enteros y luego nos informe
cu�ntos valores fueron pares y cu�ntos impares.
Emplear el operador �%� en la condici�n de la estructura condicional
(este operador retorna el resto de la divisi�n de dos valores, por ejemplo 11%2 retorna un 1):
	if (valor%2==0)         //Si el if da verdadero luego es par.*/

#include<iostream>

using namespace std;

int main()
{
    int n, x, valor, pares, impares;

    x = 1;
    pares = 0;
    impares = 0;

    cout << "Cuantos numeros ingresara: ";
    cin >> n;

    while (x <= n)
    {
        cout << "Ingrese el valor: ";
        cin >> valor;

        if (valor % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        x = x + 1;
    }
    cout << "Cantidad de pares ingresados: ";
    cout << pares;
    cout << "\n";
    cout << "Cantidad de impares ingresados: ";
    cout << impares;

    return 0;
}