/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.*/

#include<iostream>

using namespace std;

int main()
{
    int f, edad, suma1, suma2, suma3, prom1, prom2, prom3;

    suma1 = 0;
    suma2 = 0;
    suma3 = 0;

    for (f = 1; f <= 5; f++)
    {
        cout << "Ingrese la edad: ";
        cin >> edad;
        suma1 = suma1 + edad;
    }
    prom1 = suma1 / 5;

    cout << "Promedio de edades del turno mañana: ";
    cout << prom1;
    cout << "\n";

    for (f = 1; f <= 6; f++)
    {
        cout << "Ingrese la edad: ";
        cin >> edad;
        suma2 = suma2 + edad;
    }
    prom2 = suma2 / 6;
    cout << "Promedio de edades del turno tarde: ";
    cout << prom2;
    cout << "\n";

    for (f = 1; f <= 11; f++)
    {
        cout << "Ingrese la edad: ";
        cin >> edad;
        suma3 = suma3 + edad;
    }
    prom3 = suma3 / 11;
    cout << "Promedio de edades del turno noche: ";
    cout << prom3;
    cout << "\n";

    if (prom1 < prom2 && prom1 < prom3)
    {
        cout << "El turno mañana tiene un promedio menor de edades.";
    }
    else
    {
        if (prom2 < prom3)
        {
            cout << "El turno tarde tiene un promedio menor de edades.";
        }
        else
        {
            cout << "El turno noche tiene un promedio menor de edades.";
        }
    }

    return 0;
}