/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de m�ltiplos de 15.
d) El valor acumulado de los n�meros ingresados que son pares.*/

#include<iostream>

using namespace std;

int main()
{
    int f, valor, negativos, positivos, mult15, sumapares;

    negativos = 0;
    positivos = 0;
    mult15 = 0;
    sumapares = 0;

    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;

        if (valor < 0)
        {
            negativos++;
        }
        else
        {
            if (valor > 0)
            {
                positivos++;
            }
        }
        if (valor % 15 == 0)
        {
            mult15++;
        }
        if (valor % 2 == 0)
        {
            sumapares = sumapares + valor;
        }
    }

    cout << "Cantidad de valores negativos: ";
    cout << negativos;
    cout << "\n";
    cout << "Cantidad de valores positivos: ";
    cout << positivos;
    cout << "\n";
    cout << "Cantidad de valores m�ltiplos de 15: ";
    cout << mult15;
    cout << "\n";
    cout << "Suma de los valores pares: ";
    cout << sumapares;

    return 0;
}