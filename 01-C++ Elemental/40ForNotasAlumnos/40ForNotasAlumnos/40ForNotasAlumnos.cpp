/*Escribir un programa que lea 10 notas de alumnos y nos informe
cuántos tienen notas mayores o iguales a 7 y cuántos menores.

Para resolver este problema se requieren tres contadores:

aprobados (Cuenta la cantidad de alumnos aprobados)
reprobados (Cuenta la cantidad de reprobados)
f (es el contador del for)*/

#include<iostream>

using namespace std;

int main()
{
    int aprobados, reprobados, f, nota;

    aprobados = 0;
    reprobados = 0;

    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese la nota: ";
        cin >> nota;

        if (nota >= 7)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }
    }

    cout << "Cantidad de aprobados: ";
    cout << aprobados;
    cout << "\n";
    cout << "Cantidad de reprobados: ";
    cout << reprobados;

    return 0;
}