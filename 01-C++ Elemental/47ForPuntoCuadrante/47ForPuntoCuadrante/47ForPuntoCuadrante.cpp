/*Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.*/

#include<iostream>

using namespace std;

int main()
{
    int n, f, x, y, cantCuadr1, cantCuadr2, cantCuadr3, cantCuadr4;
    cantCuadr1 = 0;
    cantCuadr2 = 0;
    cantCuadr3 = 0;
    cantCuadr4 = 0;

    cout << "Cantidad de puntos: ";
    cin >> n;

    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese coordenada x: ";
        cin >> x;
        cout << "Ingrese coordenada y: ";
        cin >> y;

        if (x > 0 && y > 0)
        {
            cantCuadr1++;
        }
        else
        {
            if (x < 0 && y > 0)
            {
                cantCuadr2++;
            }
            else
            {
                if (x < 0 && y < 0)
                {
                    cantCuadr3++;
                }
                else
                {
                    if (x > 0 && y < 0)
                    {
                        cantCuadr4++;
                    }
                }
            }
        }
    }

    cout << "Cantidad de puntos en el primer cuadrante: ";
    cout << cantCuadr1;
    cout << "\n";
    cout << "Cantidad de puntos en el segundo cuadrante: ";
    cout << cantCuadr2;
    cout << "\n";
    cout << "Cantidad de puntos en el tercer cuadrante: ";
    cout << cantCuadr3;
    cout << "\n";
    cout << "Cantidad de puntos en el cuarto cuadrante: ";
    cout << cantCuadr4;

    return 0;
}