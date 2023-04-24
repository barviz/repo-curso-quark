/*Se carga una fecha (día, mes y año) por teclado.
Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo)
Cargar por teclado el valor numérico del día, mes y año.
Ejemplo: dia:10 mes:1 año:2015.*/

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

    if (mes == 1 || mes == 2 || mes == 3)
    {
        cout << "Corresponde al primer trimestre";
    }

    return 0;
}