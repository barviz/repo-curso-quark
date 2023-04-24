/*Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es:
equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.*/

#include<iostream>

using namespace std;

int main()
{
    int x, n;
    int ladoA = 0, ladoB = 0, ladoC = 0, cantEqui = 0, cantIso = 0, cantEsca = 0;

    cout << "Ingrese la cantidad de triangulos a procesar: ";
    cin >> n;

    for (x = 1; x <= n; x++)
    {
        cout << "\nIngrese el valor del Lado A: ";
        cin >> ladoA;
        cout << "Ingrese el valor del Lado B: ";
        cin >> ladoB;
        cout << "Ingrese el valor del Lado C: ";
        cin >> ladoC;

        if (ladoA == ladoB && ladoA == ladoC)
        {
            cout << "El triangulo procesado es Equilatero: " << "\n";
            cantEqui++;
        }
        else
        {
            if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
            {
                cout << "El triangulo procesado es Isosceles: " << "\n";
                cantIso++;
            }
            else
            {
                cout << "El triangulo procesado es Escaleno: " << "\n";
                cantEsca++;
            }
        }
    }

    cout << "\n" << "Cantidad de triangulos Equilateros procesados: " << cantEqui << "\n";
    cout << "Cantidad de triangulos Isosceles procesados: " << cantIso << "\n";
    cout << "Cantidad de triangulos Escalenos procesados: " << cantEsca << "\n\n";

    if (cantEqui == cantEsca && cantEqui == cantIso)
    {
        cout << "\n" << "Tanto los triangulos Equilateros, Isosceles y Escaleno poseen la misma cantidad de triangulos";
    }
    else if (cantEqui != cantEsca && cantEqui != cantIso && cantEsca != cantIso)
    {
        if (cantEqui < cantEsca && cantEqui < cantIso) cout << "Hay menos cantidad de triangulos Equilateros";
        else if (cantEsca < cantIso) cout << "Hay menos cantidad de triangulos Escalenos";
        else cout << "Hay menos cantidad de triangulos Isosceles";
    }
    else
    {
        if (cantEqui == cantEsca)
        {
            if (cantEqui < cantIso) cout << "La cantidad de triangulos Equilateros y Escalenos es igual y es la menor cantidad";
            else cout << "Hay menos cantidad de triangulos Isosceles";
        }
        else if (cantEqui == cantIso)
        {
            if (cantEqui < cantEsca) cout << "La cantidad de triangulos Equilateros e Isosceles es igual y es la menor cantidad";
            else cout << "Hay menos cantidad de triangulos Escalenos";
        }
        else
        {
            if (cantEsca < cantEqui) cout << "La cantidad de triangulos Escalenos e Isosceles es igual y es la menor cantidad";
            else cout << "Hay menos cantidad de triangulos Equilateros";
        }
    }

    return 0;
}