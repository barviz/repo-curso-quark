/*Realizar un programa que pida cargar una fecha cualquiera,
luego verificar si dicha fecha corresponde a Navidad.*/

#include<iostream>

using namespace std;

int main()
{
    int dia, mes, anio;

    cout << "Ingrese numero de día: ";
    cin >> dia;
    cout << "Ingrese numero de mes: ";
    cin >> mes;
    cout << "Ingrese numero de año: ";
    cin >> anio;

    if (mes == 12 && dia == 25)
    {
        cout << "La fecha ingresada corresponde a navidad.";
    }

    return 0;
}