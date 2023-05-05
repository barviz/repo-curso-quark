/*Cargar una oraci�n por teclado.
Modificar el string de tal forma que se borren todos los espacios en blanco entre palabras.*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una oracion: ";
    getline(cin, cadena);

    int largo = cadena.length();

    for (int f = 0; f < largo; f++)
    {
        if (cadena[f] == ' ')
        {
            cadena.erase(f, 1);
            largo--;
        }
    }
    cout << "Oracion sin espacios: " << cadena;

    return 0;
}