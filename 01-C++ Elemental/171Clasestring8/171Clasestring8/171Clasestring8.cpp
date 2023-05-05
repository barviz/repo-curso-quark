/*Cargar un string por teclado y luego mostrar cada caracter separado por un guión*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese un palabra: ";
    getline(cin, cadena);

    for (int f = 0; f < cadena.length(); f++)
    {
        cout << cadena.at(f) << "-"; //cout << cadena[f] << "-"; acceso por subindice
    }
    return 0;
}