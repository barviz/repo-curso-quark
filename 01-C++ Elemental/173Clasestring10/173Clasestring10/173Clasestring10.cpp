/*Realizar un programa que permita cargar una palabra por teclado.
Modificar el string para agregar un guión entre cada letra de la palabra.*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una palabra: ";
    getline(cin, cadena);

    int posic = 1;
    int cantidad = cadena.length();

    for (int f = 1; f <= cantidad - 1; f++) {
        cadena.insert(posic, "-");
        posic = posic + 2;
    }
    cout << "Estado cadena final: " << cadena;

    return 0;
}