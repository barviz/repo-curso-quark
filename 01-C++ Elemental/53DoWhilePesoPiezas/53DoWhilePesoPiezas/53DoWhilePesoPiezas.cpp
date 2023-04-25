/*Realizar un programa que permita ingresar el peso (en kilogramos) de piezas.
El proceso termina cuando ingresamos el valor 0. Se debe informar:
a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?,
cuántas con más de 10.2 Kg.? y cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas.*/

#include<iostream>

using namespace std;

int main()
{
    int cant1, cant2, cant3, suma;
    float peso;
    cant1 = 0;
    cant2 = 0;
    cant3 = 0;

    do {
        cout << "Ingrese el peso de la pieza (0 pera finalizar):";
        cin >> peso;

        if (peso > 10.2)
        {
            cant1++;
        }
        else
        {
            if (peso >= 9.8)
            {
                cant2++;
            }
            else
            {
                if (peso > 0)
                {
                    cant3++;
                }
            }
        }

    } while (peso != 0);

    suma = cant1 + cant2 + cant3;

    cout << "Piezas aptas: ";
    cout << cant2;
    cout << "\n";
    cout << "Piezas con un peso superior a 10.2: ";
    cout << cant1;
    cout << "\n";
    cout << "Piezas con un peso inferior a 9.8: ";
    cout << cant3;

    return 0;
}