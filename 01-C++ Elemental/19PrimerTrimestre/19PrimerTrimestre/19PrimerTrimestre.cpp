/*Se carga una fecha (d�a, mes y a�o) por teclado.
Mostrar un mensaje si corresponde al primer trimestre del a�o (enero, febrero o marzo)
Cargar por teclado el valor num�rico del d�a, mes y a�o.
Ejemplo: dia:10 mes:1 a�o:2015.*/

#include<iostream>

using namespace std;

int main()
{
    int dia, mes, anio;

    cout << "Ingrese numero de d�a: ";
    cin >> dia;
    cout << "Ingrese numero de mes: ";
    cin >> mes;
    cout << "Ingrese numero de a�o: ";
    cin >> anio;

    if (mes == 1 || mes == 2 || mes == 3)
    {
        cout << "Corresponde al primer trimestre";
    }

    return 0;
}