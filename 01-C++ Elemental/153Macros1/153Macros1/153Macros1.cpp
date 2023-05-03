/*Definir tres macros y utilizarlas en distintas partes del programa.*/

#include<iostream>

#define TAMANO 5
#define MENSAJEFIN "Presione una tecla para finalizar\n"
#define DETENER cin.get();cin.get();

using namespace std;

int main()
{
    int vec[TAMANO];

    for (int f = 0; f < TAMANO; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }

    for (int f = 0; f < TAMANO; f++)
    {
        cout << vec[f] << " - ";
    }
    cout << "\n";
    cout << MENSAJEFIN;
    DETENER

        return 0;
}